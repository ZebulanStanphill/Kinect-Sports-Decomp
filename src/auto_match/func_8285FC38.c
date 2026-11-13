typedef struct Link_8285FC38 {
    char pad0[0x44];
    int a;                     /* 0x44 */
    int b;                     /* 0x48 */
} Link_8285FC38;

typedef struct Self_8285FC38 {
    char pad0[0x2c];
    int f2c;                   /* 0x2c */
    float f30;                 /* 0x30 */
    unsigned int *f34;         /* 0x34 */
    char pad38[0x44 - 0x38];
    Link_8285FC38 *link;       /* 0x44 */
} Self_8285FC38;

typedef struct State_8285FC38 {
    unsigned int *f0;          /* 0x00 */
    int arg;                   /* 0x04 */
    int f8;                    /* 0x08 */
    float fc;                  /* 0x0c */
    unsigned int sign;         /* 0x10 */
    char pad14[0x3c - 0x14];
    int f3c;                   /* 0x3c */
    int arg2;                  /* 0x40 */
    int a;                     /* 0x44 */
    int b;                     /* 0x48 */
    Link_8285FC38 *link;       /* 0x4c */
    char pad50[0x10];
} State_8285FC38;

extern State_8285FC38 lbl_832115D0;
extern int *fn_82859E28(Self_8285FC38 *self, int arg);
extern void fn_8285FBC0(Self_8285FC38 *self, int arg);

void fn_8285FC38(Self_8285FC38 *self, int arg, int arg2)
{
    State_8285FC38 *s;
    int *p;

    p = fn_82859E28(self, arg);
    s = &lbl_832115D0;
    s->f0 = self->f34;
    s->arg = arg;
    s->f8 = self->f2c;
    s->fc = self->f30;
    s->f3c = *p;
    s->sign = *self->f34 >> 31;
    s->arg2 = arg2;
    s->link = self->link;
    if (s->link != 0) {
        s->a = s->link->a;
        s->b = s->link->b;
    } else {
        s->a = 0;
        s->b = 0;
    }
    fn_8285FBC0(self, arg);
}
