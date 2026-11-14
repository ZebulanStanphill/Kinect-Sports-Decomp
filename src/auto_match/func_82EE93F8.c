typedef struct Item_82EE93F8 Item_82EE93F8;
typedef struct {
    void (*f0)(Item_82EE93F8 *);
    void (*addRef)(Item_82EE93F8 *);
    void (*release)(Item_82EE93F8 *);
} ItemVtbl_82EE93F8;
struct Item_82EE93F8 {
    ItemVtbl_82EE93F8 *vt;
    int handle;
};

typedef struct {
    char pad0[0x4c];
    int shutdown;
    char cs[0x20];
    void *queue;
} Owner_82EE93F8;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82A29A38();
extern int fn_82A1F470(void);
extern int fn_8306C690(void *queue, int a, int b, int *out);

int fn_82EE93F8(Owner_82EE93F8 *self, Item_82EE93F8 *item)
{
    int hr;

    if (self->shutdown != 0) {
        fn_82A29A38();
        return 0xc00d3e85;
    }
    RtlEnterCriticalSection(self->cs);
    item->vt->addRef(item);
    if (fn_8306C690(self->queue, 0, 0, &item->handle) != 0) {
        RtlLeaveCriticalSection(self->cs);
        return 0;
    }
    hr = fn_82A1F470();
    item->vt->release(item);
    if (hr > 0) {
        hr = (hr & 0xffff) | 0x80070000;
    }
    RtlLeaveCriticalSection(self->cs);
    return hr;
}
