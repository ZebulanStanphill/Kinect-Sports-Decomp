typedef struct Guid_82E518B8 {
    unsigned int data[4];
} Guid_82E518B8;

typedef struct Source_82E518B8 Source_82E518B8;
typedef struct Target_82E518B8 Target_82E518B8;

typedef struct SourceVtbl_82E518B8 {
    void *slots00[0x26];
    int (*GetCount)(Source_82E518B8 *self, unsigned short *count); /* 0x98 */
    int (*GetItem)(Source_82E518B8 *self, unsigned short index, Guid_82E518B8 *id, unsigned short *type,
                   void *data, unsigned int *size); /* 0x9c */
} SourceVtbl_82E518B8;

struct Source_82E518B8 {
    SourceVtbl_82E518B8 *vt;
};

typedef struct TargetVtbl_82E518B8 {
    void *slots00[0x28];
    int (*SetItem)(Target_82E518B8 *self, Guid_82E518B8 id, unsigned short type, void *data,
                   unsigned int size);   /* 0xa0 */
    int (*Clear)(Target_82E518B8 *self); /* 0xa4 */
} TargetVtbl_82E518B8;

struct Target_82E518B8 {
    TargetVtbl_82E518B8 *vt;
};

extern const Guid_82E518B8 lbl_8202E618;
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern void fn_82E4FE40(void *block);

int fn_82E518B8(Source_82E518B8 *source, Target_82E518B8 *target)
{
    int hr;
    unsigned short count;
    Guid_82E518B8 id;
    unsigned short type;
    unsigned int size;
    unsigned short i;
    void *data;

    if (target == 0)
        return 0x80004003;
    count = 0;
    id = lbl_8202E618;
    type = 0xffff;
    size = 0;
    hr = target->vt->Clear(target);
    if (hr < 0)
        goto done;
    hr = source->vt->GetCount(source, &count);
    if (hr < 0)
        goto done;
    for (i = 0; i < count; i++) {
        hr = source->vt->GetItem(source, i, &id, &type, 0, &size);
        if (hr < 0 && hr != (int)0xc00d36b1)
            goto done;
        if (size != 0) {
            data = fn_82E50BE8(size, 0, 0, 0, 0);
            if (data == 0) {
                hr = 0x8007000e;
                goto fail;
            }
            hr = source->vt->GetItem(source, i, &id, &type, data, &size);
            if (hr < 0)
                goto fail;
        } else {
            data = 0;
        }
        hr = target->vt->SetItem(target, id, type, data, size);
        if (data != 0)
            fn_82E4FE40(data);
        if (hr < 0)
            goto done;
    }
    goto done;
fail:
    if (data != 0)
        fn_82E4FE40(data);
done:
    return hr;
}
