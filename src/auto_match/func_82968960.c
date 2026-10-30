typedef struct Item {
    unsigned char pad[0x30];
    unsigned int index;
} Item;

typedef struct List {
    int x0;
    int x4;
    unsigned int count;
    int xc;
    int x10;
    Item **items;
} List;

int fn_82968960(List *l)
{
    unsigned int i;
    for (i = 0; i < l->count; i++) {
        l->items[i]->index = i;
    }
    return 0;
}
