extern int fn_82ABDD90(void *, int, unsigned int, int);
unsigned char fn_82B17248(char *p, void *a) {
    int v = *(int *)(fn_82ABDD90(a, 0x67, *(unsigned int *)(p + 8) >> 19 & 7, 0) + (p - 4));
    return v >= 0 && v <= 5;
}
