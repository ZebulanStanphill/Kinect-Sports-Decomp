typedef struct Obj_82619258 {
    int unk0;
    int unk4;
    float x8;    /* 0x08 */
    float xc;    /* 0x0c */
} Obj_82619258;

extern int fn_82591730(Obj_82619258 *self, int param, unsigned int value);

int fn_82619258(Obj_82619258 *self, int param, unsigned int value)
{
    switch (param) {
    case 2:
        self->x8 = *(float *)&value;
        return 1;
    case 3:
        self->xc = *(float *)&value;
        return 1;
    }
    return fn_82591730(self, param, value);
}
