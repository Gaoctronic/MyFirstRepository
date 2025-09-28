/*随机步法（Random Walk）

编写程序，生成一种贯穿10×10字符数组（初始时全为字符'.'）的“随机步法”。程序必须随机地从一个元素“走到”另一个元素，每次都向上、向下、向左或向右移动一个元素位置
已访问过的元素按访问顺序用字母A到Z进行标记。

下面是一个输出示例：

A	.	.	.	.	.	.	.	.	.
B	C	D	.	.	.	.	.	.	.
.	F	E	.	.	.	.	.	.	.
H	G	.	.	.	.	.	.	.	.
I	.	.	.	.	.	.	.	.	.
J	.	.	.	.	.	.	.	Z	.
K	.	.	R	S	T	U	V	Y	.
L	M	P	Q	.	.	.	W	X	.
.	N	O	.	.	.	.	.	.	.
利用srand函数和rand函数产生随机数，然后查看次数除以4的余数。余数一共有4种可能的值（0、1、2和3），指示下一次移动的4种可能方向。在执行移动之前，需要检查两项内容
一是不能走到数组外面，二是不能走到已有字母标记的位置。只要一个条件不满足，就得尝试换一个方向移动。如果4个方向都堵住了，程序就必须终止了。下面是提前结束的一个示例:

A	B	G	H	I	.	.	.	.	.
.	C	F	O	J	K	.	.	.	.
.	D	E	N	M	L	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
因为Y的4个方向都堵住了，所以没有地方可以放置下一步的Z了。*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char table[10][10];
    int x = 0, y = 0;
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = '.';
        }
    }

    for (int step = 'A'; step <= 'Z';)
    {
        table[x][y] = (char)step;

        if (x >= 1 && x <= 8 && y >= 1 && y <= 8)
        {
            if ((table[x + 1][y] != '.') &&
                (table[x - 1][y] != '.') &&
                (table[x][y + 1] != '.') &&
                (table[x][y - 1] != '.'))
            {
                break;
            }
        } else if (x == 0 && y >= 1 && y <= 8)
        {
            if ((table[x + 1][y] != '.') &&
                (table[x][y + 1] != '.') &&
                (table[x][y - 1] != '.'))
            {
                break;
            }
        } else if (x == 9 && y >= 1 && y <= 8)
        {
            if ((table[x - 1][y] != '.') &&
                (table[x][y + 1] != '.') &&
                (table[x][y - 1] != '.'))
            {
                break;
            }
        } else if (y == 0 && x >= 1 && x <= 8)
        {
            if ((table[x + 1][y] != '.') &&
                (table[x - 1][y] != '.') &&
                (table[x][y + 1] != '.'))
            {
                break;
            }
        } else if (y == 9 && x >= 1 && x <= 8)
        {
            if ((table[x + 1][y] != '.') &&
                (table[x - 1][y] != '.') &&
                (table[x][y - 1] != '.'))
            {
                break;
            }
        } else if (x == 0 && y == 0)
        {
            if ((table[x + 1][y] != '.') &&
                (table[x][y + 1] != '.'))
            {
                break;
            }
        } else if (x == 9 && y == 0)
        {
            if ((table[x - 1][y] != '.') &&
                (table[x][y + 1] != '.'))
            {
                break;
            }
        } else if (x == 0 && y == 9)
        {
            if ((table[x + 1][y] != '.') &&
                (table[x][y - 1] != '.'))
            {
                break;
            }
        } else if (x == 9 && y == 9)
        {
            if ((table[x - 1][y] != '.') &&
                (table[x][y - 1] != '.'))
            {
                break;
            }
        } 
        

        int direction = rand() % 4;

        if (direction == 0)
        {
            if (x >= 9 || table[x + 1][y] != '.')
            {
                continue;
            }
        }

        if (direction == 1)
        {
            if (x <= 0 || table[x - 1][y] != '.')
            {
                continue;
            }
        }
        
        if (direction == 2)
        {
            if (y >= 9 || table[x][y + 1] != '.')
            {
                continue;
            }
            
        }
        
        if (direction == 3)
        {
            if (y <= 0 || table[x][y - 1] != '.')
            {
                continue;
            }
        }


        switch (direction)
        {
        case 0:
            x++;
            break;
        case 1:
            x--;
            break;
        case 2:
            y++;
            break;
        case 3:
            y--;
            break;
        default:
            break;
        }

        step++;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c\t", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
