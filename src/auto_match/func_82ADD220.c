typedef struct Info_82ADD220 {
    char pad[0x44];
    unsigned int high : 4;
    unsigned int order : 28;
} Info_82ADD220;

typedef struct Item_82ADD220 {
    char pad[8];
    unsigned int top : 18;
    unsigned int kind : 7;
    unsigned int low : 7;
    char pad2[4];
    unsigned int index;
    char pad3[8];
    Info_82ADD220 *info;
} Item_82ADD220;

int fn_82ADD220(Item_82ADD220 **pa, Item_82ADD220 **pb)
{
    Item_82ADD220 *a = *pa;
    Item_82ADD220 *b = *pb;
    int diff;
    int ra;
    int rb;

    if (a == 0)
        return 1;
    if (b == 0)
        return -1;
    diff = b->info->order - a->info->order;
    if (diff != 0)
        return diff;
    ra = 0;
    rb = 0;
    switch ((int)a->kind) {
    case 0x6e:
        ra = 1;
        break;
    case 0x70:
        ra = 2;
        break;
    }
    switch ((int)b->kind) {
    case 0x6e:
        rb = 1;
        break;
    case 0x70:
        rb = 2;
        break;
    }
    diff = ra - rb;
    if (diff != 0)
        return diff;
    return (unsigned short)a->index - (unsigned short)b->index;
}
