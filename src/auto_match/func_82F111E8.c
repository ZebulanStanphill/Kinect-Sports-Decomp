extern char lbl_831A9CD0[];
extern int fn_82F2A8A8(char *ctx, int a, int b, char *tbl, int *p1, int *p2);
extern int fn_82F2A9C8(char *ctx, int a, int b, char *tbl, int *p1, int *p2);
extern int fn_82F2AC28(char *ctx, int v, char *s, int line, int a4);

int fn_82F111E8(char *ctx, short *pts, int n, int a4, int a5)
{
    int s1;
    int s2;
    int sum;
    int n2;
    int i;
    int y;
    int x;

    s1 = 0;
    s2 = 0;
    sum = fn_82F2AC28(ctx, pts[0] - a5, lbl_831A9CD0, 0x77, a4);
    n2 = n * 2;
    if (n2 > 2) {
        for (i = 2; i < n2 - 2; i += 2) {
            y = pts[i + 1];
            x = pts[i];
            sum += fn_82F2A8A8(ctx, y, x, ctx + 0x4c54, &s1, &s2);
        }
        y = pts[i + 1];
        x = pts[i];
        sum += fn_82F2A9C8(ctx, y, x, ctx + 0x4cd4, &s1, &s2);
    }
    return sum;
}
