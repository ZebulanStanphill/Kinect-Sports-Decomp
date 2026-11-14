#define __lwsync() __emit(0x7C2004AC)

typedef struct Desc_8267D608 {
    int a;     /* 0x00 */
    int b;     /* 0x04 */
    int c;     /* 0x08 */
    int d;     /* 0x0c */
    int arg;   /* 0x10 */
    int e;     /* 0x14 */
} Desc_8267D608;

struct Obj_8267D608;

typedef struct Vtbl_8267D608 {
    void *slots[5];
    void (*start)(struct Obj_8267D608 *self, int arg); /* 0x14 */
} Vtbl_8267D608;

typedef struct Obj_8267D608 {
    Vtbl_8267D608 *vt; /* 0x00 */
    char pad4[0xc];
    int a;             /* 0x10 */
    int b;             /* 0x14 */
    int f18;           /* 0x18 */
    int f1c;           /* 0x1c */
    int c;             /* 0x20 */
    int d;             /* 0x24 */
    int e;             /* 0x28 */
    int f2c;           /* 0x2c */
    int f30;           /* 0x30 */
} Obj_8267D608;

void fn_8267D608(Obj_8267D608 *self, Desc_8267D608 *desc)
{
    __lwsync();
    self->f18 = 0;
    self->f2c = 0;
    self->f30 = 0;
    __lwsync();
    self->f1c = 0;
    self->c = desc->c;
    self->d = desc->d;
    self->e = desc->e;
    self->a = desc->a;
    self->b = desc->b;
    if (desc->arg != 0)
        self->vt->start(self, desc->arg);
}
