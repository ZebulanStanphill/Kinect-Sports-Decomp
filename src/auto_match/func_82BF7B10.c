typedef struct Info_82BF7B10 {
    int pad0;
    int pad4;
    unsigned int kind;
} Info_82BF7B10;

typedef struct Obj_82BF7B10 {
    char pad0[0x10];
    Info_82BF7B10 *info;
} Obj_82BF7B10;

int fn_82BF7B10(Obj_82BF7B10 *self)
{
    if (self->info == 0)
        return 1;
    switch (self->info->kind) {
    case 0:
        return 0;
    case 1:
        break;
    case 2:
        return 1;
    default:
        return 0;
    }
    return 1;
}
