int getSum(int a, int b) {
     while (b != 0) {
        unsigned carry = (unsigned)(a & b) << 1; // calculate carry
        a = a ^ b;  // add without carry
        b = carry;  // assign carry
    }
    return a;
}