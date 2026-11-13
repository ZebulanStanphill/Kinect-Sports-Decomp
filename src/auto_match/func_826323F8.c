/* Reset: clears the header fields, the four 0x20-byte blocks at 0x80..0xff and the counters after them. */
typedef struct Obj_826323F8 {
    int f00;
    int f04;
    char pad08[0x50 - 0x8];
    int f50;
    int f54;
    int f58;
    int f5c;
    char pad60[0x78 - 0x60];
    int f78;
    unsigned char f7c;
    char pad7d[0x80 - 0x7d];
    unsigned char block80[0x20];
    unsigned char blockA0[0x20];
    unsigned char blockC0[0x20];
    unsigned char blockE0[0x20];
    int f100;
    int f104;
    int f108;
    char pad10c[0x13c - 0x10c];
    int f13c;
    int f140;
    int f144;
    int f148;
    int f14c;
    int f150;
    int f154;
    int f158;
    int f15c;
} Obj_826323F8;

void *memset(void *dst, int c, unsigned int n);

void fn_826323F8(Obj_826323F8 *o)
{
    o->f50 = 0;
    o->f58 = 0;
    o->f5c = 0;
    o->f7c = 0;
    memset(o->block80, 0, 0x20);
    memset(o->blockA0, 0, 0x20);
    memset(o->blockC0, 0, 0x20);
    memset(o->blockE0, 0, 0x20);
    o->f100 = 0;
    o->f104 = 0;
    o->f108 = 0;
    o->f78 = 0;
    o->f04 = 0;
    o->f13c = 0;
    o->f150 = 0;
    o->f140 = 0;
    o->f144 = 0;
    o->f148 = 0;
    o->f14c = 0;
    o->f54 = 0;
    o->f154 = 0;
    o->f158 = 0;
    o->f15c = 0;
}
