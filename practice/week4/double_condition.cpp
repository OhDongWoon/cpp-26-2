#include <stdio.h> // C 표준 입출력 라이브러리 (C를 사용하고 싶을 때 사용 가능)

int main() {
    int number1, number2;

    printf("두 양수를 입력하세요: ");
    scanf("%d %d", &number1, &number2);

    if (number1 > 0){
        if (number2 > 0){
            printf("%d, %d 두 숫자 모두 양수입니다. \n", number1, number2);
        }
        else {
            printf("%d 만 양수입니다, \n", number1);
        }
    }
    else {
        printf("%d 는 0이거나 음수입니다, \n", number1);
    }
    return 0;
}