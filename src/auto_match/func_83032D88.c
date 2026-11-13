extern long _InterlockedDecrement(long *);

typedef struct Obj_83032D88 Obj_83032D88;
struct Obj_83032D88 {
    void (**vt)(Obj_83032D88 *, int);
    int pad[3];
    long refs;
};

extern void fn_83032CF8(Obj_83032D88 *o);
extern void fn_82FA5190(void *heap, void *p);
extern void *lbl_831BC768;

void fn_83032D88(Obj_83032D88 *o)
{
    if (_InterlockedDecrement(&o->refs) == 0) {
        void *heap;
        fn_83032CF8(o);
        heap = lbl_831BC768;
        if (o != 0) {
            (*o->vt)(o, 0);
            fn_82FA5190(heap, o);
        }
    }
}
