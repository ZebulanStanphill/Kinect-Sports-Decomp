extern void fn_82CE5040(void *out, void *matrix, void *in);

void fn_82DA0670(char *self, void *matrix, void *out)
{
    fn_82CE5040(out, matrix, self + 0x60);
}
