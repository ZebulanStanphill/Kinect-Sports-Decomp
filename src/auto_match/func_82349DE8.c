#include "xdk/vectorintrinsics.h"

typedef struct Settings_82349DE8 {
    float range;         /* 0x0 */
    float angle;         /* 0x4 */
    float distance;      /* 0x8 */
    float offset;        /* 0xc */
    unsigned char flagA; /* 0x10 */
    unsigned char flagB; /* 0x11 */
    unsigned char flagC; /* 0x12 */
    unsigned char flagD; /* 0x13 */
    unsigned char flagE; /* 0x14 */
    char pad15[0x3];
    float weightA; /* 0x18 */
    float biasA;   /* 0x1c */
    float weightB; /* 0x20 */
    float biasB;   /* 0x24 */
    float damping; /* 0x28 */
    char pad2C[0x4];
    __vector4 target; /* 0x30 */
    int count;        /* 0x40 */
    int index;        /* 0x44 */
    int mode;         /* 0x48 */
    char pad4C[0x4];
} Settings_82349DE8;

typedef struct Controller_82349DE8 {
    void *vt;                    /* 0x0 */
    int f4;                      /* 0x4 */
    int f8;                      /* 0x8 */
    void *fc;                    /* 0xc */
    Settings_82349DE8 *settings; /* 0x10 */
} Controller_82349DE8;

extern char lbl_821B1C18[];
extern Controller_82349DE8 *fn_82341008(Controller_82349DE8 *self, int a, void *b, int c);
extern void *fn_8265C9E0(int size);

static __forceinline Settings_82349DE8 *InitSettings(Settings_82349DE8 *settings)
{
    settings->count = 0;
    settings->index = 0;
    settings->mode = 2;
    settings->weightA = 0.5f;
    settings->flagA = 0;
    settings->flagB = 0;
    settings->biasA = 0.0f;
    settings->flagC = 0;
    settings->weightB = 0.5f;
    settings->flagD = 0;
    settings->biasB = 0.0f;
    settings->flagE = 0;
    settings->damping = 0.91f;
    settings->range = 30.0f;
    settings->angle = 45.0f;
    settings->distance = 20.0f;
    settings->offset = 0.0f;
    settings->target = __VMXGetReg(77);
    return settings;
}

Controller_82349DE8 *fn_82349DE8(Controller_82349DE8 *self, int a, void *b, int kind)
{
    Settings_82349DE8 *settings;

    fn_82341008(self, a, b, kind);
    self->vt = lbl_821B1C18;
    settings = (Settings_82349DE8 *)fn_8265C9E0(0x50);
    self->settings = settings != 0 ? InitSettings(settings) : 0;
    return self;
}
