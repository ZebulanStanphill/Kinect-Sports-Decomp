extern unsigned fn_82E5A688();
unsigned char fn_82E5AFB0(int p, unsigned n, unsigned *out) {
 unsigned r;
 *out = 0;
 if (n >= *(unsigned *)(p + 0x68)) return 0;
 r = fn_82E5A688(p,n,out);
 if ((int)r < 0) *out = 0;
 return (r >> 31) ^ 1;
}
