typedef struct Result_82296328 {
    unsigned char failed;
    void *handle;
} Result_82296328;

extern unsigned short fn_82296E38(void *handle, int arg);

Result_82296328 *fn_82296328(Result_82296328 *out, Result_82296328 result, int arg, unsigned int count)
{
    for (; count != 0; count--) {
        if (result.handle == 0 || fn_82296E38(result.handle, arg) == 0xffff)
            result.failed = 1;
    }
    *out = result;
    return out;
}
