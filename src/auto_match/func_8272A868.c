typedef struct Owner_8272A868 {
    char pad[0x1c];
    void *obj;
} Owner_8272A868;

extern void *fn_8267B890(void *heap, int size, int flags);
extern void fn_8267C498(void *p);
extern void *fn_82704C38(void *mem, void *heap, int a);
extern void *fn_82797870(void *mem, void *a);
extern void fn_827979F8(void *arg, void *obj, int a, int b);
extern void *lbl_831E7E64;

void fn_8272A868(Owner_8272A868 *self, void *arg)
{
    void *heap;
    void *mem;
    void *a;
    void *b;

    if (self->obj != 0) {
        fn_8267C498(self->obj);
    }
    heap = lbl_831E7E64;
    mem = fn_8267B890(heap, 0x50, 0);
    a = mem ? fn_82704C38(mem, heap, 1) : 0;
    mem = fn_8267B890(heap, 0x24, 0);
    b = mem ? fn_82797870(mem, a) : 0;
    self->obj = b;
    fn_827979F8(arg, b, 0, -1);
    if (a != 0) {
        fn_8267C498(a);
    }
}
