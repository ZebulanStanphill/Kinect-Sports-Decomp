extern void fn_82B68BD8(int *a, int *b, int *c, int *d);

void fn_82B68D70(int *a, int *b, int *c, int *d)
{
    fn_82B68BD8(a, b, c, d);
    fn_82B68BD8(a + 4, b + 4, c + 4, d + 4);
}
