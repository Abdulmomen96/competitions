class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int shot = minutesToTest / minutesToDie + 1;
        if (buckets == 1) return 0;
        int mult = shot;
        int min_pigs = 1;
        while(mult < buckets)
        {
            mult *= shot;
            min_pigs ++;

        }
        return min_pigs;

    }
};