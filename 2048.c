#include<stdio.h>  //��׼�������
#include<stdlib.h>  //�������ߺ���
#define bool int  //C���û�в�������,���Լ���
#define true 1   //bool������ֵ
#define false 0
int MAP[4][4] = { 0 };  //��ͼ,Ĭ��0��Ϊ�ǿ�λ
typedef enum {   //����һ���������͵�ö�ٱ���
    UNKNOW,
    UP,
    DOWN,
    LEFT,
    RIGHT
} Direction;

void printMap();  //����ͼ��
Direction getNextDirection(); //�Ӽ��̶�����һ���û�����
bool canMove(Direction direction); //�ж��Ƿ���Խ���ָ������Ĳ���
void doAction();   //��Ϸ�¼�
void move(Direction direction);  //�ƶ�����
void putNew();    //����һ���µ�����
int main() {    //������
    Direction nextStep;   //��һ��
    int i, j;
    srand(time(0));
    putNew();    //��Ϸ��ʼĬ�Ϸ���������
    putNew();
    printMap();    //��ӡ����
    while (1) {
        if (!canMove(UP) && !canMove(LEFT) && !canMove(DOWN) && !canMove(RIGHT)) break; //���ⷽ�򶼲����ƶ�,��ô��ֹ��Ϸ
        nextStep = getNextDirection();  //��ȡ��һ���û�����
        if (nextStep == UNKNOW) continue;  //�����֪���û����˸�ʲô�������û����Ұ���,��ô�����µ�ѭ��
        if (!canMove(nextStep)) continue; //�����һ�����ɼ�������,�����µ�ѭ��
        system("cls");    //����Windows��˵,ִ������������cls����
        doAction(nextStep);   //ִ�в���
        putNew();    //���µ�����
        printMap();    //��ӡ����
    }
    printf("You Died!");   //��ʾ��Ϸ����
    while (1);     //�ȴ���Ϸ����
}

