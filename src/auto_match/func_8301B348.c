extern int fn_8302A0B0(void *o, void *buf, unsigned int size, int flags, unsigned char kind, void *desc);

int fn_8301B348(void *ctx, void *o, void *buf, unsigned int size, int flags, unsigned char kind, void *desc)
{
    int r = 0x1f;
    if (buf != 0 && size != 0) {
        r = fn_8302A0B0(o, buf, size, flags, kind, desc);
    }
    return r;
}
