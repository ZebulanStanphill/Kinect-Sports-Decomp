// Destructor: restore the three vtable pointers (multiple-inheritance sub-objects at +0, +4
// and +8), then the base destructor fn_82F8E3D8.
typedef struct Object_82F8DF28 {
    void *vtable0;
    void *vtable4;
    void *vtable8;
} Object_82F8DF28;

extern unsigned int lbl_8216B750;
extern unsigned int lbl_8216B72C;
extern unsigned int lbl_8216B700;
extern void fn_82F8E3D8(void *);

void fn_82F8DF28(Object_82F8DF28 *p)
{
    p->vtable0 = &lbl_8216B750;
    p->vtable4 = &lbl_8216B72C;
    p->vtable8 = &lbl_8216B700;
    fn_82F8E3D8(p);
}
