extern int fn_823AB478(void *p);
extern int fn_82A1EF98(int h, int a, int b, int c, int d, int e);

int fn_825211A8(void *p, int a, int b, int c, int d, int e)
{
    int h = 0;
    if (p != 0) {
        h = fn_823AB478(p);
    }
    return fn_82A1EF98(h, a, b, c, d, e) != 5;
}
