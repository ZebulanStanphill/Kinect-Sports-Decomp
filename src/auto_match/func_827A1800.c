typedef unsigned char bool;

typedef struct Compact_827A1800 {
    unsigned flag : 1;
    unsigned pad0 : 31;
    int x4;
    int x8;
    int xc;
    int x10;
    unsigned short x14;
    unsigned short x16;
    unsigned short x18;
    unsigned short x1a;
    char x1c;
    signed char x1d;
} Compact_827A1800;

typedef struct Full_827A1800 {
    unsigned flag : 1;
    unsigned pad0 : 31;
    int x4;
    int x8;
    int xc;
    int x10;
    int x14;
    int x18;
    char pad1c[0x26 - 0x1c];
    unsigned short x26;
    short x28;
} Full_827A1800;

typedef union Elem_827A1800 {
    Compact_827A1800 c;
    Full_827A1800 f;
} Elem_827A1800;

typedef struct Arr_827A1800 {
    Elem_827A1800 **data;
    unsigned int count;
} Arr_827A1800;

typedef struct Obj_827A1800 {
    char pad[0x24];
    Arr_827A1800 arr;
} Obj_827A1800;

typedef struct Out_827A1800 {
    unsigned int a0;
    unsigned int a4;
    unsigned int a8;
    unsigned int ac;
    int a10;
    int a14;
} Out_827A1800;

extern float fn_82799C40(Elem_827A1800 *e);
extern int fn_827A0BD0();

int fn_827A1800(Obj_827A1800 *o, unsigned int i, Out_827A1800 *out)
{
    Arr_827A1800 *a;
    Elem_827A1800 *e;
    bool bad;

    if (out != 0) {
        fn_827A0BD0();
        a = &o->arr;
        if (a == 0 || i >= a->count || (int)i < 0) {
            bad = 1;
        } else {
            bad = 0;
        }
        if (!bad) {
            e = a->data[i];
            out->a8 = (unsigned int)((unsigned char)e->c.flag ? (float)e->c.x1a : (float)e->f.x26);
            out->ac = (unsigned int)fn_82799C40(e);
            out->a0 = (unsigned char)e->c.flag ? e->c.x14 : e->f.x14;
            out->a4 = (unsigned char)e->c.flag ? e->c.x16 : e->f.x18;
            out->a14 = (unsigned char)e->c.flag ? e->c.x1d : e->f.x28;
            out->a10 = (unsigned char)e->c.flag ? e->c.xc : e->f.xc;
            return 1;
        }
    }
    return 0;
}
