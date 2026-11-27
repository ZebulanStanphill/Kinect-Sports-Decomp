#include <string.h>

typedef struct Blender_827F5458 Blender_827F5458;
typedef void (*BlendMethod_827F5458)(Blender_827F5458 *self);

typedef struct BlenderVtbl_827F5458 {
    void *slots00[5];
    BlendMethod_827F5458 blend[18]; /* 0x14 .. 0x58 */
} BlenderVtbl_827F5458;

struct Blender_827F5458 {
    BlenderVtbl_827F5458 *vt;
    char pad04[0x1c];
    unsigned short mode; /* 0x20 */
    char pad22[0x1a];
    int additive; /* 0x3c */
    void *mask;   /* 0x40 */
    char pad44[0x98];
    unsigned char flags; /* 0xdc; 0x40 = weighted */
};

extern unsigned short fn_827F3C30(Blender_827F5458 *self);
extern void *fn_827F3C48(Blender_827F5458 *self, unsigned int index);
extern void *fn_827F3BD8(void *source);
extern void *fn_827F3BA8(Blender_827F5458 *self);
extern unsigned int fn_827F3A60(void *source);
extern unsigned int fn_827F3EB0(Blender_827F5458 *self);
extern void *fn_827F3C28(void *source);
extern int fn_827F69E0(void *track, unsigned int index);

static __forceinline void SetWeighted(Blender_827F5458 *self, unsigned char weighted)
{
    self->flags = (self->flags & ~0x40) | (weighted << 6);
}

void fn_827F5458(Blender_827F5458 *self)
{
    if (fn_827F3C30(self) == 1) {
        if (fn_827F3BA8(self) != fn_827F3BD8(fn_827F3C48(self, 0))) {
            memcpy(fn_827F3BA8(self), fn_827F3BD8(fn_827F3C48(self, 0)), fn_827F3A60(fn_827F3C48(self, 0)));
        }
        return;
    }
    if (fn_827F3EB0(self) != 0) {
        SetWeighted(self, fn_827F69E0(fn_827F3C28(fn_827F3C48(self, 1)), 0) != 0);
    }
    switch (self->mode) {
    case 5:
        if (self->additive == 0) {
            self->vt->blend[16](self);
        } else {
            self->vt->blend[17](self);
        }
        break;
    case 4:
        if (self->additive == 0) {
            self->vt->blend[14](self);
        } else {
            self->vt->blend[15](self);
        }
        break;
    case 3:
        if (self->flags & 0x40) {
            if (self->additive == 0) {
                self->vt->blend[6](self);
            } else {
                self->vt->blend[7](self);
            }
        } else {
            if (self->additive == 0) {
                self->vt->blend[12](self);
            } else {
                self->vt->blend[13](self);
            }
        }
        break;
    case 2:
        if (self->flags & 0x40) {
            if (self->additive == 0) {
                self->vt->blend[8](self);
            } else {
                self->vt->blend[9](self);
            }
        } else {
            if (self->additive == 0) {
                self->vt->blend[10](self);
            } else {
                self->vt->blend[11](self);
            }
        }
        break;
    case 1:
        if (self->mask != 0) {
            if (self->additive == 0) {
                self->vt->blend[4](self);
            } else {
                self->vt->blend[5](self);
            }
        } else {
            if (self->additive == 0) {
                self->vt->blend[6](self);
            } else {
                self->vt->blend[7](self);
            }
        }
        break;
    case 0:
        if (self->mask != 0) {
            if (self->additive == 0) {
                self->vt->blend[0](self);
            } else {
                self->vt->blend[1](self);
            }
        } else {
            if (self->additive == 0) {
                self->vt->blend[2](self);
            } else {
                self->vt->blend[3](self);
            }
        }
        break;
    }
}
