/* Builds a {0, 0} pair from the two words at 0x14/0x18 (fn_82517978) and passes it with the stored
   parameters to fn_827DC3E8 (the func_822CC118 shape). */
typedef struct { int first; int second; } Pair_827E5468;

typedef struct Obj_827E5468 {
    char pad00[0x14];
    int f14;
    int f18;
    int pad1c;
    int f20;
    char pad24[0x30 - 0x24];
    unsigned char f30;
    unsigned char f31;
    char pad32[2];
    int f34;
    int f38;
    float f3c;
    float f40;
    float f44;
    unsigned char f48;
} Obj_827E5468;

extern void fn_82517978(Pair_827E5468 *p, int a, int b, int c);
extern void fn_827DC3E8(int a, unsigned char b, unsigned char c, int d, int e, float x, float y, float z,
                        unsigned char f, Pair_827E5468 *pair);

void fn_827E5468(Obj_827E5468 *o)
{
    Pair_827E5468 pair;

    pair.first = 0;
    pair.second = 0;
    fn_82517978(&pair, o->f14, o->f18, 0);
    fn_827DC3E8(o->f20, o->f30, o->f31, o->f34, o->f38, o->f3c, o->f40, o->f44, o->f48, &pair);
}
