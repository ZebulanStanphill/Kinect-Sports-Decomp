typedef struct Obj_8304AA48 {
    char pad0[0x28];
    int handle;          /* 0x28 */
    char pad2c[0x60 - 0x2C];
    int value;           /* 0x60 */
} Obj_8304AA48;

extern int fn_83049D68(Obj_8304AA48 *self, int a, int b);
extern int fn_8307DE78(int h);
extern int fn_8307E060(int h);
extern int fn_8307E600(int h, int z, int a, int b);
extern int fn_8307E6E0(int h);

int fn_8304AA48(Obj_8304AA48 *self, int param_2, int param_3)
{
    int *ph;
    int r;

    if (self != 0) {
        ph = &self->handle;
    } else {
        ph = 0;
    }
    fn_8307DE78(*ph);
    fn_8307E6E0(*ph);
    self->value = param_2;
    fn_83049D68(self, param_3, param_2);
    r = fn_8307E600(self->handle, 0, param_2, param_3);
    fn_8307E060(*ph);
    return ((r == 0) ^ 1) + 1;
}
