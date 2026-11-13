typedef struct _RTL_CRITICAL_SECTION { int w[7]; } RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

typedef struct Item_8267BE38 Item_8267BE38;

typedef struct Obj_8267BE38 {
    unsigned char pad00[0x14];
    unsigned int handle;
    unsigned char pad18[0x48 - 0x18];
    RTL_CRITICAL_SECTION cs;
    unsigned char locked;
    void *impl;
} Obj_8267BE38;

struct Item_8267BE38 {
    unsigned char pad[0x14];
    Obj_8267BE38 *obj;
};

typedef struct Dir_8267BE38 {
    int pad;
    Item_8267BE38 **items;
} Dir_8267BE38;

extern Dir_8267BE38 *lbl_831F129C;
extern void fn_82692538(void *impl, Item_8267BE38 *item, unsigned int handle);
extern void fn_8267BC98(Obj_8267BE38 *o);

void fn_8267BE38(unsigned int handle)
{
    Item_8267BE38 *item;
    Obj_8267BE38 *o;

    if (handle != 0) {
        item = lbl_831F129C[handle >> 20].items[(handle >> 12) & 0xff];
        o = item->obj;
        if (o->locked) {
            RtlEnterCriticalSection(&o->cs);
            fn_82692538(o->impl, item, handle);
            RtlLeaveCriticalSection(&o->cs);
        } else {
            fn_82692538(o->impl, item, handle);
        }
        if (handle == o->handle) {
            fn_8267BC98(o);
        }
    }
}
