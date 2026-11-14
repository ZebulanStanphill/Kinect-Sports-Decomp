#include <string.h>

typedef struct Desc_82BE4CC8 {
    int f0;                     /* 0x00 */
    int f4;                     /* 0x04 */
    int f8;                     /* 0x08 */
    int fC;                     /* 0x0c */
    unsigned short f10;         /* 0x10 */
    unsigned short f12;         /* 0x12 */
    int f14;                    /* 0x14 */
    float f18;                  /* 0x18 */
    int f1C;                    /* 0x1c */
    int f20;                    /* 0x20 */
} Desc_82BE4CC8;

typedef struct Self_82BE4CC8 {
    char pad0[0xd0];
    int active;                 /* 0xd0 */
    int fD4;                    /* 0xd4 */
    float fD8;                  /* 0xd8 */
    int fDC;                    /* 0xdc */
} Self_82BE4CC8;

extern void fn_82BE4690(Self_82BE4CC8 *self);
extern unsigned short fn_82BE9168(void);
extern unsigned short fn_82BE9140(void);
extern void fn_82BE5050(Self_82BE4CC8 *self, const Desc_82BE4CC8 *desc);

void fn_82BE4CC8(Self_82BE4CC8 *self)
{
    fn_82BE4690(self);
    if (self->active != 0) {
        Desc_82BE4CC8 desc;
        memset(&desc, 0, sizeof(desc));
        desc.f4 = 0;
        desc.f0 = 0;
        desc.f8 = 1;
        desc.fC = self->fD4;
        desc.f14 = self->fDC;
        desc.f18 = self->fD8;
        desc.f12 = fn_82BE9168();
        desc.f10 = fn_82BE9140();
        fn_82BE5050(self, &desc);
    }
}
