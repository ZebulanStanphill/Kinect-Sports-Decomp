// Constructor: base constructor fn_82F96AA8, then vtable lbl_8216C040, the member at +0x20c
// (constructed by fn_82F91510) and a zeroed byte at +0x234.
typedef struct Object_82F93A10 {
    void *vtable;
    char pad004[0x20c - 0x4];
    char member[0x234 - 0x20c];
    unsigned char flag;
} Object_82F93A10;

extern unsigned int lbl_8216C040;
extern void *fn_82F96AA8(void *);
extern void *fn_82F91510(void *);

Object_82F93A10 *fn_82F93A10(Object_82F93A10 *p)
{
    fn_82F96AA8(p);
    p->vtable = &lbl_8216C040;
    fn_82F91510(p->member);
    p->flag = 0;
    return p;
}
