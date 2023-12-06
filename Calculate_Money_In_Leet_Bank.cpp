class Solution {
public:
    int totalMoney(int n) {

        int weeks = n / 7;
        int money = 28 * weeks;

        money += 7 * weeks * (weeks - 1) / 2;

        int residual_days = n % 7 ;
        
        for (int i = weeks, j = 1; j <= residual_days; j++)
        {
            money += weeks + j;
        }

        return money;

    }

};