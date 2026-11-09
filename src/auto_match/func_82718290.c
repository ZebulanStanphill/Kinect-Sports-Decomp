struct Obj_82718290;
typedef struct Msg_82718290 {
    int type;
    int a;
    short b;
    char c;
    char d;
    char e;
    char f;
} Msg_82718290;
typedef struct Dev_82718290 {
    char pad[0xb00];
    unsigned int pad0 : 2;
    unsigned int mode : 2;
} Dev_82718290;
typedef struct VT_82718290 {
    int pad[0x40 / 4];
    Dev_82718290 *(*f40)(struct Obj_82718290 *);
    int pad1[(0xe8 - 0x44) / 4];
    void (*fe8)(struct Obj_82718290 *, Msg_82718290 *);
} VT_82718290;
typedef struct Obj_82718290 {
    VT_82718290 *vt;
} Obj_82718290;

void fn_82718290(Obj_82718290 *self)
{
    Dev_82718290 *dev = self->vt->f40(self);
    if (dev != 0) {
        unsigned int mode = dev->mode;
        if (mode == 3 || (int)mode != 1) {
            Msg_82718290 m;
            m.a = 0;
            m.b = 0;
            m.c = 0;
            m.e = 0;
            m.f = 0;
            m.type = 0x2000;
            m.d = -1;
            self->vt->fe8(self, &m);
        }
    }
}
