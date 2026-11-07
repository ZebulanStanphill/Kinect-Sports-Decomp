typedef struct Item_82477F00 {
    int unk0[9];
    float x;
    float y;
    int unk2C[5];
    unsigned char unk40;
    unsigned char unk41;
    unsigned char unk42;
} Item_82477F00;

typedef struct List_82477F00 {
    Item_82477F00 *items[2];
    int current;
} List_82477F00;

extern List_82477F00 *fn_82275128(void);

static __forceinline unsigned char isActive(Item_82477F00 *item)
{
    return item->unk40 != 0 && item->unk42 != 0;
}

unsigned char fn_82477F00(float minX, float maxX, float minY, float maxY)
{
    List_82477F00 *list = fn_82275128();
    Item_82477F00 *item = list->items[list->current];

    if (item != 0 && isActive(item) && item->x > minX && item->x < maxX && item->y > minY
        && item->y < maxY) {
        return 1;
    }
    return 0;
}
