int fib(int n){
    if (n <= 1)
        return n;

    int first = 0;   // F(0)
    int second = 1;  // F(1)
    int next;

    for (int i = 2; i <= n; i++) {
        next = first + second; // calculate the next Fibonacci number
        first = second;        // move second to first
        second = next;         // move next to second
    }
 return second;
}