typedef struct Sub Sub;
typedef struct {
    void *f0;
    void (*Destroy)(Sub *, int);
} SubVtbl;
struct Sub { SubVtbl *vt; };

typedef struct {
    int f0;
    Sub sub;
    char pad8[0x24];
    int refs;
} Obj;

extern void *fn_82FA5060(int, int);
extern void fn_82FA9208(Obj *);
extern Obj *fn_82FB6D90(void *, int, int);
extern int fn_82FB7468(Obj *, int, int, int);
extern int lbl_831BC768;

Obj *fn_82FB2828(int a, int b, int c, int d, int e)
{
    void *mem;
    Obj *obj;

    mem = fn_82FA5060(lbl_831BC768, 0x88);
    if (mem == 0) return 0;
    obj = fn_82FB6D90(mem, a, b);
    if (obj <= 0) return obj;
    obj->refs++;
    if (fn_82FB7468(obj, c, d, e) == 1) {
        fn_82FA9208(obj);
        return obj;
    }
    obj->sub.vt->Destroy(&obj->sub, 0);
    fn_82FA9208(obj);
    return 0;
}
