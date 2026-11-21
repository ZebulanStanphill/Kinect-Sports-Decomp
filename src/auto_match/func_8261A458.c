typedef struct Obj_8261A458 {
    int unk0;
    int unk4;
    int unk8;
    unsigned char flagC; /* 0x0c */
} Obj_8261A458;

extern int fn_82591730(Obj_8261A458 *self, int param, unsigned int value);

int fn_8261A458(Obj_8261A458 *self, int param, unsigned int value)
{
    if (param != 0x16) {
        return fn_82591730(self, param, value);
    }
    self->flagC = 1;
    return 0;
}
