typedef int (*Compare_82851790)(void *, const void *);

typedef struct Owner_82851790 {
    char pad0[0x20];
    void *table; /* 0x20 */
} Owner_82851790;

extern int fn_82818270(void *table, const void *key, int index, void **out, Compare_82851790 compare);

int fn_82851790(Owner_82851790 *self, const void *key, int index, void **out, Compare_82851790 compare)
{
    if (self != 0 && self->table != 0 && key != 0 && index >= 0 && out != 0 && compare != 0) {
        return fn_82818270(self->table, key, index, out, compare);
    }
    return 0;
}
