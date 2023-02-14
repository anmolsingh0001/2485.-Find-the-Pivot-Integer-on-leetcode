class Solution {
public:
    int pivotInteger(int n) {
        int sum;
        sum=(n*(n+1))/2;
        int square=sqrt(sum);
        if(square*square==sum){
            return square;
        }
        return -1;
        return{};
    }
};