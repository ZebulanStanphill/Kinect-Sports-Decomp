typedef struct A_8306B980 { float v[3]; } A_8306B980;
typedef struct B_8306B980 { float v[4]; } B_8306B980;

typedef struct Obj_8306B980 {
    A_8306B980 a[6]; /* 0x00 */
    B_8306B980 b[6]; /* 0x48 */
} Obj_8306B980;

extern int fn_82810380(const A_8306B980 *self, const A_8306B980 *other, float tolerance);
extern int fn_8281D3B0(const B_8306B980 *self, const B_8306B980 *other, float tolerance);

int fn_8306B980(const Obj_8306B980 *self, const Obj_8306B980 *other, float tolerance)
{
    int result = 1;
    int i;
    if (self != other) {
        for (i = 0; i < 6; i++)
            result &= (fn_82810380(&self->a[i], &other->a[i], tolerance));
        for (i = 0; i < 6; i++)
            result &= (fn_8281D3B0(&self->b[i], &other->b[i], tolerance));
    }
    return result;
}
