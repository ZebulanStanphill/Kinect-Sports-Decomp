typedef struct Guid_82E5F020 {
    unsigned int data[4];
} Guid_82E5F020;

typedef struct Source_82E5F020 Source_82E5F020;

typedef struct SourceVtbl_82E5F020 {
    void *slots00[0x98 / 4];
    int (*GetCount)(Source_82E5F020 *self, unsigned short *count); /* 0x98 */
    int (*GetByIndex)(Source_82E5F020 *self, unsigned short index, Guid_82E5F020 *id, unsigned short *stream,
                      void *data, unsigned int *size); /* 0x9c */
} SourceVtbl_82E5F020;

struct Source_82E5F020 {
    SourceVtbl_82E5F020 *vt;
};

extern const Guid_82E5F020 lbl_8202E618;
extern int fn_82E5B578(void *dest);
extern int fn_82E5B380(void *dest, Guid_82E5F020 id, unsigned short stream, unsigned int size, void *data);
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern void fn_82E4FE40(void *p);

int fn_82E5F020(Source_82E5F020 *source, void *dest)
{
    int hr;
    unsigned short count;
    Guid_82E5F020 id;
    unsigned short stream;
    unsigned int size;
    unsigned short i;
    void *data;

    if (source == 0 || dest == 0) {
        return 0x80004003;
    }
    count = 0;
    id = lbl_8202E618;
    stream = 0xffff;
    hr = fn_82E5B578(dest);
    if (hr < 0) {
        goto done;
    }
    hr = source->vt->GetCount(source, &count);
    if (hr < 0) {
        goto done;
    }
    for (i = 0; i < count; i++) {
        size = 0;
        hr = source->vt->GetByIndex(source, i, &id, &stream, 0, &size);
        if (hr < 0 && hr != (int)0xC00D36B1) {
            goto done;
        }
        if (size != 0) {
            data = fn_82E50BE8(size, 0, 0, 0, 0);
            if (data == 0) {
                hr = 0x8007000E;
                goto fail;
            }
            hr = source->vt->GetByIndex(source, i, &id, &stream, data, &size);
            if (hr < 0) {
                goto fail;
            }
        } else {
            data = 0;
        }
        hr = fn_82E5B380(dest, id, stream, size, data);
        if (data != 0) {
            fn_82E4FE40(data);
        }
        if (hr < 0) {
            goto done;
        }
    }
    goto done;
fail:
    if (data != 0) {
        fn_82E4FE40(data);
    }
done:
    return hr;
}
