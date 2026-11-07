typedef struct Sub_829BC5A8 {
    char pad0[0xc];
    void *callback;
    unsigned int count;
} Sub_829BC5A8;

typedef struct Obj_829BC5A8 {
    char pad0[0x50];
    int f50;
    char pad54[0x4c];
    int fA0;
    char padA4[0x10c];
    Sub_829BC5A8 *sub;
} Obj_829BC5A8;

extern int fn_829BBC60(Obj_829BC5A8 *self);
extern void fn_829BBAA8(void);
extern void fn_829BBE00(void);

void fn_829BC5A8(Obj_829BC5A8 *self)
{
    Sub_829BC5A8 *sub = self->sub;
    if (sub->count != 0) {
        if (self->f50 != 0 && fn_829BBC60(self) != 0)
            sub->callback = (void *)fn_829BBE00;
        else
            sub->callback = (void *)fn_829BBAA8;
    }
    self->fA0 = 0;
}
