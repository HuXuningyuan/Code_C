#include <stdio.h>

int main() {
    int score;

    // 用户输入分数
    printf("请输入你的分数（0-100）：");
    scanf("%d", &score);

    // 根据分数判断成绩等级
    if (score < 0 || score > 100) {
        printf("分数无效，请输入0到100之间的分数。\n");
    } else if (score >= 90) {
        printf("成绩等级：A\n");
    } else if (score >= 80) {
        printf("成绩等级：B\n");
    } else if (score >= 70) {
        printf("成绩等级：C\n");
    } else if (score >= 60) {
        printf("成绩等级：D\n");
    } else {
        printf("成绩等级：F\n");
    }

    return 0;
}