void printMap() {
    int i, j;
    printf("*-------*-------*-------*-------*\n");
    for (i = 0; i < 4; i++) {
        printf("|");
        for (j = 0; j < 4; j++) {
            MAP[i][j] ? printf("%d", MAP[i][j]) : printf(" ");
            printf("\t|");
            if (j > 2)
                printf("\n");
        }
        printf("*-------*-------*-------*-------*\n");
    }
}
void doAction(Direction direction) {
    int i, j, k;
    /**
     * Ϊ�˷��㴦������,��ÿ��������˶�������Ϊ����
     * 1.�����ֹ鲢��һ������
     * 2.������ͬ���ֿ���,�������������ݶ�Ϊ0
     * 3.�ٴν����ֹ鲢��һ������
     */
     //1.�ƶ�����,ȡ������֮��Ŀ�λ
    move(direction);
    //2.���շ�������ͬ����
    switch (direction) {
    case UP:
        //����ö��
        for (i = 0; i < 4; i++) {
            //����ÿһ�е�ÿһ��Ԫ��
            for (j = 0; j < 3; j++) {
                //���Ԫ�ط���,���ҵ�ǰ����һ����ͬ,��ǰ�ķ���,��һ������
                if (MAP[j][i] && MAP[j][i] == MAP[j + 1][i]) {
                    MAP[j][i] += MAP[j + 1][i];
                    MAP[j + 1][i] = 0;
                }
            }
        }
        break;
    case LEFT://ͬ��
        for (i = 0; i < 4; i++)
            for (j = 0; j < 3; j++)
                if (MAP[i][j] && MAP[i][j] == MAP[i][j + 1]) {
                    MAP[i][j] += MAP[i][j + 1];
                    MAP[i][j + 1] = 0;
                }
        break;
    case DOWN://ͬ��
        for (i = 0; i < 4; i++)
            for (j = 3; j > 0; j--)
                if (MAP[j][i] && MAP[j][i] == MAP[j - 1][i]) {
                    MAP[j][i] += MAP[j - 1][i];
                    MAP[j - 1][i] = 0;
                }
        break;
    case RIGHT://ͬ��
        for (i = 0; i < 4; i++)
            for (j = 3; j > 0; j--)
                if (MAP[i][j] && MAP[i][j] == MAP[i][j - 1]) {
                    MAP[i][j] += MAP[i][j - 1];
                    MAP[i][j - 1] = 0;
                }
        break;
    }
    //3.�ƶ�����,ȡ����Ϊ��һ������������²����Ŀ�λ
    move(direction);
}
void move(Direction direction) { //�ƶ�����
    int i, j, k;
    switch (direction) {
    case UP:
        //����ö��
        for (i = 0; i < 4; i++)
            //����ÿһ�е�ÿһ��Ԫ��
            for (j = 0; j < 4; j++)
                //�������,��ôӦ��ȡ����ǰλ��,���Ԫ����ǰ�ƶ�
                if (!MAP[j][i]) {
                    for (k = j; k < 3; k++) {
                        MAP[k][i] = MAP[k + 1][i];
                    }
                    //�²����Ŀ�λ����
                    MAP[k][i] = 0;
                }
        break;
    case LEFT://ͬ��
        for (i = 0; i < 4; i++)
            for (j = 0; j < 4; j++)
                if (!MAP[i][j]) {
                    for (k = j; k < 3; k++) {
                        MAP[i][k] = MAP[i][k + 1];
                    }
                    MAP[i][k] = 0;
                }
        break;
    case DOWN://ͬ��
        for (i = 0; i < 4; i++)
            for (j = 3; j >= 0; j--)
                if (!MAP[j][i]) {
                    for (k = j; k > 0; k--) {
                        MAP[k][i] = MAP[k - 1][i];
                    }
                    MAP[k][i] = 0;
                }
        break;
    case RIGHT://ͬ��
        for (i = 0; i < 4; i++)
            for (j = 3; j >= 0; j--)
                if (!MAP[i][j]) {
                    for (k = j; k > 0; k--) {
                        MAP[i][k] = MAP[i][k - 1];
                    }
                    MAP[i][k] = 0;
                }
        break;
    }
}
bool canMove(Direction direction) { //�ж��Ƿ���Խ���ָ������Ĳ���
    int i, j;
    switch (direction) {
    case UP:
        //���μ��ÿһ��
        for (i = 0; i < 4; i++) {
            //�����ų���Զ�˵�һ����λ,ֱ�ӽ�jָ���һ������Ԫ��
            for (j = 3; j >= 0; j--)
                if (MAP[j][i])
                    break;
            //j>0������һ�в���ȫ��Ϊ0
            if (j > 0)
                //���μ��ÿһ��ʣ��Ԫ��,������λֱ�ӷ���true
                for (; j >= 0; j--)
                    if (!MAP[j][i])
                        return true;
            //���μ�����ڵ�Ԫ���Ƿ������ͬ�ķ�������
            for (j = 3; j > 0; j--)
                if (MAP[j][i] && MAP[j][i] == MAP[j - 1][i])
                    return true;
        }
        break;
    case DOWN://ͬ��
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++)
                if (MAP[j][i]) break;
            if (j < 4)
                for (; j < 4; j++)
                    if (!MAP[j][i]) return true;
            for (j = 0; j < 3; j++)
                if (MAP[j][i] && MAP[j][i] == MAP[j + 1][i])
                    return true;

        }
        break;
    case LEFT://ͬ��
        for (i = 0; i < 4; i++) {
            for (j = 3; j >= 0; j--)
                if (MAP[i][j])
                    break;
            if (j >= 0)
                for (; j >= 0; j--)
                    if (!MAP[i][j])
                        return true;
            for (j = 0; j < 3; j++)
                if (MAP[i][j] && MAP[i][j] == MAP[i][j + 1])
                    return true;
        }
        break;
    case RIGHT://ͬ��
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++)
                if (MAP[i][j])
                    break;
            if (j < 4)
                for (; j < 4; j++)
                    if (!MAP[i][j])
                        return true;
            for (j = 0; j < 3; j++) {
                if (MAP[i][j] && MAP[i][j] == MAP[i][j + 1])
                    return true;
            }
        }
        break;
    }
    //��������������������,���ز���ִ�еĽ��
    return false;
}
Direction getNextDirection() {
    //��һ���ֽڱ�����224,�����ж�����Ĳ��ǹ��ܼ�
    if (getch() != 224) return UNKNOW;
    //���ݵڶ��ֽڶ�Ӧ�����û��Ĳ���
    switch (getch()) {
    case 72:
        return UP;
    case 80:
        return DOWN;
    case 75:
        return LEFT;
    case 77:
        return RIGHT;
    default:
        return UNKNOW;
    }
}
void putNew() {
    //Ϊ�˷������,��ʱ�洢һ�����п��и��ӵ�ָ��,����������һ�����Ե��ڴ��������ʵ�ֶ����п�λ����һ��λ���������.
    int* boxes[16] = { NULL };
    //������ʱ����Ŀ����ӵĵ�ַ
    int* target;
    //ͳ��һ���ж��ٸ���Ч�ո�
    int count = 0;
    int i, j;
    //ͳ�ƿ�λ,���ֿ�λ�������ַ���ۼӼ�����
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (!MAP[i][j]) {
                boxes[count] = &MAP[i][j];
                count++;
            }
    if (count) {
        //����п�λ,��ô����һλ���������ֵ����,����ÿһλ����������ͬ��
        target = boxes[rand() % count];
        //50%���ܳ���2 50% ���ܳ���4
        *target = rand() % 2 ? 2 : 4;
    }
}