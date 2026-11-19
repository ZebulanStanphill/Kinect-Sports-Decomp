typedef struct Node_827D86F0 {
    char pad00[0xc];
    char *name; /* 0x0c */
} Node_827D86F0;

typedef struct Allocator_827D86F0 Allocator_827D86F0;

typedef struct AllocatorVtbl_827D86F0 {
    void *slot0;
    void *slot1;
    void *slot2;
    char *(*Alloc)(Allocator_827D86F0 *self, unsigned int size, void *desc); /* 0x0c */
} AllocatorVtbl_827D86F0;

struct Allocator_827D86F0 {
    AllocatorVtbl_827D86F0 *vtbl;
};

typedef struct Registry_827D86F0 {
    char pad000[0x350];
    char names[4];       /* 0x350: map of hash -> name */
    Node_827D86F0 *head; /* 0x354 */
    char pad358[0x70];
    char lock[0x1c]; /* 0x3c8 */
} Registry_827D86F0;

extern "C" void RtlEnterCriticalSection(void *section);
extern "C" void RtlLeaveCriticalSection(void *section);

/* a map iterator: returned through a hidden result pointer */
struct Iterator_827D86F0 {
    Node_827D86F0 *node;

    Iterator_827D86F0()
    {
    }
};

extern "C" Iterator_827D86F0 fn_827E0658(void *map, unsigned int *key);
extern "C" char **fn_827D9410(void *map, unsigned int *key);
extern "C" void fn_82811438(void *out, void *in, int size);
extern "C" void fn_8281C448(const char *format, ...);
extern "C" unsigned int fn_82F6D460(const char *str, unsigned int max);
extern "C" void fn_82F66368(char *dst, unsigned int size, const char *src, unsigned int count);
extern "C" int strncmp(const char *a, const char *b, unsigned int n);
extern "C" Allocator_827D86F0 *lbl_83156AA0;

extern "C" int fn_827D86F0(Registry_827D86F0 *self, unsigned int *hash, const char *name)
{
    int result;
    Node_827D86F0 *node;
    char *copy;
    unsigned char desc[32];

    if (name == 0) {
        return 0;
    }
    RtlEnterCriticalSection(self->lock);
    {
        const Iterator_827D86F0 &found = fn_827E0658(self->names, hash);
        node = found.node;
    }
    if (node != self->head) {
        if (strncmp(node->name, name, 0x400) != 0) {
            fn_8281C448("Found hash clash for '0x%x': %s and %s\n", *hash, node->name, name);
            result = 0;
            goto done;
        }
    } else {
        unsigned int size;
        unsigned int capacity;
        int flags = 0;

        fn_82811438(desc, &flags, 0x10);
        size = fn_82F6D460(name, 0x400) + 1;
        copy = lbl_83156AA0->vtbl->Alloc(lbl_83156AA0, size, desc);
        capacity = fn_82F6D460(name, 0x400) + 1;
        fn_82F66368(copy, capacity, name, 0x400);
        *fn_827D9410(self->names, hash) = copy;
    }
    result = 1;
done:
    RtlLeaveCriticalSection(self->lock);
    return result;
}
