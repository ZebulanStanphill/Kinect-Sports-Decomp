typedef struct Obj_825A4D38 {
    int pad0[2];
    int data[5];             /* 0x08 */
} Obj_825A4D38;

typedef struct SharedPtr_825A4D38 {
    void *ptr;
    void *rep;
} SharedPtr_825A4D38;

extern Obj_825A4D38 *fn_827D5070(void *p);
extern void XMemSet(void *dst, int value, unsigned int size);
extern int fn_825A23C0(int a, int b);
extern void fn_825A51B8(Obj_825A4D38 *o);
extern void fn_825A4F20(Obj_825A4D38 *o);
extern void fn_825A54A8(Obj_825A4D38 *o);
extern void fn_826032C8(Obj_825A4D38 *o);
extern void fn_822315A0(void *rep);

void fn_825A4D38(SharedPtr_825A4D38 *sp)
{
    Obj_825A4D38 *o = fn_827D5070(sp->ptr);
    XMemSet(o->data, 0, 0x14);
    o->data[3] = fn_825A23C0(4, 4);
    o->data[1] = 0;
    fn_825A51B8(o);
    fn_825A4F20(o);
    fn_825A54A8(o);
    fn_826032C8(o);
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
}
