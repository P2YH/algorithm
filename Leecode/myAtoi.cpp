class Solution {
public:
    int myAtoi(string str) {
		//空字符串判定
        if (str.empty())
    	{
    		return 0;
    	}
    	int nSize = str.length();
     	long long Res = 0;
    	int sign = 1;
    	int i = 0;
		//排除空字符
    	while (str[i] == ' ' && i <= nSize)
    	{
    		i++;
    	}
		//判断正负号
    	if ( str[i] == '-')
    	{
    		sign = -1;
    		i++;
    	}
    	else if ( str[i] == '+')
    	{
    	    i++;
    	}

    	for(; i <= nSize; i++)
    	{
			//第一个非空字符必须是 + - 数字
			//这里也自然就排除了无数字字符的字符串
			//截取到第一个不为数字字符的位置
    	   	if(str[i] < '0' || str[i] > '9')
        	{
        	   break;
        	}
    	   	if(str[i] >= '0' && str[i] <= '9')
        	{
        		Res = Res * 10 + str[i] - '0';
				//整型最大最小值判断
        		if ( Res > INT_MAX)
        		{
        			Res = sign < 0 ? INT_MIN : INT_MAX;
        			return Res;
        		}
        	}
    	}
    
    	return Res*sign;
    }
};
