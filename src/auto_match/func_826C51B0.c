typedef struct S { char pad[16]; unsigned val; unsigned other; unsigned char flag; } S;
void fn_826C51B0(char *p, unsigned x, unsigned y) { if (*(S **)(p+0x1ac)) { (*(S **)(p+0x1ac))->other = x; (*(S **)(p+0x1ac))->val = (*(S **)(p+0x1ac))->flag ? 0 : y; } }
