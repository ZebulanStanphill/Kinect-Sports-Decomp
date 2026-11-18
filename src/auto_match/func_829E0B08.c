extern void *memset(void *dst, int value, unsigned int size);
extern int fn_82A2B340(const char *name, unsigned __int64 *id, void *buffer, unsigned int *size,
                       void *overlapped);
extern int fn_82A2B130(int kind, unsigned int flags, const void *input, unsigned int inputSize, void *output,
                       unsigned int *outputSize);

int fn_829E0B08(unsigned __int64 id, void *buffer, unsigned int size)
{
    unsigned __int64 storedId;
    unsigned int storedSize;
    unsigned int decodedSize;
    int hr;

    memset(buffer, 0, size);
    storedId = 0;
    storedSize = 0;
    if (fn_82A2B340("NuiIdentity", &storedId, 0, &storedSize, 0) != 0) {
        return 0x80004005;
    }
    if (storedSize == 0 || storedId == 0 || storedId != id) {
        return 1;
    }
    if (storedSize > size) {
        return 0x80004005;
    }
    hr = fn_82A2B340("NuiIdentity", &storedId, buffer, &size, 0);
    if (hr < 0) {
        return hr;
    }
    decodedSize = 0;
    hr = fn_82A2B130(0, 1, buffer, size, 0, &decodedSize);
    if (hr < 0) {
        return hr;
    }
    if (decodedSize > size) {
        return 0x80004005;
    }
    hr = fn_82A2B130(0, 1, buffer, size, buffer, &decodedSize);
    if (hr < 0) {
        return hr;
    }
    return 0;
}
