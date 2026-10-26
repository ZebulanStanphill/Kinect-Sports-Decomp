typedef struct Obj Obj;
typedef struct {
    void *slots[0x94 / 4];
    void (*fn94)(Obj *self);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct {
    Obj *ptr;
} Ref;

extern Ref *fn_8266C8A0(Ref *ret, void *key);
extern void fn_8267C4F0(Obj *p);

void fn_8266C9B0(void *key)
{
    Ref tmp;
    Obj *o;

    o = fn_8266C8A0(&tmp, key)->ptr;
    o->vtbl->fn94(o);
    if (tmp.ptr != 0) {
        fn_8267C4F0(tmp.ptr);
    }
}
