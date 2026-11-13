typedef struct Item_8248A380 {
    char pad0[4];
    int m4;
    char pad8[0x10];
    unsigned m18;
    char pad1c[0xc];
    unsigned m28;
} Item_8248A380;
typedef struct Vec_8248A380 {
    Item_8248A380 **begin;
    Item_8248A380 **end;
} Vec_8248A380;
typedef struct Obj_8248A380 {
    char pad0[8];
    Vec_8248A380 *vec;
} Obj_8248A380;

extern void fn_82489AA0(Item_8248A380 *, int);
extern unsigned fn_82A1E650(unsigned, int);

void fn_8248A380(Obj_8248A380 *o)
{
    Vec_8248A380 *v = o->vec;
    unsigned i;

    for (i = 0; i < (unsigned)(v->end - v->begin); i++) {
        Item_8248A380 *it = v->begin[i];
        if (it->m4 > 0 && it->m4 <= 2 && fn_82A1E650(it->m18, 0) == 0) {
            if (it->m28 == 0) {
                fn_82489AA0(it, 0);
            } else {
                fn_82489AA0(it, 3);
            }
        }
    }
}
