typedef struct Map_823CBF20 {
    void *head_alloc;
    void *head;
    unsigned int size;
} Map_823CBF20;

typedef struct Layer_823CBF20 {
    Map_823CBF20 **maps;
    int unk4[3];
    int current;
} Layer_823CBF20;

typedef struct Item_823CBF20 {
    char pad0[0x120];
    int active;
    char pad124[0x240 - 0x124];
    int pending;
} Item_823CBF20;

typedef struct LayerList_823CBF20 {
    Layer_823CBF20 **items;
} LayerList_823CBF20;

typedef struct Scene_823CBF20 {
    char pad0[8];
    LayerList_823CBF20 *layers;
} Scene_823CBF20;

typedef struct Self_823CBF20 {
    char pad0[0x240];
    Scene_823CBF20 *scene;
} Self_823CBF20;

extern Item_823CBF20 *fn_822ABA88(Map_823CBF20 *map, unsigned int key);

Item_823CBF20 *fn_823CBF20(Self_823CBF20 *self)
{
    Item_823CBF20 *found = 0;
    Layer_823CBF20 **layer = self->scene->layers->items;
    int n;
    for (n = 2; n != 0; n--, layer++) {
        Map_823CBF20 *map = (*layer)->maps[(*layer)->current];
        unsigned int i;
        for (i = 0; i < map->size; i++) {
            Item_823CBF20 *item = fn_822ABA88(map, i);
            if (item->active != 0 || item->pending != 0)
                found = item;
        }
    }
    return found;
}
