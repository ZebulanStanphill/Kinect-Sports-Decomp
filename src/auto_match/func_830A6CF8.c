typedef struct Item_830A6CF8 {
    char data[0x90];
} Item_830A6CF8;

typedef struct Table_830A6CF8 {
    char pad0[0x20];
    Item_830A6CF8 items[1];
} Table_830A6CF8;

Item_830A6CF8 *fn_830A6CF8(Table_830A6CF8 *t, int index)
{
    return &t->items[index];
}
