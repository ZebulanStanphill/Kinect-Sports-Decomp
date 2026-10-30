typedef struct { unsigned pad1:25; unsigned flag:1; unsigned pad2:6; } Bits;
extern void fn_82632738(void *); extern void fn_82635708(void *);
void fn_826361D8(int *p) { if ((unsigned char)((Bits *)(p+0x136d))->flag) fn_82635708(p); else fn_82632738(p + *p * 0x9b4 + 4); p[0x1370]=1; }
