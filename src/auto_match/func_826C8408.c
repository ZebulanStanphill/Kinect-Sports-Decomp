typedef struct Sub_826C8408 Sub_826C8408;
typedef struct Owner_826C8408 Owner_826C8408;
struct Owner_826C8408 {
    struct {
        void *slots[0x36];
        void *(*getHeap)(Owner_826C8408 *self);
    } *vt;
};
typedef struct Obj_826C8408 {
    char pad0[0xa0];
    Owner_826C8408 *f_a0;
    char pad1[0x1b8 - 0xa4];
    int f1b8;
} Obj_826C8408;

extern void *fn_8267B890(void *heap, int size, int c);
extern void fn_8267C498(Sub_826C8408 *s);
extern Sub_826C8408 *fn_82758A28(void *mem);
extern void fn_82758448(Sub_826C8408 *s, float a, float b);
extern void fn_8269A5F8(Obj_826C8408 *o);

void fn_826C8408(Obj_826C8408 *o, float a, float b)
{
    void *heap;
    void *mem;
    Sub_826C8408 *s;
    if (o->f1b8 == 0) {
        heap = o->f_a0->vt->getHeap(o->f_a0);
        mem = fn_8267B890(heap, 0x88, 0);
        if (mem != 0) {
            s = fn_82758A28(mem);
        } else {
            s = 0;
        }
        if ((Sub_826C8408 *)o->f1b8 != 0) fn_8267C498((Sub_826C8408 *)o->f1b8);
        o->f1b8 = (int)s;
    }
    fn_82758448((Sub_826C8408 *)o->f1b8, a * 20.0f, b * 20.0f);
    fn_8269A5F8(o);
}
