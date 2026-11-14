typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef void (*Target_8232A6A0)(char *self, __vector4 v, float x, int a, int b, int e, int f, int g);

typedef struct Method_8232A6A0 {
    Target_8232A6A0 fn;
    int adjust;
} Method_8232A6A0;

typedef struct Delegate_8232A6A0 {
    int pad[2];
    Method_8232A6A0 method;
    char *object;
} Delegate_8232A6A0;

typedef struct Temp_8232A6A0 {
    int words[2];
} Temp_8232A6A0;

extern int fn_828B5580(Temp_8232A6A0 *tmp, int e);
extern void fn_828B55B0(int e);

void fn_8232A6A0(Delegate_8232A6A0 *self, __vector4 v, float x, int a, int b, int e, int f, int g)
{
    Method_8232A6A0 m = self->method;
    Temp_8232A6A0 tmp;

    m.fn(self->object + m.adjust, v, x, a, b, fn_828B5580(&tmp, e), f, g);
    fn_828B55B0(e);
}
