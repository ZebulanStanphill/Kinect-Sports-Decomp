typedef struct Result_8223F670 {
    unsigned char failed;
    void *handle;
} Result_8223F670;

extern int fn_8223FFB8(void *handle, int arg);

Result_8223F670 *fn_8223F670(Result_8223F670 *out, void *self, Result_8223F670 result, const unsigned char *args, unsigned int count)
{
    for (; count != 0; count--, args++) {
        int c = *args;
        if (result.handle == 0 || fn_8223FFB8(result.handle, c) == -1)
            result.failed = 1;
    }
    *out = result;
    return out;
}
