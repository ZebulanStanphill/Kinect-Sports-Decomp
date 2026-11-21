typedef struct Obj_8261AC20 {
    char pad0[0x1d];
    unsigned char enabled; /* 0x1d */
} Obj_8261AC20;

extern int fn_82591730(Obj_8261AC20 *self, int param, unsigned int value);

int fn_8261AC20(Obj_8261AC20 *self, int param, unsigned int value)
{
    if (param != 0) {
        return fn_82591730(self, param, value);
    }
    self->enabled = value != 0;
    return 1;
}
