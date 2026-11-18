typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Target_8233DD28 {
    char pad00[0x24];
    int active; /* 0x24 */
    char pad28[0x58];
    __vector4 position; /* 0x80 */
    __vector4 rotation; /* 0x90 */
    char padA0[0x40];
    char state[0x10]; /* 0xe0 */
} Target_8233DD28;

typedef struct Obj_8233DD28 Obj_8233DD28;

typedef struct ObjVt_8233DD28 {
    void *f0;
    void *f4;
    char *(*getState)(Obj_8233DD28 *self); /* 0x8 */
} ObjVt_8233DD28;

struct Obj_8233DD28 {
    ObjVt_8233DD28 *vt;
    char pad[0xb8];
    Target_8233DD28 *target; /* 0xbc */
};

typedef struct Writer_8233DD28 {
    int h[4];
    unsigned char *buf; /* 0x10 */
    int n;              /* 0x14 */
    void *p;            /* 0x18 */
    int q;              /* 0x1c */
    int r;              /* 0x20 */
} Writer_8233DD28;

extern unsigned char fn_8288B760(Obj_8233DD28 *self);
extern void fn_822CB140(void *dst, __vector4 *value);
extern void fn_822CB0A0(void *dst, __vector4 *value);
extern void fn_828E9D28(Writer_8233DD28 *writer, unsigned char *buf, int size);
extern void fn_8233F2E0(Writer_8233DD28 *writer, void *state);
extern void fn_82248CC8(void *dst, unsigned char *data);
extern void fn_8265CA20(void *p);

void fn_8233DD28(Obj_8233DD28 *self)
{
    Target_8233DD28 *target = self->target;
    if (target != 0) {
        if (fn_8288B760(self) && target->active != 0) {
            __vector4 v;
            char *(*get)(Obj_8233DD28 *) = self->vt->getState;
            char *output;
            v = target->position;
            fn_822CB140(get(self) + 0x144, &v);
            get = self->vt->getState;
            v = target->rotation;
            fn_822CB0A0(get(self) + 0xf0, &v);
            output = self->vt->getState(self) + 0x198;
            {
                unsigned char data[4] = {0};
                Writer_8233DD28 writer;
                writer.p = 0;
                writer.q = 0;
                writer.r = 0;
                writer.buf = data;
                writer.n = 4;
                fn_828E9D28(&writer, data, 4);
                fn_8233F2E0(&writer, target->state);
                fn_82248CC8(output, data);
                if (writer.p != 0) {
                    fn_8265CA20(writer.p);
                }
            }
        }
    }
}
