typedef struct Array_826A2DA8 {
    void **items;          /* 0x0 */
    unsigned int count;    /* 0x4 */
} Array_826A2DA8;

typedef struct Obj_826A2DA8 {
    char pad0[0x34];
    Array_826A2DA8 children; /* 0x34 */
} Obj_826A2DA8;

extern void fn_827A9810(Array_826A2DA8 *array, unsigned int count);
extern void *fn_8267B890(void *pool, unsigned int size, int flags);
extern void *fn_82695DA0(void *mem, void *src);

void fn_826A2DA8(Obj_826A2DA8 *self, void *pool, Obj_826A2DA8 *src)
{
    Array_826A2DA8 *children = &self->children;
    unsigned int count;
    unsigned int remaining;
    int offset;

    fn_827A9810(children, src->children.count);
    count = self->children.count;
    if (count) {
        offset = 0;
        remaining = count;
        do {
            if (*(void **)(offset + (int)src->children.items) != 0) {
                void *mem = fn_8267B890(pool, 0x10, 0);
                *(void **)((int)children->items + offset) = mem ? fn_82695DA0(mem, *(void **)(offset + (int)src->children.items)) : 0;
            }
            remaining--;
            offset += 4;
        } while (remaining);
    }
}
