class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1 ;
        double guess = x/2;
        while(true){
            double new_guess = (guess + x/guess)/2;
            if(abs(new_guess-guess) < 1e-15) break;
            guess = new_guess;
        }
        return static_cast<int>(guess);
    }
};