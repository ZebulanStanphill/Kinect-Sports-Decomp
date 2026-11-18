typedef struct File_82A9A9E8 {
    char path[0x104];      /* 0x0 */
    int id;                /* 0x104 */
    unsigned int timeLow;  /* 0x108 */
    unsigned int timeHigh; /* 0x10c */
    const char *contents;  /* 0x110 */
} File_82A9A9E8;

typedef struct List_82A9A9E8 {
    int data;
    unsigned int count;
} List_82A9A9E8;

typedef struct Writer_82A9A9E8 Writer_82A9A9E8;

typedef struct Vtable_82A9A9E8 {
    void *unused[3];
    void (*write)(Writer_82A9A9E8 *, const char *, unsigned int);
} Vtable_82A9A9E8;

struct Writer_82A9A9E8 {
    Vtable_82A9A9E8 *vtable;
    unsigned int depth; /* 0x4 */
};

typedef struct Object_82A9A9E8 {
    int unused;
    List_82A9A9E8 files; /* 0x4 */
} Object_82A9A9E8;

extern void fn_82A99BC8(void *);
extern void fn_82A99B70(void *, const char *, ...);
extern void fn_82A9A860(void *);
extern void fn_82A9A810(void *);
extern void fn_82A99C28(void *, const char *);
extern void fn_82A99C98(void *, const char *);
extern void fn_82A99D88(void *, const char *, const void *);
extern unsigned int strlen(const char *);

static __forceinline void Attribute_82A9A9E8(void *writer, const char *name, int value)
{
    fn_82A99B70(writer, " %s=\"%d\"", name, value);
}

static __forceinline void TimeAttribute_82A9A9E8(void *writer, const char *name, unsigned int low,
                                                 unsigned int high)
{
    fn_82A99B70(writer, " %s=\"%08x-%08x\"", name, low, high);
}

static __forceinline void BeginContent_82A9A9E8(Writer_82A9A9E8 *writer)
{
    fn_82A99B70(writer, ">");
    writer->depth++;
}

static __forceinline File_82A9A9E8 *Begin_82A9A9E8(List_82A9A9E8 *list)
{
    return (File_82A9A9E8 *)list->data;
}

static __forceinline File_82A9A9E8 *End_82A9A9E8(List_82A9A9E8 *list)
{
    return (File_82A9A9E8 *)list->data + list->count;
}

void fn_82A9A9E8(Object_82A9A9E8 *self, Writer_82A9A9E8 *writer)
{
    File_82A9A9E8 *file;
    fn_82A99BC8(writer);
    fn_82A99B70(writer, "<%s", "files");
    fn_82A9A860(writer);
    for (file = Begin_82A9A9E8(&self->files); file < End_82A9A9E8(&self->files); file++) {
        fn_82A99BC8(writer);
        fn_82A99B70(writer, "<%s", "file");
        Attribute_82A9A9E8(writer, "id", file->id);
        fn_82A99D88(writer, "path", file);
        TimeAttribute_82A9A9E8(writer, "time", file->timeLow, file->timeHigh);
        if (file->contents != 0) {
            BeginContent_82A9A9E8(writer);
            writer->vtable->write(writer, file->contents, strlen(file->contents));
            fn_82A99C98(writer, "file");
        } else {
            fn_82A9A810(writer);
        }
    }
    fn_82A99C28(writer, "files");
}
