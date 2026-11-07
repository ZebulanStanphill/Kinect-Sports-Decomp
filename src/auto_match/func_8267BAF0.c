typedef unsigned char bool;

typedef struct Iface_8267BAF0 Iface_8267BAF0;

typedef struct IfaceVtbl_8267BAF0 {
    void *slots[9];
    int (*fn24)(Iface_8267BAF0 *self);
} IfaceVtbl_8267BAF0;

struct Iface_8267BAF0 {
    IfaceVtbl_8267BAF0 *vt;
};

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Iface_8267BAF0 *fn_8267B648(char *self, int key);

bool fn_8267BAF0(char *self, int key)
{
    Iface_8267BAF0 *obj;
    bool result;

    RtlEnterCriticalSection(self + 0x2c4);
    obj = fn_8267B648(self, key);
    result = obj->vt->fn24(obj) == 0;
    RtlLeaveCriticalSection(self + 0x2c4);
    return result;
}
