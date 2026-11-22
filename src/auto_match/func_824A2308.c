typedef struct Obj_824A2308 {
    void *vtable; /* 0x00 */
    int f4;       /* 0x04 */
    int f8;       /* 0x08 */
    float fc;     /* 0x0C */
    float f10;    /* 0x10 */
    float f14;    /* 0x14 */
    int f18;      /* 0x18 */
} Obj_824A2308;

extern int fn_82F4FEB8(void);
extern void fn_82F51A50(Obj_824A2308 *self);
extern void fn_82F520B0(Obj_824A2308 *self, int v, int flags);
extern char lbl_821BF554[];

Obj_824A2308 *fn_824A2308(Obj_824A2308 *self, int value)
{
    fn_82F51A50(self);
    self->f8 = value;
    self->f18 = 0;
    self->vtable = lbl_821BF554;
    self->fc = 0.0f;
    self->f10 = 1.3089969f;
    self->f14 = 1.0f;
    fn_82F520B0(self, fn_82F4FEB8(), 0);
    return self;
}
