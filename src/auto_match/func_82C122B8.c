typedef struct Args_82C122B8 {
    void *data;
    unsigned int size;
} Args_82C122B8;

extern int fn_82C120B0(void *self, void *data, unsigned int size);
int fn_82C122B8(void *self, int code, Args_82C122B8 *args, int *handled)
{
    int hr = 0;

    if (*handled == 0) {
        if (code != 0xc0000)
            hr = 0x805000b2;
        else
            hr = fn_82C120B0(self, args->data, args->size);
    }
    return hr;
}
