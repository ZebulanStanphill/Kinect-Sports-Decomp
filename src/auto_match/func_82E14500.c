typedef struct { const char *s; } StringPtr_82E14500;
typedef struct { void *p; } RefPtr_82E14500;
typedef struct {
    StringPtr_82E14500 name;
    StringPtr_82E14500 className;
    RefPtr_82E14500 object;
} Obj_82E14500;

extern void fn_82CED2F8(StringPtr_82E14500 *self);
extern void fn_82CED628(StringPtr_82E14500 *self, const char *s);
extern void fn_830825B8(RefPtr_82E14500 *self, void *obj, void *extra);
extern void *fn_83082610(RefPtr_82E14500 *self);
extern const char *fn_82CEAC20(void *obj);

Obj_82E14500 *fn_82E14500(Obj_82E14500 *self, const char *name, void *obj, void *extra)
{
    fn_82CED2F8(&self->name);
    fn_82CED2F8(&self->className);
    self->object.p = 0;
    fn_82CED628(&self->name, name);
    fn_830825B8(&self->object, obj, extra);
    if (fn_83082610(&self->object) != 0) {
        fn_82CED628(&self->className, fn_82CEAC20(fn_83082610(&self->object)));
    } else {
        fn_82CED628(&self->className, 0);
    }
    return self;
}
