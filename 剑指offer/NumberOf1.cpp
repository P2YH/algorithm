//32λ����ϵͳ��ѭ��32��
int  NumberOf1(int n) {
 int iFlag = 1;
 int iCount = 0;
 while(iFlag){
	 if(n & iFlag){
		 iCount++;
	 }
	 iFlag = iFlag<<1;
 }
 return iCount;
}
//�ж��ٸ�1��ѭ������
int NumberOf1(int n){
	int iCount = 0;
	while(n){
		++iCount;
		n = n & (n - 1)
	}
	return iCount;
}