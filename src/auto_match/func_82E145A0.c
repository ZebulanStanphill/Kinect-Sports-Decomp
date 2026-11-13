typedef struct { const char *s; } StringPtr_82E145A0;
typedef struct { void *p; } RefPtr_82E145A0;
typedef struct {
    StringPtr_82E145A0 name;
    StringPtr_82E145A0 className;
    RefPtr_82E145A0 object;
} Obj_82E145A0;

extern void fn_82CED2F8(StringPtr_82E145A0 *self);
extern void fn_82CED628(StringPtr_82E145A0 *self, const char *s);
extern RefPtr_82E145A0 *fn_83082568(RefPtr_82E145A0 *self, const RefPtr_82E145A0 *other);
extern void *fn_83082610(RefPtr_82E145A0 *self);
extern const char *fn_82CEAC20(void *obj);
extern void fn_82CE4040(void *obj); /* addReference */
extern void fn_82CE4118(void *obj); /* removeReference */

static __forceinline void Assign_82E145A0(RefPtr_82E145A0 *self, const RefPtr_82E145A0 *other)
{
    if (self != other) {
        void *p = other->p;
        if (p != 0) {
            fn_82CE4040(p);
        }
        if (self->p != 0) {
            fn_82CE4118(self->p);
        }
        self->p = p;
    }
}

static __forceinline void Release_82E145A0(RefPtr_82E145A0 *self)
{
    if (self->p != 0) {
        fn_82CE4118(self->p);
    }
    self->p = 0;
}

Obj_82E145A0 *fn_82E145A0(Obj_82E145A0 *self, const char *name, const RefPtr_82E145A0 *object)
{
    RefPtr_82E145A0 tmp;

    fn_82CED2F8(&self->name);
    fn_82CED2F8(&self->className);
    self->object.p = 0;
    fn_82CED628(&self->name, name);
    fn_83082568(&tmp, object);
    Assign_82E145A0(&self->object, &tmp);
    Release_82E145A0(&tmp);
    fn_82CED628(&self->className, fn_83082610(&self->object) != 0 ? fn_82CEAC20(fn_83082610(&self->object)) : 0);
    return self;
}
