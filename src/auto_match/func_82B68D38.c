extern void fn_82B68BD8(int *a, int *b, int *c, int *d);

void fn_82B68D38(int *a, int *b, int *c, int *d)
{
    fn_82B68BD8(a, b, c, d);
    fn_82B68BD8(a + 1, b + 1, c + 1, d + 1);
}
