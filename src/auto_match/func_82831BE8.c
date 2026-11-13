typedef struct Obj_82831BE8 {
    char pad00[0xa0];
    unsigned int count;
    char pad04[0x388 - 0xa4];
    void **data;
} Obj_82831BE8;

extern unsigned int fn_82F67CF8(void *p, int c, unsigned int n, void *x);

unsigned char fn_82831BE8(Obj_82831BE8 *o, void *x)
{
    return fn_82F67CF8(o->count ? *o->data : 0, 0x20, o->count, x) != o->count;
}
