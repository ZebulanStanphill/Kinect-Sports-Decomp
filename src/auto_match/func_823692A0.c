typedef struct Map_823692A0 {
    int pad0;
    void *head;
    unsigned int size;
} Map_823692A0;

typedef struct Group_823692A0 {
    Map_823692A0 **maps;
    int pad4[3];
    int current;
} Group_823692A0;

typedef struct Groups_823692A0 {
    Group_823692A0 **side;
} Groups_823692A0;

typedef struct Slot_823692A0 {
    unsigned int id;
    char pad4[0x2c];
} Slot_823692A0;

typedef struct Obj_823692A0 {
    int pad0[2];
    Groups_823692A0 *groups;
    char padC[0x10b0 - 0xc];
    Slot_823692A0 slots[2][7];
} Obj_823692A0;

extern int fn_822ABA88(Map_823692A0 *map, unsigned int key);

int fn_823692A0(Obj_823692A0 *self, int index, int side)
{
    int other = side == 0;
    Group_823692A0 *g = self->groups->side[other];
    unsigned int id = self->slots[side][index].id;
    Map_823692A0 *map = g->maps[g->current];
    unsigned int i;

    for (i = 0; i < map->size; i++) {
        if (self->slots[other][i].id == id) {
            return fn_822ABA88(map, i);
        }
    }
    return 0;
}
