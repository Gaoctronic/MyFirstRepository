/*最大最小单词简略版（The Biggest and Smallest Words）

编写程序找出一组单词中“最小”单词和“最大”单词。

用户输入单词后，程序根据字典顺序决定排在最前面和最后面的单词。

当用户输入4个字母的单词时，程序停止读入。假设所有单词都不超过20个字母。

输出范例1：
Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish


Smallest word: cat
Largest word zebra


输出范例2：


Enter word: computer
Enter word: ink
Enter word: light
Enter word: bookrack
Enter word: book


Smallest word: book
Largest word: light*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char words[100][21], str[21] = {'0'};
    int i, lengthCount = 0;

    for (i = 0; lengthCount != 4; i++)
    {
        printf("Enter word:");
        scanf("%s", &words[i]);
        lengthCount = strlen(words[i]);
    }
    
    for (int j = 0; j < i - 1; j++)
    {
        for (int k = 0; k < (i - j - 1); k++)
        {
            if (strcmp(words[k], words[k + 1]) > 0) {
                strcpy(str, words[k]);
                strcpy(words[k], words[k + 1]);
                strcpy(words[k + 1], str);
            }
        }
    }

    printf("Smallest word: %s\n", words[0]);
    printf("Largest word: %s\n", words[i - 1]);
    
    return 0;
}
