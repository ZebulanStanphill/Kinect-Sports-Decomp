typedef struct Obj_828FCEB8 {
    unsigned char block00[0x1c];
    unsigned char block1c[0x1c];
    unsigned char block38[0x1c];
    unsigned char block54[0x1c];
    unsigned char block70[0x1c];
    int f8c;
    int f90;
    int f94;
    int f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    int fac;
    int fb0;
    int mode;
} Obj_828FCEB8;

void *memset(void *dst, int c, unsigned int n);

Obj_828FCEB8 *fn_828FCEB8(Obj_828FCEB8 *o, int mode)
{
    memset(o->block00, 0, 0x1c);
    memset(o->block1c, 0, 0x1c);
    memset(o->block38, 0, 0x1c);
    memset(o->block54, 0, 0x1c);
    memset(o->block70, 0, 0x1c);
    o->mode = mode;
    o->f8c = 0;
    o->f90 = 0;
    o->f94 = 0;
    o->f98 = 0;
    o->fac = 0;
    o->f9c = 0;
    o->fa0 = 0;
    o->fa4 = 0;
    o->fa8 = 0;
    o->fb0 = 0;
    if (mode >= 4 && mode <= 5) {
        o->fb0 = 1;
    }
    return o;
}
