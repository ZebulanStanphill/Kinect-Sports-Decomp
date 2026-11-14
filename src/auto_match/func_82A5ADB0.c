extern unsigned __int64 __mftb(void);

typedef struct Lock_82A5ADB0 Lock_82A5ADB0;
typedef struct LockVT_82A5ADB0 {
    void *pad0[2];
    void (*lock)(Lock_82A5ADB0 *self);          /* 0x08 */
    void *pad1[2];
    void (*unlock)(Lock_82A5ADB0 *self);        /* 0x14 */
} LockVT_82A5ADB0;
struct Lock_82A5ADB0 {
    LockVT_82A5ADB0 *vt;
};

typedef struct Device_82A5ADB0 Device_82A5ADB0;
typedef struct DeviceVT_82A5ADB0 {
    void (*begin)(Device_82A5ADB0 *self);       /* 0x00 */
    void (*end)(Device_82A5ADB0 *self);         /* 0x04 */
} DeviceVT_82A5ADB0;
struct Device_82A5ADB0 {
    DeviceVT_82A5ADB0 *vt;
};

typedef struct Item_82A5ADB0 Item_82A5ADB0;
typedef struct ItemVT_82A5ADB0 {
    int (*update)(Item_82A5ADB0 *self);         /* 0x00 */
} ItemVT_82A5ADB0;
struct Item_82A5ADB0 {
    ItemVT_82A5ADB0 *vt;
};

typedef struct Node_82A5ADB0 {
    Item_82A5ADB0 *item;
    struct Node_82A5ADB0 *next;
} Node_82A5ADB0;

typedef struct Self_82A5ADB0 {
    char pad0[0x40];
    Lock_82A5ADB0 lock;                         /* 0x040 */
    char pad1[0x6c - 0x44];
    Device_82A5ADB0 *device;                    /* 0x06c */
    int f70;                                    /* 0x070 */
    int f74;                                    /* 0x074 */
    char pad2[0x22c - 0x78];
    Node_82A5ADB0 *items;                       /* 0x22c */
    char pad3[0x23c - 0x230];
    int f23c;                                   /* 0x23c */
} Self_82A5ADB0;

extern int fn_82A5CC60(int a);
extern int fn_82A5AC60(Self_82A5ADB0 *self);
extern int fn_82A595E8(int a);
extern void fn_82A59E40(Self_82A5ADB0 *self, unsigned int elapsed, unsigned int now);

static __forceinline Item_82A5ADB0 *NextItem(Node_82A5ADB0 **node)
{
    Node_82A5ADB0 *n = *node;
    if (n != 0) {
        *node = n->next;
        return n->item;
    }
    return 0;
}

int fn_82A5ADB0(Self_82A5ADB0 *self)
{
    Lock_82A5ADB0 *lock = &self->lock;
    unsigned __int64 start;
    unsigned __int64 now;
    unsigned __int64 elapsed;
    Node_82A5ADB0 *node;
    Item_82A5ADB0 *item;
    int hr;

    lock->vt->lock(lock);
    start = __mftb();
    self->device->vt->begin(self->device);
    hr = fn_82A5CC60(self->f74);
    if (hr >= 0) {
        if (self->f23c != 0)
            hr = fn_82A5AC60(self);
        if (hr >= 0)
            hr = fn_82A595E8(self->f70);
    }
    node = self->items;
    while (node != 0) {
        if (hr < 0)
            goto done;
        item = NextItem(&node);
        hr = item->vt->update(item);
    }
    if (hr >= 0)
        self->device->vt->end(self->device);
done:
    now = __mftb();
    elapsed = now - start;
    if (elapsed <= 0xffffffffULL)
        fn_82A59E40(self, (unsigned int)elapsed, (unsigned int)now);
    lock->vt->unlock(lock);
    return hr;
}
