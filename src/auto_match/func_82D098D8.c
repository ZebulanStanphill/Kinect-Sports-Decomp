typedef struct Iface_82D098D8 Iface_82D098D8;
typedef struct IfaceVtbl_82D098D8 {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void (*Free)(Iface_82D098D8 *, void *, int, int);
} IfaceVtbl_82D098D8;
struct Iface_82D098D8 {
    IfaceVtbl_82D098D8 *vtbl;
};
typedef struct Ctx_82D098D8 {
    char pad[0x10];
    Iface_82D098D8 *alloc;
} Ctx_82D098D8;

typedef struct Array_82D098D8 {
    void *data;
    int count;
    int capacity;
} Array_82D098D8;

typedef struct Strided_82D098D8 {
    void *vertices;
    int numVertices;
    int striding;
} Strided_82D098D8;

typedef struct Out_82D098D8 {
    int f0;
    int count;          /* 0x04 */
    char pad8[8];
    void *data;         /* 0x10 */
} Out_82D098D8;

extern Ctx_82D098D8 *fn_82CE5410(void);
extern void fn_82D1BCD8(void *self, Array_82D098D8 *out);
extern void fn_82D08138(Strided_82D098D8 *verts, Out_82D098D8 *out);

void fn_82D098D8(void *self, Out_82D098D8 *out)
{
    Array_82D098D8 arr;
    Iface_82D098D8 *it;

    arr.data = 0;
    arr.count = 0;
    arr.capacity = 0x80000000;
    fn_82D1BCD8(self, &arr);
    if (arr.count > 0) {
        Strided_82D098D8 s;
        s.numVertices = arr.count;
        s.striding = 0x10;
        s.vertices = arr.data;
        fn_82D08138(&s, out);
    } else {
        out->data = 0;
        out->count = 0;
    }
    it = fn_82CE5410()->alloc;
    arr.count = 0;
    if ((arr.capacity & (1 << 31)) == 0) {
        it->vtbl->Free(it, arr.data, arr.capacity & 0x3fffffff, 0x10);
    }
}
