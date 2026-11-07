extern unsigned char *fn_8225F670(void);
extern int fn_8225FDE0(int a, int b);
extern unsigned char fn_82E1CAD0(int a);
extern void fn_82E1CC60(const char *name, float value);
extern void fn_82E1CB08(const char *a, const char *b, int c);
extern void fn_82E1CCA8(void);
extern int fn_82281530(void *p);
extern void fn_82281868(void *p, int a, int b);
extern void fn_822819E0(void *p, int a);
extern void fn_82480FA0(void *p);

typedef struct Inner_82482FE8 {
    int pad0;
    int pad4;
    int f8;
    int padC;
    unsigned int f10;
} Inner_82482FE8;

typedef struct Obj_82482FE8 {
    char pad0[0x14];
    Inner_82482FE8 *inner;   /* 0x14 */
    char pad18[0x48 - 0x18];
    int f48;                 /* 0x48 */
    int f4c;                 /* 0x4c */
    char pad50[0x58 - 0x50];
    int state;               /* 0x58 */
    char pad5c[0x100 - 0x5c];
    int f100;                /* 0x100 */
    float f104;              /* 0x104 */
} Obj_82482FE8;

void fn_82482FE8(Obj_82482FE8 *self)
{
    Inner_82482FE8 *in;
    int v;

    if (self->state == 1) {
        float t = self->f104;
        if (*fn_8225F670() != 0) {
            if (fn_8225FDE0(0x6a, 1) == 0 && fn_82E1CAD0(0x6a) != 0) {
                fn_82E1CC60("TimeSinceMenuOpened", t);
                fn_82E1CB08("Menu", "ReviewFlow", 0);
                fn_82E1CCA8();
            }
        }
    }
    if (self->state == 5) {
        self->f4c = 1;
    } else if (self->state != 1) {
        fn_82480FA0(self);
    } else {
        if (fn_82281530(self->inner) == 0) {
            in = self->inner;
            v = self->f48 + 4;
            if (in->f10 != 0) {
                fn_82281868(in, v, 0);
            } else if (in->f8 != 0) {
                fn_822819E0(in, v);
            }
            self->f100 = 1;
        }
    }
}
