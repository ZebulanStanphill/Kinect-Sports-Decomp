typedef struct Obj_82849B50 {
    char pad0[0x18];
    void ***items;
    int pad1c;
    int count;
} Obj_82849B50;

extern int fn_8262FEC8(void *p);

void fn_82849B50(Obj_82849B50 *param_1)
{
    Obj_82849B50 *self = param_1;
    int i;
    for (i = 0; i < self->count; i++) {
        void *item = *self->items[i];
        fn_8262FEC8(item);
    }
}
