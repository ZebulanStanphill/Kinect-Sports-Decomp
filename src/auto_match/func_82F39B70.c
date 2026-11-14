typedef struct Blob_82F39B70 {
    unsigned short version;
    unsigned short size;
    void *data;
} Blob_82F39B70;

typedef struct Stream_82F39B70 {
    char pad[0x18];
    unsigned int remaining;
} Stream_82F39B70;

extern int fn_82E57738(unsigned short *value, Stream_82F39B70 *s);
extern void fn_82E4FE40(void *p);
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern int fn_82E57820(void *dst, Stream_82F39B70 *s, unsigned int size);

int fn_82F39B70(void *self, Blob_82F39B70 *blob, Stream_82F39B70 *s, unsigned int *used)
{
    int hr;
    unsigned int start;
    unsigned short *size;

    if (blob == 0 || s == 0 || used == 0) {
        return -0x7ff8ffa9;
    }
    *used = 0;
    start = s->remaining;
    if (start < 4) {
        *used = 4;
        hr = -0x3ff2c94f;
        goto fail;
    }
    hr = fn_82E57738(&blob->version, s);
    if (hr >= 0) {
        if (blob->version != 1) {
            hr = -0x7fff0001;
            goto done;
        }
        size = &blob->size;
        hr = fn_82E57738(size, s);
        if (hr >= 0) {
            unsigned int n;
            if (blob->data != 0) {
                fn_82E4FE40(blob->data);
            }
            n = *size;
            blob->data = 0;
            if (n != 0) {
                blob->data = fn_82E50BE8(n, 0, 0, 0, 0);
                if (blob->data == 0) {
                    hr = -0x7ff8fff2;
                    goto done;
                }
                hr = fn_82E57820(blob->data, s, *size);
            }
        }
    }
    if (hr == -0x3ff2c94f) {
        goto end;
    }
done:
    *used = start - s->remaining;
end:
    if (hr < 0) {
fail:
        if (blob->data != 0) {
            fn_82E4FE40(blob->data);
        }
        blob->data = 0;
    }
    return hr;
}
