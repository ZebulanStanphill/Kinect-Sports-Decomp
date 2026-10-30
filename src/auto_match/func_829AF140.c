typedef struct S {
    char pad[0x55c];
    unsigned int f55c;
    unsigned int f560;
    char pad2[0x616 - 0x564];
    unsigned char state;
    unsigned char level;
    char pad3[3];
    unsigned char mode;
    char pad4[2];
    unsigned short val;
} S;

void fn_829AF140(S *p, unsigned short v, int on)
{
    p->val = v & 0xff;
    p->f560 |= 0x8000;
    if (on == 1) {
        p->f55c |= 0x80;
    } else {
        p->f55c &= ~0x80;
    }
    if (p->state == 2) {
        p->mode = 4;
    }
    if (p->state == 0 && p->level >= 8) {
        p->mode = 2;
    }
}
