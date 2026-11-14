extern int fn_82C3D380(void *self, void *args);
int fn_82C3D490(void *self, int code, void *args, int *handled)
{
    int hr = 0;

    if (*handled == 0) {
        if (code != 0x80000)
            hr = 0x805000b2;
        else
            hr = fn_82C3D380(self, args);
    }
    return hr;
}
