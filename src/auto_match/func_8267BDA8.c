typedef struct _RTL_CRITICAL_SECTION { int w[7]; } RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

typedef struct Item_8267BDA8 Item_8267BDA8;

typedef struct Obj_8267BDA8 {
    unsigned char pad[0x48];
    RTL_CRITICAL_SECTION cs;
    unsigned char locked;
    void *impl;
} Obj_8267BDA8;

struct Item_8267BDA8 {
    unsigned char pad[0x14];
    Obj_8267BDA8 *obj;
};

typedef struct Dir_8267BDA8 {
    int pad;
    Item_8267BDA8 **items;
} Dir_8267BDA8;

extern Dir_8267BDA8 *lbl_831F129C;
extern int fn_82692C90(void *impl, Item_8267BDA8 *item, unsigned int handle, int a);

int fn_8267BDA8(unsigned int handle, int a)
{
    Item_8267BDA8 *item = lbl_831F129C[handle >> 20].items[(handle >> 12) & 0xff];
    Obj_8267BDA8 *o = item->obj;
    int r;
    if (o->locked) {
        RtlEnterCriticalSection(&o->cs);
        r = fn_82692C90(o->impl, item, handle, a);
        RtlLeaveCriticalSection(&o->cs);
        return r;
    }
    return fn_82692C90(o->impl, item, handle, a);
}
