typedef struct Object_82E0CF68 Object_82E0CF68;

typedef struct VTable_82E0CF68 {
    void *unused[4];
    void *(*lookup)(Object_82E0CF68 *, const char *);
    void *unknown14;
    void *(*getName)(Object_82E0CF68 *);
    void *(*getItems)(Object_82E0CF68 *);
    void *unknown20[2];
    void *(*getRegistry)(Object_82E0CF68 *);
} VTable_82E0CF68;

struct Object_82E0CF68 {
    VTable_82E0CF68 *vtable;
    int unknown4[5];
    Object_82E0CF68 *resource; /* 0x18 */
};

typedef struct ResourceVTable_82E0CF68 {
    void *unused[6];
    int (*getObject)(Object_82E0CF68 *, const char *, void *);
} ResourceVTable_82E0CF68;

extern void fn_82E12D08(Object_82E0CF68 *);
extern Object_82E0CF68 *fn_82E0BA38(Object_82E0CF68 *);
extern unsigned char *fn_82CEAC60(unsigned char *, void *, void *);
extern int fn_82E0A018(Object_82E0CF68 *, void *);
extern void *fn_82E0A398(void *);
extern void fn_82E0C5E0(Object_82E0CF68 *, void *);
extern void fn_82E162A8(Object_82E0CF68 *, Object_82E0CF68 *);

int fn_82E0CF68(Object_82E0CF68 *self, const char *type, void *context)
{
    const char *name;
    if (context) {
        fn_82E12D08(self);
    }
    name = self->vtable->getName(self);
    if (type && name) {
        Object_82E0CF68 *registry = fn_82E0BA38(self);
        void *requested = registry->vtable->lookup(registry, type);
        void *actual = registry->vtable->lookup(registry, name);
        unsigned char compatible;
        if (!*fn_82CEAC60(&compatible, requested, actual)) {
            return 0;
        }
    }
    self->vtable->getItems(self);
    if (context) {
        if (fn_82E0A018(self, context) == 1) {
            return 0;
        }
    } else {
        void *registry = fn_82E0A398(self->vtable->getRegistry(self));
        if (registry) {
            fn_82E0C5E0(self, registry);
        }
        fn_82E162A8(self->resource, fn_82E0BA38(self));
    }
    return ((ResourceVTable_82E0CF68 *)self->resource->vtable)->getObject(self->resource, name, context);
}
