typedef struct Obj_826A1DC0 {
    char pad0[0x34];
    void **items;          /* 0x34 */
    unsigned int count;    /* 0x38 */
} Obj_826A1DC0;

extern void *fn_8267B890(void *pool, unsigned int size, int flags);
extern void *fn_82695DA0(void *mem, void *src);

void fn_826A1DC0(Obj_826A1DC0 *self, void *pool)
{
    unsigned int count = self->count;
    unsigned int i;

    for (i = 0; i < count; i++) {
        if (self->items[i] != 0) {
            void *mem = fn_8267B890(pool, 0x10, 0);
            self->items[i] = mem ? fn_82695DA0(mem, self->items[i]) : 0;
        }
    }
}
