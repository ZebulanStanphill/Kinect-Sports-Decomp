extern int fn_82ABDD90(int, int, unsigned int, int);
int fn_82B17200(void *p, int b) { return *(int *)((char *)p - 4 + fn_82ABDD90(b, 0x67, ((unsigned int *)p)[2] >> 19 & 7, 0)); }
