//32位操作系统中循环32次
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
//有多少个1就循环几次
int NumberOf1(int n){
	int iCount = 0;
	while(n){
		++iCount;
		n = n & (n - 1)
	}
	return iCount;
}