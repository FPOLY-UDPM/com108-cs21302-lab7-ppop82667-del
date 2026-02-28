/******************************************************************************
 * Họ và tên: [Huỳnh Việt Tiến]
 * MSSV:      [PS47459]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char userSys[] = "admin";
    int passSys = 12345;

    char user[100];
    int pass;

    printf("Nhap username: ");
    fgets(user, sizeof(user), stdin);

    // xóa ký tự xuống dòng
    user[strcspn(user, "\n")] = '\0';

    printf("Nhap password: ");
    scanf("%d", &pass);

    if (strcmp(user, userSys) == 0 && pass == passSys) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai!\n");
    }

    return 0;
}
