typedef struct Config_82418130 {
    char pad0[0xc78];
    int enabled;
} Config_82418130;

typedef struct Item_82418130 {
    char pad0[0x24];
    int active;
} Item_82418130;

typedef struct Slot_82418130 {
    char pad0[0x14];
    int value;
    char pad18[0x1ac - 0x18];
} Slot_82418130;

typedef struct Obj_82418130 {
    Config_82418130 *config;
    int pad4;
    Slot_82418130 *slots;
    char padc[0x18 - 0xc];
    int index;
} Obj_82418130;

extern Item_82418130 *fn_82417F58(Obj_82418130 *self);

int fn_82418130(Obj_82418130 *self)
{
    Item_82418130 *item;

    if (self->config->enabled == 0) {
        return 0;
    }
    item = fn_82417F58(self);
    if (item != 0 && item->active == 0) {
        return 0;
    }
    return self->slots[self->index].value;
}
