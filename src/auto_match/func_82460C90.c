typedef struct Map_82460C90 {
    int pad0;
    unsigned int head;
} Map_82460C90;

typedef struct Self_82460C90 {
    char pad[0x94];
    unsigned int handle;
} Self_82460C90;

extern Map_82460C90 *fn_8256BF18(void);
extern void fn_8256D078(Map_82460C90 *map, unsigned int *handle);
extern void fn_8259BB38(unsigned int *out, Map_82460C90 *map, unsigned int *key);
extern void fn_8256D1B8(Map_82460C90 *map, char *key, char *value, unsigned int handle);

static __forceinline int IsSet(unsigned int *h)
{
    int result;
    result = 0; if (h != 0) result = *h != 0;
    return result;
}

void fn_82460C90(Self_82460C90 *self, unsigned int *other)
{
    unsigned int *h = &self->handle;
    if (IsSet(h)) {
        fn_8256D078(fn_8256BF18(), h);
        *h = 0;
    }
    if (IsSet(other)) {
        Map_82460C90 *map = fn_8256BF18();
        unsigned int key = *other;
        unsigned int it;
        fn_8259BB38(&it, map, &key);
        if (it != map->head) {
            char *k = (char *)(it + 0x10);
            fn_8256D1B8(map, k, k + 0x18, *other);
        }
        *h = *other;
    }
}
