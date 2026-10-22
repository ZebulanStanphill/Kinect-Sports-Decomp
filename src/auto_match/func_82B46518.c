typedef struct Item {
    unsigned int f0_hi : 15;
    unsigned int f0_val : 14;
    unsigned int f0_lo : 3;
    unsigned int f4_hi : 25;
    unsigned int f4_e : 3;
    unsigned int f4_d : 1;
    unsigned int f4_c : 1;
    unsigned int f4_b : 1;
    unsigned int f4_a : 1;
    unsigned int f8_hi : 10;
    unsigned int f8_b : 3;
    unsigned int f8_a : 19;
    int c;
    int d;
    int e;
    int pad18;
    int pad1c;
    int g;
    int pad24;
} Item;

typedef struct Owner {
    int pad0;
    int pad4;
    int pad8;
    Item *items;
} Owner;

void fn_82B46518(Owner *owner, int index, int value, unsigned int a, unsigned int b)
{
    owner->items[index].f0_val = a;
    owner->items[index].e = 0;
    owner->items[index].d = 0;
    owner->items[index].c = 0;
    owner->items[index].g = value;
    owner->items[index].f8_a = 0x7ffff;
    owner->items[index].f8_b = b;
    owner->items[index].f4_e = 7;
    owner->items[index].f4_c = 1;
    owner->items[index].f4_a = 1;
}
