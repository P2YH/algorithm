class Solution {
public:
    int myAtoi(string str) {
        if (str.empty())
    	{
    		return 0;
    	}
    	int nSize = str.length();
     	long long Res = 0;
    	int sign = 1;
    	int i = 0;
    	while (str[i] == ' ')
    	{
    		i++;
    	}
    	if ( str[i] == '-')
    	{
    		sign = -1;
    		i++;
    		if(str[i] < '0' || str[i] > '9')
        	{
        		return 0;
        	}
    	}
    	if ( str[i] == '+')
    	{
    	    i++;
    	}
    	if(str[i] < '0' || str[i] > '9')
    	{
    	    return 0;
    	}
    	for(; i <= nSize; i++)
    	{
    	   	if(str[i] < '0' || str[i] > '9')
        	{
        	   break;
        	}
    	   	if(str[i] >= '0' && str[i] <= '9')
        	{
        		Res = Res * 10 + str[i] - '0';
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
