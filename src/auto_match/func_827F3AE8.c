extern void fn_827F6950(int a, int *out);

int fn_827F3AE8(char *p)
{
    int v;
    fn_827F6950(*(int *)(p + 8), &v);
    return v != 0;
}
