typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct {
    char pad0[0xe8];
    unsigned char motionType;
} Body_8253ED48;

typedef struct {
    char pad0[0x7c0];
    Body_8253ED48 *body;
    char pad7C4[0x7d8 - 0x7c4];
    unsigned int frozen;
    char pad7DC[0x7e0 - 0x7dc];
    int savedMotionType;
} Object_8253ED48;

extern void fn_82D8B6C8(Body_8253ED48 *, int, int, int);
extern void fn_822E83E0(Body_8253ED48 *, const __vector4 *);
extern void fn_8240DEC0(Body_8253ED48 *, const __vector4 *);

void fn_8253ED48(Object_8253ED48 *self)
{
    Body_8253ED48 *body = self->body;
    int type;
    __vector4 linear;
    __vector4 angular;

    if (body != 0) {
        type = body->motionType;
        if (self->frozen != 0) {
            if (type != 5 && type != 4) {
                self->savedMotionType = type;
                fn_82D8B6C8(body, 4, 1, 0);
                linear = __VMXGetReg(77);
                fn_822E83E0(body, &linear);
                angular = __VMXGetReg(77);
                fn_8240DEC0(body, &angular);
            }
        } else {
            int saved = self->savedMotionType;
            int ok;
            if (saved == 4 || saved == 0)
                ok = 0;
            else
                ok = 1;
            if (type == 4 && ok)
                fn_82D8B6C8(body, saved, 1, 0);
        }
    }
}
