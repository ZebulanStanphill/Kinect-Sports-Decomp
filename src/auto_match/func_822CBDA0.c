struct Desc_822CBDA0 { char pad[0x44]; int slot; };
struct Target_822CBDA0 { char pad[0x4c]; struct Desc_822CBDA0 *desc; char pad2[0x870]; void **table; };
struct Self_822CBDA0 { char pad[0x44]; unsigned int mode; int pad2[2]; unsigned char params[16]; };

extern int fn_8255E0B0(struct Target_822CBDA0 *target, int format, void *params);

void fn_822CBDA0(struct Self_822CBDA0 *self, struct Target_822CBDA0 *target)
{
    int format;

    if (target->desc == 0) {
        return;
    }
    if (target->table == 0) {
        return;
    }
    if (target->table[target->desc->slot + 0x20] == 0) {
        return;
    }
    format = 4;
    switch (self->mode) {
    case 0:
        format = 4;
        break;
    case 1:
        format = 0;
        break;
    case 2:
        format = 1;
        break;
    case 3:
        format = 0xd;
        break;
    case 4:
        format = 0xc;
        break;
    case 5:
        format = 0xf;
        break;
    case 6:
        format = 0xe;
        break;
    }
    fn_8255E0B0(target, format, self->params);
}
