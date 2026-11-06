typedef struct Item_8252AEB8 {
    void *owner;
    int a;
    int b;
} Item_8252AEB8;
typedef struct List_8252AEB8 {
    Item_8252AEB8 *begin;
    Item_8252AEB8 *end;
    int pad[8];
} List_8252AEB8;
typedef struct Slot_8252AEB8 {
    char pad[0x324];
    List_8252AEB8 lists[3];
} Slot_8252AEB8;
typedef struct Obj_8252AEB8 {
    char pad[0x4c];
    char *slots;
    char pad50[0x1d0 - 0x50];
    int words[0x12 + 4];
    char pad2[0x8c0 - 0x1d0 - 4 * (0x12 + 4)];
    char *owner2;
} Obj_8252AEB8;
extern void fn_8251E530(List_8252AEB8 *list, Item_8252AEB8 *it);
extern void fn_825A1778(void *p, void *slots);

int fn_8252AEB8(Obj_8252AEB8 *o, int index, int notify)
{
    List_8252AEB8 *list;
    Item_8252AEB8 *it;
    int i;
    int *w;

    w = o->words;
    if (w[index + 0x12] != 0) {
        list = ((Slot_8252AEB8 *)(o->slots + index * 0x14))->lists;
        for (i = 3; i != 0; i--) {
            for (it = list->begin; it < list->end; it++) {
                if (it->owner == o) {
                    fn_8251E530(list, it);
                    break;
                }
            }
            list++;
        }
        w[index + 0x12] = 0;
        if (notify != 0 && index == 0 && o->owner2 != 0) {
            fn_825A1778(o->owner2 + 0x11c, o->slots);
        }
        return 1;
    }
    return 0;
}
