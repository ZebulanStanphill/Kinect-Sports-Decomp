typedef struct Result_8223F7A8 {
    unsigned char failed;
    void *handle;
} Result_8223F7A8;

extern int fn_8223FFB8(void *handle, int arg);

Result_8223F7A8 *fn_8223F7A8(Result_8223F7A8 *out, void *self, Result_8223F7A8 result, int arg, unsigned int count)
{
    for (; count != 0; count--) {
        if (result.handle == 0 || fn_8223FFB8(result.handle, arg) == -1)
            result.failed = 1;
    }
    *out = result;
    return out;
}
