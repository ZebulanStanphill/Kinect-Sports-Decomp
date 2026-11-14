typedef struct Obj_82677948 {
    char pad[0x1c0];
    int value;      /* 0x1c0 */
    int pad1c4;
    int mode;       /* 0x1c8 */
} Obj_82677948;

void fn_82677948(Obj_82677948 *self, int value, int unused, unsigned int kind)
{
    self->value = value;
    switch (kind) {
    case 0:
        self->mode = -1;
        break;
    case 1:
        self->mode = 1;
        break;
    case 2:
        self->mode = 6;
        break;
    }
}
