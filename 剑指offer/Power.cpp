double Power(double base, int exponent) {
    	if(equal(base, 0.0) && exponent < 0){
            return 0.0;
        }
        double result = 0.0;
        unsigned absExponent = (unsigned)exponent;
        if(exponent < 0){
        	absExponent = (unsigned)(-exponent);//注意此处如果没有用-号，整型强转为无符号整型会变成很大的数
        }
        result = PowerUnsignedExponent(base, absExponent);
        if(exponent < 0){
            result = 1.0/result;
        }
        return result;
        
    }
    bool equal(double left, double right){
        if( (right - left > -0.0000001) && (right - left < 0.0000001)){
            return true;
        }
        return false;
    }
    double PowerUnsignedExponent(double base, unsigned int exponent){
        double result = 1.0;
        for(unsigned i = 0; i < exponent; ++i){
            result *= base;
        }
        return result;
    }