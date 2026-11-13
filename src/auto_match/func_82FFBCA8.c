extern long _InterlockedDecrement(long *);

typedef struct Obj_82FFBCA8 Obj_82FFBCA8;
struct Obj_82FFBCA8 {
    void (**vt)(Obj_82FFBCA8 *, int);
    int pad[15];
    long refs;      /* 0x40 */
    int pending;    /* 0x44 */
};

extern void fn_8302B530(void);
extern void fn_8302B540(void);
extern void fn_82FF90A8(Obj_82FFBCA8 *o);
extern void fn_82FFB818(void *list, Obj_82FFBCA8 *o);
extern void fn_82FF9128(Obj_82FFBCA8 *o);
extern void fn_82FA5190(void *heap, void *p);
extern void *lbl_831BC768;
extern void *lbl_832642F0;

void fn_82FFBCA8(Obj_82FFBCA8 *o, unsigned char keep)
{
    void *heap;

    fn_8302B530();
    if (_InterlockedDecrement(&o->refs) <= 0) {
        fn_82FF90A8(o);
        fn_82FFB818(lbl_832642F0, o);
        if (o->pending <= 0) {
            fn_8302B540();
            if (!keep) {
                fn_82FF9128(o);
            }
            heap = lbl_831BC768;
            (*o->vt)(o, 0);
            fn_82FA5190(heap, o);
        } else {
            fn_8302B540();
            if (!keep) {
                fn_82FF9128(o);
            }
        }
    } else {
        fn_8302B540();
    }
}
