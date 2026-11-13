typedef void (*Target_8232A7E0)(char *self, int a, int b, int c, int d, int e, int f, float x, int g);

typedef struct Method_8232A7E0 {
    Target_8232A7E0 fn;
    int adjust;
} Method_8232A7E0;

typedef struct Delegate_8232A7E0 {
    int pad[2];
    Method_8232A7E0 method;
    char *object;
} Delegate_8232A7E0;

typedef struct Temp_8232A7E0 {
    int words[2];
} Temp_8232A7E0;

extern int fn_828B5580(Temp_8232A7E0 *tmp, int e);
extern void fn_828B55B0(int e);

void fn_8232A7E0(Delegate_8232A7E0 *self, int a, int b, int c, int d, int e, int f, float x, int g)
{
    Method_8232A7E0 m = self->method;
    Temp_8232A7E0 tmp;

    m.fn(self->object + m.adjust, a, b, c, d, fn_828B5580(&tmp, e), f, x, g);
    fn_828B55B0(e);
}
