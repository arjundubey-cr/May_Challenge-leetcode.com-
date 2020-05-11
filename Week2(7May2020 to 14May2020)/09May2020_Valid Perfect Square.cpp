class Solution {
public:
    bool isPerfectSquare(int num) {
        long double number = sqrt(num);
        if(number-floor(number)==0){
            return true;
        }
        else
        {
            return false;
        }
    }
};
