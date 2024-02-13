void fan(char arr[], char kong[], int len)
{
	int i = 0;
	int left = 0;
	int right = len - 1;
	while (1)
	{
		//i++;
		if (arr[i] != ' ')
		{
			printf("%c", arr[i]);
			//第i位是空格；
			break;
		}
		else
			i++;
	}
	int Rword = right - i;//右边单词的长度；
	//把arr0到Rword的字符空出来，赋值成从i+1到right的内容；
	int leftt = 0;
	for (leftt = 0; leftt <= Rword; leftt++)
	{
		kong[leftt] = arr[leftt];
		arr[leftt] = arr[leftt + i + 1];
	}
	arr[Rword + 1] = ' ';
	int hehe = Rword + 1;
	for (hehe = Rword+1; hehe < Rword+i; hehe++)
	{
		int jb = 0;
		for (jb = 0; jb < i; jb++)
		{
			arr[hehe] = kong[jb];
		}
	}
}
#include<stdio.h>
#include<string>
int main()
{
	char kong[] = { 0 };
	char arr[] = { 0 };
	scanf_s("%s", arr);
	int len =strlen(arr);
	fan(arr,kong,len);
	printf("%s", arr);
	return 0;
}