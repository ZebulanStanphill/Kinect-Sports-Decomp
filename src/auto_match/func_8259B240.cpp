struct Node_8259B240 {
    Node_8259B240 *next;
    Node_8259B240 *prev;
    unsigned int key;
    void *value; /* 0xc */
};

struct Entry_8259B240 {
    unsigned int key;
    void *value;
};

struct InsertResult_8259B240 {
    Node_8259B240 *it;
    unsigned char inserted;
};

struct Map_8259B240 {
    int traits;
    Node_8259B240 *head; /* 0x4 */
};

struct DeviceInfo_8259B240 {
    int type;                  /* 0x0 */
    int index;                 /* 0x4 */
    unsigned short name[0x80]; /* 0x8 */
    char id[0x2a];             /* 0x108 */
};

struct Device_8259B240 {
    char pad0[0x18];
    DeviceInfo_8259B240 info; /* 0x18 */
};

struct Source_8259B240 {
    char pad0[0x70];
    unsigned short name[0x80]; /* 0x70 */
};

struct Registry_8259B240 {
    char pad0[0x34];
    Map_8259B240 devices; /* 0x34 */
    char pad3c[0x24];
    int lock; /* 0x60 */
    char pad64[0x30];
    int index; /* 0x94 */
    int type;  /* 0x98 */
};

extern "C" int fn_82A1BB18(void);
extern "C" void fn_8259C5D8(int *lock, int count, int owner);
extern "C" void fn_8259C738(int *lock);
extern "C" unsigned int fn_827D96A0(void *object);
extern "C" void fn_827D9630(Device_8259B240 *self, void *prototype);
extern "C" Node_8259B240 **fn_8259BB38(Node_8259B240 **out, Map_8259B240 *map, unsigned int *key);
extern "C" Node_8259B240 **fn_8259BA48(Node_8259B240 **out, Map_8259B240 *map, Node_8259B240 *node);
extern "C" InsertResult_8259B240 *fn_8259C040(InsertResult_8259B240 *out, Map_8259B240 *map,
                                              const Entry_8259B240 *entry);
extern "C" void *fn_8265C9E0(unsigned int size);
extern "C" void fn_8265CA20(void *p);
extern "C" void XMemSet(void *dst, int value, unsigned int size);
extern "C" void XMemCpy(void *dst, const void *src, unsigned int size);
extern "C" int fn_82F64988(unsigned short *dst, unsigned int size, const unsigned short *src);
extern "C" int fn_82526C70(char *buf, unsigned int size, const char *fmt, ...);

struct Guard_8259B240 {
    int *lock;

    __forceinline Guard_8259B240(int *l) : lock(l)
    {
        fn_8259C5D8(l, 1, fn_82A1BB18() + 1);
    }

    __forceinline ~Guard_8259B240()
    {
        fn_82A1BB18();
        fn_8259C738(lock);
    }
};

extern "C" void fn_8259B240(Registry_8259B240 *self, void *prototype, Source_8259B240 *source)
{
    Guard_8259B240 guard(&self->lock);
    DeviceInfo_8259B240 info;
    Device_8259B240 *device;

    {
        unsigned int key = fn_827D96A0(prototype);
        Node_8259B240 *it;
        Node_8259B240 *found;

        fn_8259BB38(&it, &self->devices, &key);
        found = it;
        if (found != self->devices.head) {
            if (found->value != 0)
                fn_8265CA20(found->value);
            Node_8259B240 *next;
            fn_8259BA48(&next, &self->devices, found);
        }
    }
    XMemSet(&info, 0, sizeof(info));
    info.type = self->type;
    info.index = self->index;
    fn_82F64988(info.name, 0x80, source->name);
    fn_82526C70(info.id, 0x2a, "%08x", fn_827D96A0(prototype));
    device = (Device_8259B240 *)fn_8265C9E0(sizeof(Device_8259B240) + 4);
    if (device != 0) {
        fn_827D9630(device, prototype);
        XMemCpy(&device->info, &info, sizeof(info));
    } else {
        device = 0;
    }
    {
        InsertResult_8259B240 result;
        Entry_8259B240 entry;

        entry.key = fn_827D96A0(device);
        entry.value = device;
        fn_8259C040(&result, &self->devices, &entry);
    }
}
