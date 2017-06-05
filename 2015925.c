#include <graphics.h>
#include <conio.h>
#include <math.h>

void Block(int length);		// �����麯������
void StrongBlock();			// ��̬���巽�麯������

// ������
int main()
{
	StrongBlock();
	return 0;
}

// �����麯������
void Block(int length, COLORREF color)
{
	setorigin(getwidth() / 2, getheight() / 2);			// ��������ԭ��Ϊ��������
	POINT a[4][6];						// �����ά�����ŵ㣬4���ߣ�ÿ���߷�5�Σ�Ҳ����6����
	int i, j;

	// ˳ʱ���ʼ�������꣬��һ����Ϊ����ԭ�����Ϸ��ı�
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 6; i++)			// ��ʼ��ÿ�����ϵ�6��������
		{
			a[j][i].x = (int)pow(-1, j / 2 + j % 2 + 1) * length * i / 5;
			a[j][i].y = (int)pow(-1, j / 2 + 1) * length * (5 - i) / 5;
		}
	}

	setlinecolor(color);				// ����������ɫ
	for (i = 0, j = 5; i < 6; i++, j--)
	{
		line(a[0][i].x, a[0][i].y, a[2][j].x, a[2][j].y);   // ���ӵ�һ���͵��������ϵ�6�Ե�����
		line(a[1][i].x, a[1][i].y, a[3][j].x, a[3][j].y);	// ���ӵڶ����͵��������ϵ�6�Ե�����
	}
}

// ��̬���巽�麯������
void StrongBlock()
{
	initgraph(800,800);
	int length;
	float H, S, L;
	while (!kbhit())
	{
		length = 10;
		H = 0;
		S = 1;
		L = 0.5;
		while (length <= getwidth() / 2)
		{
			Block(length, HSLtoRGB(H, S, L));
			Sleep(150);
			length += 4;		// ���ȵ���
			H += (float)1.8;	// �ı���ɫ
		}
		length = 400;
		H = 360;
		S = 1;
		L = 0.5;
		while (length > 10)
		{
			Block(length, HSLtoRGB(H, S, L));
			Sleep(150);
			length -= 4;		// ���ȵݼ�
			H -= (float)1.8;	// �ı���ɫ
		}
	}
	getch();
	closegraph();
}