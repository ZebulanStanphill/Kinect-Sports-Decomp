typedef struct Obj_82A2C1E8 {
    struct Obj_82A2C1E8 *flink;
    struct Obj_82A2C1E8 *blink;
    int pad8[2];
    int refCount;
    int pad14[4];
    int handleA;
    int handleB;
    int pad2c[2];
    unsigned char pad34;
    unsigned char nonPaged;
    unsigned char pad36[0x78 - 0x36];
} Obj_82A2C1E8;

extern void *ExAllocatePoolTypeWithTag(unsigned int, unsigned int, unsigned int);
extern void *memset(void *, int, unsigned int);

Obj_82A2C1E8 *fn_82A2C1E8(unsigned int paged)
{
    Obj_82A2C1E8 *o = (Obj_82A2C1E8 *)ExAllocatePoolTypeWithTag(0x78, 0x63467453, (paged == 0) + 1);
    if (o != 0) {
        memset(o, 0, 0x78);
        o->refCount = 1;
        if (paged != 0) {
            o->nonPaged = 1;
        }
        o->flink = o;
        o->blink = o;
        o->handleA = -1;
        o->handleB = -1;
    }
    return o;
}
