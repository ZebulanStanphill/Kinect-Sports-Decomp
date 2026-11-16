typedef struct Resource_82725848 Resource_82725848;
typedef struct Owner_82725848 Owner_82725848;

typedef struct Vtable_82725848 {
    void *pad[2];
    unsigned int (*getType)(Resource_82725848 *);
} Vtable_82725848;

struct Resource_82725848 {
    Vtable_82725848 *vtable;
};

typedef struct Definition_82725848 {
    char pad0[0x1a];
    unsigned short fontId;
    char pad1c[0x2c];
    unsigned int text;
} Definition_82725848;

typedef struct OwnerVtable_82725848 {
    void *pad[0x25];
    char *(*getLog)(Owner_82725848 *);
} OwnerVtable_82725848;

struct Owner_82725848 {
    OwnerVtable_82725848 *vtable;
    char pad4[0xe];
    unsigned short textId;
    char pad14[0x88];
    Definition_82725848 *definition;
    unsigned int padA0;
    void *library;
};

typedef struct Handle_82725848 {
    Resource_82725848 *resource;
    unsigned int flags;
} Handle_82725848;

extern void fn_827249B8(Handle_82725848 *out, void *library, void *font);
extern void fn_8267C4C8(void *log);
extern void fn_8267C4F0(void *log);
extern void fn_82687270(Resource_82725848 *resource);
extern void fn_82683F88(void *log, const char *format, ...);

static __forceinline void ReportError(Owner_82725848 *self, const char *message)
{
    char *log = self->vtable->getLog(self);
    if (log != 0) {
        fn_8267C4C8(log);
        fn_82683F88(log + 0xc, message, self->definition->fontId, self->textId,
                    (self->definition->text & ~3) + 8);
        fn_8267C4F0(log);
    }
}

Resource_82725848 *fn_82725848(Owner_82725848 *self)
{
    Handle_82725848 handle;
    if (self->definition->fontId == 0) {
        return 0;
    }
    fn_827249B8(&handle, self->library, (char *)self->definition + 0x10);
    if (handle.resource == 0) {
        ReportError(self,
                    "Error: Resource for font id = %d is not found in text field id = %d, def text = '%s'\n");
    } else if ((handle.resource->vtable->getType(handle.resource) & 0xff00) != 0x200) {
        ReportError(
            self,
            "Error: Font id = %d is referring to non-font resource in text field id = %d, def text = '%s'\n");
    } else {
        Resource_82725848 *resource = handle.resource;
        if (resource != 0) {
            fn_82687270(resource);
        }
        return resource;
    }
    if (handle.resource != 0) {
        fn_82687270(handle.resource);
    }
    return 0;
}
