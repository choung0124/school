#include <stdio.h>

int main() {
    int year, zodiac;
    const char* animals[] = {"쥐", "소", "호랑이", "토끼", "용", "뱀", "말", "양", "원숭이", "닭", "개", "돼지"};

    printf("입력년도: ");
    scanf("%d", &year);

    if(year < 1900) {
        printf("1900년 이상의 년도를 입력하세요.\n");
        return 0;
    }

    zodiac = (year - 1900) % 12;
    printf("%d년은 %s의 해입니다.\n", year, animals[zodiac]);

    return 0;
}