extern int fn_82E7B8D0(void *a, void *b);

int fn_82E44120(char *self, void *out)
{
    if (out == 0) {
        return 0x80004003;
    }
    return fn_82E7B8D0(self + 8, out);
}
