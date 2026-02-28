/******************************************************************************
 * Họ và tên: [Huỳnh Việt Tiến]
 * MSSV:      [PS47459]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i = 0;
    int n = 0;  // đếm nguyên âm
    int p = 0;  // đếm phụ âm

    printf("Nhap vao chuoi: ");
    fgets(s, sizeof(s), stdin);   // nhập chuỗi

    // duyệt từng ký tự cho đến khi gặp '\0'
    while(s[i] != '\0') {

        // kiểm tra có phải chữ cái không
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {

            // kiểm tra nguyên âm
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
               s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                n++;
            } else {
                p++;
            }
        }

        i++;
    }

    printf("Chuoi co %d nguyen am va %d phu am\n", n, p);

    return 0;
}