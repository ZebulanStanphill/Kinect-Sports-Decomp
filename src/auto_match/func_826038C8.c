extern void fn_82CED628(void *p, const char *s);
extern void fn_82D82E28(int a, void *b);
extern void fn_82D85148(int a, void *b, int c, int d);
extern void fn_82D89BD8(void *p);

typedef struct {
    char pad0[8];
    int h8;
} Sub140;

typedef struct {
    char pad0[8];
    int h8;
    char padC[0x2c - 0xc];
    int v2C;
} Sub18;

typedef struct {
    char pad0[0x14];
    char f14[4];
    Sub18 *p18;
    char pad1C[0x104 - 0x1c];
    int f104;
    char pad108[0x114 - 0x108];
    int f114;
    char pad118[4];
    int f11C;
    int f120;
    char pad124[0x140 - 0x124];
    Sub140 *p140;
} Obj;

void fn_826038C8(Obj *self)
{
    self->f120 = 0;
    self->f104 = 1;
    if (self->f114 != 0) {
        Sub140 *s = self->p140;
        if (s->h8 != 0) {
            fn_82D82E28(s->h8, s);
        }
        self->f114 = 0;
        self->p18->v2C = self->f11C;
        fn_82D85148(self->p18->h8, self->p18, 0, 1);
        fn_82D89BD8(self->p18);
    }
    fn_82CED628(self->f14, "Actuator (active)");
}
