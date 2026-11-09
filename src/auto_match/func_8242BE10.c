typedef struct Inner_8242BE10 {
    char pad0[0x30];
    unsigned char flag30;
    char pad31[0x50 - 0x31];
    float f50;
    float f54;
} Inner_8242BE10;

typedef struct Mid_8242BE10 {
    char pad0[0x93c];
    Inner_8242BE10 *inner;
} Mid_8242BE10;

typedef struct Sub_8242BE10 {
    char pad0[0x1c];
    char part1c[0x80];
    Mid_8242BE10 *mid;
} Sub_8242BE10;

typedef struct Obj_8242BE10 {
    char pad0[0x174];
    Sub_8242BE10 *sub;
} Obj_8242BE10;

extern int fn_8242E3E0(Obj_8242BE10 *p);
extern void fn_8243A970(void *p, float f);

void fn_8242BE10(Obj_8242BE10 *p, float f)
{
    Inner_8242BE10 *in;
    float v;

    if (fn_8242E3E0(p) != 0) {
        in = p->sub->mid->inner;
        if (in != 0) {
            in->flag30 = 0;
            v = 0.0f;
            in->f50 = v;
            in->f54 = v;
        }
    }
    fn_8243A970(p->sub->part1c, f);
}
