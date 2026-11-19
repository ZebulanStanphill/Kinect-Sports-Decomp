typedef struct Desc_82960270 {
    unsigned int flags; /* 0x00 */
    int pad4;           /* 0x04 */
    char *operands;     /* 0x08 */
    int fieldC;         /* 0x0c */
    int field10;        /* 0x10 */
} Desc_82960270;

typedef struct Obj_82960270 Obj_82960270;

typedef struct Vtbl_82960270 {
    char pad[0x154];
    int (*Fill)(Obj_82960270 *self, int source, int *out, unsigned int count, int a, int b);
} Vtbl_82960270;

struct Obj_82960270 {
    Vtbl_82960270 *vt; /* 0x000 */
    char pad4[0x100 - 0x4];
    int source;          /* 0x100 */
    Desc_82960270 *desc; /* 0x104 */
};

extern int fn_8295D318(Obj_82960270 *self, int mode, int a, int b, void *list0, void *list1, void *list2,
                       unsigned int count, int c, int d, int e, int f);
extern int fn_8295F950(Obj_82960270 *self, int kind, int flag);

int fn_82960270(Obj_82960270 *self)
{
    int buf[2];
    int hr;
    int kind;
    char *firstOperands;
    char *secondOperands;

    switch (self->desc->flags & 0xfffff) {
    case 1:
        kind = 5;
        break;
    case 3:
        kind = 8;
        break;
    case 4:
        kind = 9;
        break;
    default:
        hr = self->vt->Fill(self, self->source, buf, 2, 0, 0);
        if (hr < 0) {
            goto fail;
        }
        secondOperands = self->desc->operands;
        firstOperands = self->desc->operands;
        hr = fn_8295D318(self, 5, (int)buf, 2, firstOperands, secondOperands + 8, 0, 2, 0, 0, 0, 0);
        if (hr < 0) {
            goto fail;
        }
        hr = fn_8295D318(self, 2, self->desc->field10, self->desc->fieldC, buf, buf + 1, 0, 1, 0, 0, 0, 0);
        if (hr < 0) {
            goto fail;
        }
        return 0;
    fail:
        return hr;
    }
    return fn_8295F950(self, kind, 0);
}
