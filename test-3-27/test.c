#include<stdio.h>

//���ݵĴ洢

char* my_strcpy(char* dest, const char* stc)
{
	char* ret = dest;
	assert(dest != NULL);//��ָ֤�����Ч��  NULL-��ָ��
	assert(stc != NULL);
		//��stcָ����ַ���������destָ��Ŀռ䣬������\0'�ַ�
	while (*dest++ = *stc++)
	{
		;
	
	}
	
	return ret;
}

int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "################";
	char arr2[] = "biter";

	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}


//int main()
//{
//	//дһ�δ����жϵ�ǰ���ֽ�����ʲô
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}