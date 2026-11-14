typedef struct Mode_82360C90 {
    char pad0[0x40];
    unsigned int kind;          /* 0x40 */
} Mode_82360C90;

typedef struct Obj_82360C90 {
    char pad0[0xa0];
    Mode_82360C90 *mode;        /* 0x0a0 */
    char padA4[0x2b20 - 0xa4];
    void *player;               /* 0x2b20 */
} Obj_82360C90;

extern void fn_82359108(Obj_82360C90 *self, void *item, int b, float f, void *arg);
extern void fn_82359200(Obj_82360C90 *self, float f, void *arg);
extern void *fn_82417F58(void *player);

void fn_82360C90(Obj_82360C90 *self, void *arg)
{
    if ((int)self->mode != 0 && self->mode->kind == 1) {
        fn_82359200(self, 0.0f, arg);
    } else {
        fn_82359108(self, fn_82417F58(self->player), 0, 0.0f, arg);
    }
}
