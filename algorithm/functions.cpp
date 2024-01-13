long long floor(long long x, long long m) {
   return x - ((x % m) + m) % m;
}


long long pow(long long x, long long n, long long m) {
   long long ret = 1 % m;
   while (n) {
      if (n & 1) ret = (ret * x) % m;
      x = (x * x) % m;
      n >>= 1;
   }
   return ret;
}

