typedef struct Obj Obj;
typedef struct ObjVt {
    void *a;
    void *b;
    void (*destroy)(Obj *o);
} ObjVt;
struct Obj { ObjVt *vt; };

extern int lbl_831BC768;
extern void *fn_82FA5060(int heap, int size);
extern Obj *fn_82FB0AE8(void *mem, int arg);
extern int fn_82FFF750(Obj *o);
Obj *fn_82FB0B80(int arg)
{
    void *mem;
    Obj *o;
    mem = fn_82FA5060(lbl_831BC768, 0xb0);
    o = mem ? fn_82FB0AE8(mem, arg) : 0;
    if (o != 0 && fn_82FFF750(o) != 1) {
        o->vt->destroy(o);
        o = 0;
    }
    return o;
}
