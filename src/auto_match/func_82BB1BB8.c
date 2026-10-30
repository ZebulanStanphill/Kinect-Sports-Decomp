unsigned fn_82BB1BB8(char *p,unsigned n) { unsigned *a=*(unsigned **)(p+0x85c); unsigned v=(a[(n>>5)+2] >> (n&31)) & 1; return ((int)(-v & ~v) < 0); }
