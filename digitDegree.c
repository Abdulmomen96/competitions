int solution(int n) {
    int sum = n;
    int i = 0;
    while (n >= 10)
    {
        i += (n % 10 ==0)? 0:1;
        n /= 10;
    }
    return i;

}
