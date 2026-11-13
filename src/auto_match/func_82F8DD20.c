// Constructor: base constructor fn_82F8DEC0, then three vtable pointers (multiple-inheritance
// sub-objects at +0, +4 and +8).
typedef struct Object_82F8DD20 {
    void *vtable0;
    void *vtable4;
    void *vtable8;
} Object_82F8DD20;

extern unsigned int lbl_8216B700;
extern unsigned int lbl_8216B72C;
extern unsigned int lbl_8216B730;
extern void *fn_82F8DEC0(void *);

Object_82F8DD20 *fn_82F8DD20(Object_82F8DD20 *p)
{
    fn_82F8DEC0(p);
    p->vtable0 = &lbl_8216B730;
    p->vtable4 = &lbl_8216B72C;
    p->vtable8 = &lbl_8216B700;
    return p;
}
