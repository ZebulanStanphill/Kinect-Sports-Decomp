extern unsigned fn_82E642F0();
unsigned char fn_82E64450(int p, unsigned n, unsigned *out) {
 unsigned r;
 *out = 0;
 if (n >= *(unsigned *)(p + 0x68)) return 0;
 r = fn_82E642F0(p,n,out);
 if ((int)r < 0) *out = 0;
 return (r >> 31) ^ 1;
}
