typedef struct O_824BABE8 { unsigned int w[0x600]; } O_824BABE8;
typedef struct S_824BABE8 { char pad[0x100]; O_824BABE8 *o; } S_824BABE8;
#define CLR(e) if ((e) != 0) { (e) = 0; }
void fn_824BABE8(S_824BABE8 *self, unsigned int mode, int all)
{
    int base;
    if (all != 0) {
        CLR(self->o->w[0x918 / 4]);
        CLR(self->o->w[0x914 / 4]);
        CLR(self->o->w[0x92c / 4]);
        CLR(self->o->w[0x928 / 4]);
        return;
    }
    switch (mode) {
    case 3:
        base = 0x44;
        break;
    case 2:
        base = 0x22;
        break;
    case 1:
        base = 0x66;
        break;
    case 0:
        base = 0;
        break;
    default:
        return;
    }
    CLR(self->o->w[base + 0x252]);
    CLR(self->o->w[base + 0x253]);
    CLR(self->o->w[base + 0x254]);
    CLR(self->o->w[base + 0x255]);
    CLR(self->o->w[base + 0x256]);
    CLR(self->o->w[base + 0x257]);
    CLR(self->o->w[base + 0x258]);
    CLR(self->o->w[base + 0x259]);
    CLR(self->o->w[base + 0x25a]);
    CLR(self->o->w[base + 0x25b]);
    CLR(self->o->w[base + 0x25c]);
    CLR(self->o->w[base + 0x25d]);
    CLR(self->o->w[base + 0x25e]);
    CLR(self->o->w[base + 0x25f]);
    CLR(self->o->w[base + 0x260]);
    CLR(self->o->w[base + 0x261]);
    CLR(self->o->w[base + 0x262]);
    CLR(self->o->w[base + 0x263]);
    CLR(self->o->w[base + 0x264]);
    CLR(self->o->w[base + 0x265]);
    CLR(self->o->w[base + 0x266]);
    CLR(self->o->w[base + 0x267]);
    CLR(self->o->w[base + 0x268]);
    CLR(self->o->w[base + 0x269]);
    CLR(self->o->w[base + 0x26a]);
}
