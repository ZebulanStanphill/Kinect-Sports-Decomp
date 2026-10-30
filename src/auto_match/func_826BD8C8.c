typedef int (*F)(void *);
int *fn_826BD8C8(int *p) {
 int v = (*(F *)(*p + 8))(p);
 unsigned char b;
 if (v < 6 || v > 0x2a) b = 0; else b = 1;
 if (b) return p - 4;
 return 0;
}
