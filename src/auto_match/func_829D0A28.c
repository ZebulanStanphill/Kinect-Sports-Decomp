#define __sync() __emit(0x7C0004AC)

typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;

typedef struct LockedRect_828518B8 {
    int Pitch;
    void *pBits;
} LockedRect_828518B8;

typedef struct Frame_829D0A28 {
    char pad0[0x8];
    unsigned __int64 time; /* 0x8 */
    int index;             /* 0x10 */
    int f14;               /* 0x14 */
    int f18;               /* 0x18 */
    char pad1c[0x4];
    int f20; /* 0x20 */
    char pad24[0xc];
    char texture[0x34]; /* 0x30 */
} Frame_829D0A28;

typedef struct Output_829D0A28 {
    char pad0[0x8];
    unsigned __int64 time; /* 0x8 */
    int index;             /* 0x10 */
    int f14;               /* 0x14 */
    int f18;               /* 0x18 */
    char pad1c[0x4];
    int f20; /* 0x20 */
    char pad24[0x40];
    unsigned char *pixels; /* 0x64 */
} Output_829D0A28;

typedef struct Source_829D0A28 {
    int index; /* 0x0 */
    int pad4;
    unsigned __int64 time; /* 0x8 */
} Source_829D0A28;

typedef struct Globals_829D0A28 {
    unsigned int flags; /* 0x0 */
    char pad4[0xa3c];
    int forceCopy; /* 0xa40 */
    char pada44[0x1728];
    Output_829D0A28 *output; /* 0x216c */
    int pad2170;
    int mode; /* 0x2174 */
} Globals_829D0A28;

extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern RTL_CRITICAL_SECTION lbl_8315C428;
extern Globals_829D0A28 lbl_83215000;
extern int fn_8263C7D8(void *tex, int level, LockedRect_828518B8 *lr, int rect, int flags);
extern int fn_8263C620(void *tex, int level);
extern void fn_82A1DDC0(void *dst, const void *src, unsigned int size);
extern void fn_829D08F0(int idx, Frame_829D0A28 *frame, int flag);

void fn_829D0A28(Source_829D0A28 *source, Frame_829D0A28 *frame)
{
    LockedRect_828518B8 locked;
    unsigned char *dst;
    unsigned char *src;
    int y;

    RtlEnterCriticalSection(&lbl_8315C428);
    if (frame != 0) {
        if (lbl_83215000.mode == 1 &&
            (lbl_83215000.forceCopy != 0 || (lbl_83215000.flags & 0x80000000) == 0)) {
            lbl_83215000.output->time = source->time;
            lbl_83215000.output->index = source->index;
            lbl_83215000.output->f18 = frame->f18;
            lbl_83215000.output->f14 = frame->f14;
            lbl_83215000.output->f20 = frame->f20;
            fn_8263C7D8(frame->texture, 0, &locked, 0, 0x10);
            dst = lbl_83215000.output->pixels;
            src = (unsigned char *)locked.pBits;
            for (y = 0; y < 240; y++) {
                fn_82A1DDC0(dst, src, 0x280);
                dst += 0x300;
                src += locked.Pitch & ~1;
            }
            fn_8263C620(frame->texture, 0);
        }
        frame->time = source->time;
        frame->index = source->index;
        fn_829D08F0(0, frame, 0);
        __sync();
    }
    RtlLeaveCriticalSection(&lbl_8315C428);
}
