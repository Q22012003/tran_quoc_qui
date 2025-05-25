#include <stdio.h>
#include <string.h>

typedef struct {
    char light;
    char fan;
    char motor;
} smartHome_t;

const char* data = "{\"light\": \"on\",\"fan\" : \"off\",\"motor\" : \"off\"}";

int get_status(const char* src, const char* key) {
    // Tìm vị trí key trong chuỗi
    const char* key_pos = strstr(src, key);
    if (key_pos == NULL) return -1;

    // Tìm dấu ':' sau key
    const char* colon = strchr(key_pos, ':');
    if (colon == NULL) return -1;

    // Tìm dấu '"' bắt đầu giá trị
    const char* val_start = strchr(colon, '"'); // tìm dấu " đầu tiên và " cuối cùng của từ khóa "on" để tìm được khoảng cách len
    if (val_start == NULL) return -1;
    val_start++; // bỏ qua dấu "

    // Tìm dấu '"' kết thúc giá trị
    const char* val_end = strchr(val_start, '"');
    if (val_end == NULL) return -1;

    // Tính độ dài chuỗi giá trị
    int len = val_end - val_start;

    // So sánh với "on" hoặc "off"
    if (len == 2 && strncmp(val_start, "on", 2) == 0) return 1;
    if (len == 3 && strncmp(val_start, "off", 3) == 0) return 0;

    return -1;
}

smartHome_t pair_data(const char* data) {
    smartHome_t result;

    // Lấy trạng thái từng thiết bị
    int light_status = get_status(data, "light");
    int fan_status = get_status(data, "fan");
    int motor_status = get_status(data, "motor");

    // Gán kết quả
    result.light = (light_status == 1) ? '1' : '0';
    result.fan = (fan_status == 1) ? '1' : '0';
    result.motor = (motor_status == 1) ? '1' : '0';

    return result;
}

int main() {
    smartHome_t x = pair_data(data);
    printf("Light: %c\nFan: %c\nMotor: %c\n", x.light, x.fan, x.motor);
    return 0;
}
