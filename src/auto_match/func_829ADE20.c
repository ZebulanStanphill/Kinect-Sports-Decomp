typedef struct Obj Obj;
typedef struct {
    void *slot0;
    void *slot1;
    void (*fn8)(Obj *self);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

extern void d3dx_jpeg_destroy(Obj *o);
extern void fn_82A1F2B8(const char *fmt, ...);

void d3dx_error_exit(Obj *o)
{
    o->vtbl->fn8(o);
    d3dx_jpeg_destroy(o);
    fn_82A1F2B8("[XAPI RETURN VALUE] 1\n");
}
