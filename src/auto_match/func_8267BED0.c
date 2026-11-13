typedef struct _RTL_CRITICAL_SECTION { int w[7]; } RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern int fn_82692200(void *p, int a);

typedef struct Obj_8267BED0 {
    unsigned char pad[0x48];
    RTL_CRITICAL_SECTION cs;
    unsigned char locked;
    void *impl;
} Obj_8267BED0;

typedef struct Item_8267BED0 {
    unsigned char pad[0x14];
    Obj_8267BED0 *obj;
} Item_8267BED0;

typedef struct Dir_8267BED0 {
    int pad;
    Item_8267BED0 **items;
} Dir_8267BED0;

extern Dir_8267BED0 *lbl_831F129C;

int fn_8267BED0(unsigned int handle, int a)
{
    Obj_8267BED0 *o = lbl_831F129C[handle >> 20].items[(handle >> 12) & 0xff]->obj;
    int r;
    if (o->locked) {
        RtlEnterCriticalSection(&o->cs);
        r = fn_82692200(o->impl, a);
        RtlLeaveCriticalSection(&o->cs);
        return r;
    }
    return fn_82692200(o->impl, a);
}
