extern char lbl_831A9CD0[];
extern int fn_82F2AC28(char *ctx, int v, char *file, int line, int q);
extern int fn_82F2A8A8(char *ctx, int y, int x, char *tab, int *s0, int *s1);
extern int fn_82F2A9C8(char *ctx, int y, int x, char *tab, int *s0, int *s1);

void fn_82F112E0(char *ctx, short *p, int n, int q, int a, int b,
                 int *out1, int *out2)
{
    int s0;
    int s1;
    int sum;
    int i;
    int r1;
    int r2;
    int y;
    int x;

    sum = 0;
    s0 = 0;
    s1 = 0;
    r1 = fn_82F2AC28(ctx, p[0] - a, lbl_831A9CD0, 0x77, q);
    r2 = fn_82F2AC28(ctx, p[0] - b, lbl_831A9CD0, 0x77, q);
    n = n * 2;
    if (n > 2) {
        for (i = 2; i < n - 2; i += 2) {
            y = p[i + 1];
            x = p[i];
            sum += fn_82F2A8A8(ctx, y, x, ctx + 0x4c54, &s0, &s1);
        }
        y = p[i + 1];
        x = p[i];
        sum += fn_82F2A9C8(ctx, y, x, ctx + 0x4cd4, &s0, &s1);
    }
    *out1 = r1 + sum;
    *out2 = r2 + sum;
}
