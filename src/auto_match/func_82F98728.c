typedef struct { int a; unsigned int bits; } S;
int fn_82F98728(S *s) { unsigned int b = s->bits; int n = 0; while (b) { n++; b &= b - 1; } return n; }
