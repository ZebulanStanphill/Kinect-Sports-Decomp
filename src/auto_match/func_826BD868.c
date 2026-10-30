typedef int (*F)(void *);
int *fn_826BD868(int *p) {
 int v = (*(F *)(*p + 8))(p);
 unsigned char b;
 if (v < 2 || v > 5) b = 0; else b = 1;
 if (b) return p - 0x1a;
 return 0;
}
