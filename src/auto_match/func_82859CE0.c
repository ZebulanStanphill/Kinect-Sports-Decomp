extern void fn_8285A300(char *item, int a, int b);
extern char *lbl_8321132C[];
typedef struct { char pad[0x1c]; unsigned short ids[8]; } Obj_82859CE0;
void fn_82859CE0(Obj_82859CE0 *self, int a, int b)
{
    unsigned short *ids = self->ids;
    int i;
    for (i = 0; i < 8; i++) {
        if (ids[i] != 0) fn_8285A300(lbl_8321132C[1] + ids[i] * 0x2c, a, b);
    }
}
