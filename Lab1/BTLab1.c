

#include <stdio.h> // Thư viện nhập/xuất

int main(){
    // printf("Hello Word\n");
    // printf("Hello Word");

    int a,b;
    char ten[50];
    printf("Nhap so a va b");
    scanf("%d%d", &a, &b);

    printf("Nhap vao ten toi: ");
    scanf("%s", ten);
    
    printf("a = %d, b = %d\n", a, b);
    printf("Ten cua ban la: %s\n", ten);
    
    return 0;
}
