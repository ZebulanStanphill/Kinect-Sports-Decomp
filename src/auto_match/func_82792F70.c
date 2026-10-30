extern int fn_8278FBE0(int p, int a, int b, unsigned int n);
extern void fn_827923E8(int q, int b, unsigned int n);

int fn_82792F70(int p, int a, int b, unsigned int n)
{
    int r;
    if (n == 0) {
        return 0;
    }
    r = fn_8278FBE0(p, a, b, n);
    fn_827923E8(p + 0x10, b, n);
    (*(unsigned short *)(p + 0x24))++;
    return r;
}
