typedef struct GradientArgs_8275ADD0 {
    int fill;
    int format;
    int reserved;
    int layers;
    void *image;
    int extra;
    int width;
    int height;
    int clear;
    int flags;
    void *heap;
    unsigned char mode;
} GradientArgs_8275ADD0;

typedef struct GradientFactory_8275ADD0 GradientFactory_8275ADD0;

typedef struct FactoryVTable_8275ADD0 {
    void *reserved;
    void *(*create)(GradientFactory_8275ADD0 *, const GradientArgs_8275ADD0 *);
} FactoryVTable_8275ADD0;

struct GradientFactory_8275ADD0 {
    const FactoryVTable_8275ADD0 *vtable;
};

typedef struct Resource_8275ADD0 Resource_8275ADD0;

typedef struct ResourceVTable_8275ADD0 {
    void *slots[2];
    void (*release)(Resource_8275ADD0 *, void *);
} ResourceVTable_8275ADD0;

struct Resource_8275ADD0 {
    const ResourceVTable_8275ADD0 *vtable;
};

typedef struct Key_8275ADD0 {
    Resource_8275ADD0 *resource;
    void *data;
} Key_8275ADD0;

typedef struct Lookup_8275ADD0 {
    int kind;
    void *entry;
} Lookup_8275ADD0;

typedef struct Library_8275ADD0 {
    char pad[0x2c];
    void *heap;
} Library_8275ADD0;

extern const char lbl_831566A4[];
extern void fn_82686228(Key_8275ADD0 *, const void *, void *);
extern int fn_82687AB8(Library_8275ADD0 *, Lookup_8275ADD0 *, const Key_8275ADD0 *);
extern void *fn_82686CA8(Lookup_8275ADD0 *);
extern void *fn_8275A5A0(void *, int, void *);
extern void *fn_8267B890(void *, unsigned int, const int *);
extern void *fn_826F3700(void *, void *, const Key_8275ADD0 *, int);
extern void fn_826874B8(void *, void *);
extern void fn_82687570(void *, const char *);
extern void fn_82687270(void *);
extern void fn_8267C4F0(void *);
extern void fn_8267C498(void *);

void *fn_8275ADD0(void *gradient, Library_8275ADD0 *library, int format, GradientFactory_8275ADD0 *factory,
                  int width, int height, unsigned char mode)
{
    Key_8275ADD0 key;
    Lookup_8275ADD0 lookup;
    void *result;
    fn_82686228(&key, lbl_831566A4, gradient);
    lookup.kind = 0;
    lookup.entry = 0;
    if (fn_82687AB8(library, &lookup, &key) == 3) {
        void *image = fn_8275A5A0(gradient, format, library->heap);
        if (image != 0) {
            GradientArgs_8275ADD0 args;
            void *texture;
            void *storage;
            args.heap = library->heap;
            args.fill = 1;
            texture = 0;
            args.reserved = 0;
            args.format = 2;
            args.layers = 1;
            args.extra = 0;
            args.image = image;
            args.width = width;
            args.height = height;
            args.clear = 0;
            args.flags = 0;
            args.mode = mode;
            if (factory != 0) {
                texture = factory->vtable->create(factory, &args);
            }
            storage = fn_8267B890(args.heap, 0x1c, 0);
            result = storage != 0 ? fn_826F3700(storage, texture, &key, 2) : 0;
            if (result != 0) {
                fn_826874B8(lookup.entry, result);
            }
            if (texture != 0) {
                fn_8267C498(texture);
            }
            if (result == 0) {
                fn_82687570(lookup.entry, "Failed to create gradient");
            }
        } else {
            result = 0;
            fn_82687570(lookup.entry, "Failed to create gradient");
        }
        if (image != 0) {
            fn_8267C498(image);
        }
    } else {
        result = fn_82686CA8(&lookup);
    }
    if (lookup.kind == 1) {
        fn_82687270(lookup.entry);
    } else if (lookup.kind >= 2) {
        fn_8267C4F0(lookup.entry);
    }
    if (key.resource != 0) {
        key.resource->vtable->release(key.resource, key.data);
    }
    return result;
}
