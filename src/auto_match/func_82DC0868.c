struct Al_82DC0868;
typedef struct {
    void *p0;
    void *p4;
    void *p8;
    void *pc;
    void (*f10)(struct Al_82DC0868 *, void *, unsigned int, int);
} AlVt_82DC0868;
typedef struct Al_82DC0868 { AlVt_82DC0868 *vt; } Al_82DC0868;
typedef struct { char pad[0x10]; Al_82DC0868 *al; } Heap_82DC0868;
typedef struct { void *data; int size; unsigned int cap; } Vec_82DC0868;

typedef struct Query_82DC0868 {
    int pad0[3];
    int a;                /* 0x0c */
    int b;                /* 0x10 */
    int c;                /* 0x14 */
    int d;                /* 0x18 */
    int e;                /* 0x1c */
    int pad20[15];
    Vec_82DC0868 results; /* 0x5c */
    int f;                /* 0x68 */
    int g;                /* 0x6c */
    int h;                /* 0x70 */
    int i;                /* 0x74 */
    int j;                /* 0x78 */
    short k;              /* 0x7c */
} Query_82DC0868;

extern Heap_82DC0868 *fn_82CE5410(void);
extern int fn_82DBFFD0(void *self, int a, int b, Query_82DC0868 *q);

static __forceinline void ReleaseMemory_82DC0868(Vec_82DC0868 *v, int align)
{
    Al_82DC0868 *al = fn_82CE5410()->al;
    if (((int)v->cap & (int)0x80000000) == 0) {
        al->vt->f10(al, v->data, v->cap & 0x3fffffff, align);
    }
}

int fn_82DC0868(void *self)
{
    Query_82DC0868 q;
    int result;

    q.c = 0;
    q.a = 1;
    q.b = 1;
    q.d = 0;
    q.e = 0;
    q.results.data = 0;
    q.results.size = 0;
    q.results.cap = 0x80000000;
    q.f = 0;
    q.g = 0;
    q.h = 0;
    q.i = 0;
    q.j = 0;
    q.k = 0;
    result = fn_82DBFFD0(self, 0, 0, &q);
    ReleaseMemory_82DC0868(&q.results, 4);
    return result;
}
