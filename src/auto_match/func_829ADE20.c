typedef struct Obj Obj;
typedef struct {
    void *slot0;
    void *slot1;
    void (*fn8)(Obj *self);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

extern void fn_829B6D10(Obj *o);
extern void fn_82A1F2B8(const char *fmt, ...);

void fn_829ADE20(Obj *o)
{
    o->vtbl->fn8(o);
    fn_829B6D10(o);
    fn_82A1F2B8("[XAPI RETURN VALUE] 1\n");
}
