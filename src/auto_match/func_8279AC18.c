typedef struct {
    int x;
    int y;
    int start;
    int a;
    int b;
    int count;
    unsigned int color;
    unsigned int end;
    int c;
    unsigned char depth;
} Params_8279AC18;

typedef struct {
    char pad0[0x14];
    void *target;
} Obj_8279AC18;

extern void *fn_827AEE00(void *target, int index);
extern void fn_827AFE68(void *target, Params_8279AC18 *params);

void fn_8279AC18(Obj_8279AC18 *self)
{
    Params_8279AC18 params;

    if (self->target != 0) {
        if (fn_827AEE00(self->target, 0x7fffffff) == 0) {
            params.count = 0x7fffffff;
            params.start = -1;
            params.a = 0;
            params.b = 0;
            params.c = 0;
            params.x = 0;
            params.y = 0;
            params.color = 0xff000000;
            params.depth = 0x18;
            params.end = 0xffffffff;
            fn_827AFE68(self->target, &params);
        }
    }
}
