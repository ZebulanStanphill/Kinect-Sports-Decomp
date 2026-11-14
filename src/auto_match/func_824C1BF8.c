typedef struct Obj_824C1BF8 {
    char name0[0x100];
    char name1[0x100];
    char name2[0x100];
    char name3[0x100];
    unsigned int slots[3];
    unsigned int f40c;
    unsigned int f410;
    unsigned int f414;
    unsigned int f418;
    unsigned int f41c;
    unsigned int f420;
    unsigned int f424;
} Obj_824C1BF8;

void fn_824C1BF8(Obj_824C1BF8 *self)
{
    unsigned int *p;

    self->name0[0] = 0;
    self->name1[0] = 0;
    self->name2[0] = 0;
    self->name3[0] = 0;
    for (p = self->slots; p != self->slots + 3; p++) {
        *p = 0;
    }
    self->f420 = 0;
    self->f40c = 0;
    self->f418 = 10;
    self->f410 = 4;
    self->f414 = 8;
    self->f41c = 10;
    self->f424 = 0;
}
