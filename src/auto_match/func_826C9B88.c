struct Obj_826C9B88;
typedef struct Msg_826C9B88 {
    int type;
    int a;
    short b;
    char c;
    char d;
    char e;
    char f;
} Msg_826C9B88;
typedef struct Dev_826C9B88 {
    char pad[0xb00];
    unsigned int pad0 : 2;
    unsigned int mode : 2;
} Dev_826C9B88;
typedef struct VT_826C9B88 {
    int pad[0x40 / 4];
    Dev_826C9B88 *(*f40)(struct Obj_826C9B88 *);
    int pad1[(0xe8 - 0x44) / 4];
    void (*fe8)(struct Obj_826C9B88 *, Msg_826C9B88 *);
} VT_826C9B88;
typedef struct Obj_826C9B88 {
    VT_826C9B88 *vt;
} Obj_826C9B88;
extern unsigned char fn_826C98F8(void);

void fn_826C9B88(Obj_826C9B88 *self)
{
    if (fn_826C98F8() != 0) {
        Dev_826C9B88 *dev = self->vt->f40(self);
        unsigned int mode = dev->mode;
        if (mode == 3 || (int)mode != 1) {
            Msg_826C9B88 m;
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
