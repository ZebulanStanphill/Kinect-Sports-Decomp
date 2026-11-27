#include "xdk/vectorintrinsics.h"

typedef struct Name_82282360 {
    int a;
    int b;
} Name_82282360;

typedef struct Ramp_82282360 {
    char pad0[0x2c];
    void (*callback)(void *); /* 0x2C */
    void *callbackData;       /* 0x30 */
    int callbackKind;         /* 0x34 */
} Ramp_82282360;

typedef struct Icon_82282360 {
    void *texture; /* 0x00 */
    char pad4[0xac];
    Ramp_82282360 *ramp; /* 0xB0 */
    void *source;        /* 0xB4 */
    char padb8[0x14];
    int fcc;          /* 0xCC */
    int fd0;          /* 0xD0 */
    int fd4;          /* 0xD4 */
    int fd8;          /* 0xD8 */
    unsigned int fdc; /* 0xDC */
} Icon_82282360;

extern void *fn_8265C9E0(unsigned int size);
extern Ramp_82282360 *fn_82278260(void *mem, float width, float height);
extern void fn_822824E8(Icon_82282360 *self, int arg, float scale, __vector4 colour);
extern void fn_82520158(const char *name, Name_82282360 *out, int flags);
extern void *fn_8251F720(Name_82282360 *name, int flags);
extern void fn_822828E0(void *data);

Icon_82282360 *fn_82282360(Icon_82282360 *self, float width, float height, void *source, int arg, float scale,
                           __vector4 colour)
{
    void *mem;
    Ramp_82282360 *ramp;
    Name_82282360 name;

    self->source = 0;
    self->fcc = -1;
    self->fd0 = -1;
    self->fd4 = 0;
    self->fd8 = 0;
    self->fdc = 0xFFFFFFFF;
    mem = fn_8265C9E0(0x3c);
    if (mem != 0) {
        ramp = fn_82278260(mem, width, height);
    } else {
        ramp = 0;
    }
    self->ramp = ramp;
    if (source != 0) {
        self->source = source;
        fn_822824E8(self, arg, scale, colour);
    }
    fn_82520158("IconRampTexture", &name, 0);
    self->texture = fn_8251F720(&name, 0);
    ramp = self->ramp;
    ramp->callback = fn_822828E0;
    ramp->callbackData = self;
    ramp->callbackKind = 2;
    return self;
}
