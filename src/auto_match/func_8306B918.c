typedef struct A_8306B918 { int v[3]; } A_8306B918;
typedef struct B_8306B918 { float v[4]; } B_8306B918;

typedef struct Obj_8306B918 {
    A_8306B918 a[6]; /* 0x00 */
    B_8306B918 b[6]; /* 0x48 */
} Obj_8306B918;

extern void fn_82810360(A_8306B918 *self, const A_8306B918 *other);
extern void fn_8281D340(B_8306B918 *self, const B_8306B918 *other);

void fn_8306B918(Obj_8306B918 *self, const Obj_8306B918 *other)
{
    int i;
    if (self != other) {
        for (i = 0; i < 6; i++)
            fn_82810360(&self->a[i], &other->a[i]);
        for (i = 0; i < 6; i++)
            fn_8281D340(&self->b[i], &other->b[i]);
    }
}
