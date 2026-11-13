typedef struct Obj_82FFA1C0 {
    int pad0;
    char inner[0x418];        /* 0x004 */
    char table[1];            /* 0x41c */
} Obj_82FFA1C0;

extern int *fn_82FFE0F0(void *table);
extern void fn_82FF8B88(void *inner, int value, void *data);
extern void fn_82FF8D30(void *inner, int key, void *data, int extra, int flags);

void fn_82FFA1C0(Obj_82FFA1C0 *self, int key, void *data, int extra, int flags)
{
    int *found = fn_82FFE0F0(self->table);

    if (found != 0) {
        fn_82FF8B88(self->inner, *found, data);
    } else {
        fn_82FF8D30(self->inner, key, data, data == 0 ? extra : 0, flags);
    }
}
