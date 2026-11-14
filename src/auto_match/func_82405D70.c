typedef struct Ctx_82405D70 {
    char pad0[0x84c];
    int id;
} Ctx_82405D70;

typedef struct Self_82405D70 {
    char pad0[0x3c];
    unsigned int count;
    char pad40[4];
    float time;
    int timer;
    char pad4c[0x88 - 0x4c];
    int handle;
    char pad8c[0xa0 - 0x8c];
    Ctx_82405D70 *ctx;
} Self_82405D70;

extern int fn_82535298(int *h, int id, void *a, void *b);
extern void fn_82536288(int *h);
extern void fn_82405638(Self_82405D70 *self, int state);
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
void fn_82405D70(Self_82405D70 *self)
{
    int id;
    self->timer = 0;
    self->count--;
    self->time = 0.0f;
    id = self->ctx->id;
    {
        int h;
        { int *hp = &self->handle; h = *hp; }
        h = fn_82535298(&h, id, lbl_83296BC0, lbl_83296BD0);
        fn_82536288(&h);
        if (self->count == 0)
            fn_82405638(self, 7);
        else
            fn_82405638(self, 6);
    }
}
