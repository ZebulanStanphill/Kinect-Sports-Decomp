struct String_826CDDC0 {
    int unused;
    void *storage;
    int references; /* 0x08 */
};

struct Format_826CDDC0 {
    int kind;
    char *buffer;
    int capacity;
};
struct Object_826CDDC0;

struct Vtable_826CDDC0 {
    void *unused[8];
    void (*setName)(struct Object_826CDDC0 *self, struct String_826CDDC0 **name);
};

struct Object_826CDDC0 {
    struct Vtable_826CDDC0 *vtable;
    char padding[0x144];
    char *manager; /* 0x148 */
    char padding14C[0x5c];
    unsigned int level; /* 0x1a8 */
};

extern void *memset(void *destination, int value, unsigned int size);
extern int fn_8269DCE8(struct Format_826CDDC0 *format, const char *pattern, unsigned int *value);
extern struct String_826CDDC0 *fn_82694700(void *pool, const char *text);
extern void fn_826944C8(struct String_826CDDC0 *string);

static __forceinline void Release_826CDDC0(struct String_826CDDC0 *name)
{
    if (--name->references == 0) {
        fn_826944C8(name);
    }
}

void fn_826CDDC0(struct Object_826CDDC0 *self, unsigned int level)
{
    struct Format_826CDDC0 format;
    struct String_826CDDC0 *name;
    self->level = level;
    {
        char buffer[64] = {0};
        format.kind = 2;
        format.buffer = buffer;
        format.capacity = 64;
        fn_8269DCE8(&format, "_level{0}", &level);
        name = fn_82694700(self->manager + 0x254, buffer);
        ++name->references;
        self->vtable->setName(self, &name);
        Release_826CDDC0(name);
    }
}
