typedef struct Device_82A5F688 Device_82A5F688;

typedef struct DeviceVtable_82A5F688 {
    void *slots[13];
    int (*Validate)(Device_82A5F688 *self, void *data, int copied); /* 0x34 */
} DeviceVtable_82A5F688;

struct Device_82A5F688 {
    DeviceVtable_82A5F688 *vtable;
};

extern int fn_82A5F060(void *data);
extern void *fn_82A5F298(void *data);
extern int fn_82A5F578(Device_82A5F688 *self, void *key, void *data, int copied);
extern void fn_8265C990(void *p, unsigned int flags);

static __forceinline int CopyResult(void *copy)
{
    return copy != 0 ? 0 : 0x8007000E;
}

int fn_82A5F688(Device_82A5F688 *self, void *key, void *data, void **outCopy)
{
    int hr;
    int copied;

    copied = 0;
    hr = self->vtable->Validate(self, key, 0);
    if (hr < 0) {
        hr = 0x80070057;
        goto done;
    }
    if (fn_82A5F060(data) == 0) {
        hr = 0x80070057;
    }
    if (hr < 0) {
        goto done;
    }
    if (outCopy != 0) {
        data = fn_82A5F298(data);
        copied = 1;
        hr = CopyResult(data);
    }
    if (hr < 0 || (hr = self->vtable->Validate(self, data, copied)) < 0 ||
        (hr = fn_82A5F578(self, key, data, copied)) < 0) {
        if (copied == 0 || data == 0) {
            goto done;
        }
        if (hr == (int)0x88970001) {
            *outCopy = data;
            goto done;
        }
    } else if (copied == 0) {
        goto done;
    }
    fn_8265C990(data, 0x20970000);
done:
    return hr;
}
