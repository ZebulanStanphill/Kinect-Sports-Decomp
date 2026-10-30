typedef struct Heap_8261D1B8 Heap_8261D1B8;
typedef struct {
    void *s0, *s1, *s2, *s3;
    void (*f10)(Heap_8261D1B8 *, void *, unsigned int, int);
} HeapVT_8261D1B8;
struct Heap_8261D1B8 {
    HeapVT_8261D1B8 *vt;
};
typedef struct {
    Heap_8261D1B8 *pad[4];
    Heap_8261D1B8 *heap;
} Env_8261D1B8;
typedef struct {
    void *data;
    int count;
    unsigned int cap;
} Buf_8261D1B8;
typedef struct {
    char pad[0x78];
    Buf_8261D1B8 buf;
} Obj2_8261D1B8;
typedef struct {
    char pad0[0x4c];
    unsigned int f4c;
    char pad1[0x78 - 0x50];
    char pad2[0x7c0 - 0x78];
    int buf;
    char pad3[0xb74 - 0x7c4];
    int fb74;
    char pad4[0xbe0 - 0xb78];
    unsigned char fbe0;
} Obj_8261D1B8;

extern void fn_8253F768(Obj_8261D1B8 *);
extern void fn_8253F898(Obj_8261D1B8 *);
extern void fn_8261D290(Obj_8261D1B8 *);
extern void fn_82CE4118(void *);
extern Env_8261D1B8 *fn_82CE5410(void);

void fn_8261D1B8(Obj_8261D1B8 *o)
{
    Obj2_8261D1B8 *ob;
    Buf_8261D1B8 *b;
    Heap_8261D1B8 *h;
    int i;

    fn_8253F898(o);
    fn_8261D290(o);
    if (o->fb74 != 0) {
        if (o->fbe0 != 0) {
            if ((o->f4c + 0x1f0) != 0 && o->buf != 0) {
                fn_8253F768(o);
                ob = (Obj2_8261D1B8 *)o->buf;
                b = &ob->buf;
                h = fn_82CE5410()->heap;
                i = 0;
                if (0 < ob->buf.count) {
                    do {
                        i = i + 1;
                    } while (i < b->count);
                }
                b->count = 0;
                if ((b->cap & 0x80000000) == 0) {
                    h->vt->f10(h, b->data, b->cap & 0x3fffffff, 0x10);
                }
                b->data = 0;
                b->cap = 0x80000000;
                fn_82CE4118(ob);
                o->buf = 0;
            }
            o->fbe0 = 0;
        }
    }
}
