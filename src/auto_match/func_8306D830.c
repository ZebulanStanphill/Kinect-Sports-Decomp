extern float fn_83075D60(void *s);
extern unsigned char fn_83075D58(void *s);

typedef struct Obj_8306D830 {
    char pad[0xa40];
    char sub[1];
} Obj_8306D830;

unsigned char fn_8306D830(Obj_8306D830 *self)
{
    void *s = self->sub;
    return fn_83075D60(s) < 0.4f || !fn_83075D58(s);
}
