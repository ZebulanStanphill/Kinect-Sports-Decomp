typedef struct Obj_823AAF00 {
    int f00;
    int active;         /* 0x04 */
    int f08;
    int index;          /* 0x0c */
    int f10;
    int value;          /* 0x14 */
    int serial;         /* 0x18 */
    int f1c;
    int f20;            /* 0x20 */
    int f24[3];
    int f30;            /* 0x30 */
    int f34;            /* 0x34 */
    int f38;            /* 0x38 */
    int f3c;            /* 0x3c */
    int f40;            /* 0x40 */
    int f44;            /* 0x44 */
    int f48;            /* 0x48 */
    int f4c;            /* 0x4c */
    int f50;            /* 0x50 */
    int f54;            /* 0x54 */
    float f58;          /* 0x58 */
    int f5c[2];
    int state[2];       /* 0x64 */
    int other[2];       /* 0x6c */
} Obj_823AAF00;

void fn_823AAF00(Obj_823AAF00 *self, int unused, int index, int value)
{
    self->state[index] = value;
    self->f58 = 0.0f;
    self->index = index;
    self->value = value;
    self->active = 1;
    self->f20 = 0;
    self->f30 = 0;
    self->f34 = 0;
    self->f38 = 0;
    self->f40 = 0;
    self->f48 = 0;
    self->f50 = 0;
    self->f3c = 8;
    self->f44 = 8;
    self->f4c = 8;
    self->f54 = 9;
    self->serial++;
    self->other[index] = value ^ 1;
}
