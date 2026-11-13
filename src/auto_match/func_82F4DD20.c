/* Finds which of the two slots (0x10 bytes each, key at +0x2d9c of the global) holds `key` and passes its
   index to fn_82F58F20 on the object at +0x2d8c, when there is one. */
typedef struct Slot_82F4DD20 {
    void *key;
    int pad[3];
} Slot_82F4DD20;

typedef struct Global_82F4DD20 {
    char pad0[0x2d8c];
    void *target;                   /* 0x2d8c */
    char pad2d90[0xc];
    Slot_82F4DD20 slots[2];         /* 0x2d9c */
} Global_82F4DD20;

extern Global_82F4DD20 *lbl_8326183C;
extern void fn_82F58F20(void *target, int index);

void fn_82F4DD20(void *key)
{
    Global_82F4DD20 *g = lbl_8326183C;
    int i;

    for (i = 0; i < 2; i++) {
        if (g->slots[i].key == key) {
            if (g->target != 0)
                fn_82F58F20(g->target, i);
            return;
        }
    }
}
