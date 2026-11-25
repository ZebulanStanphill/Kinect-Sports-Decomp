typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Tracker_829F7980 {
    unsigned int enabled; /* 0x00000 */
    char pad4[0x12c1c];
    __vector4 floor; /* 0x12C20 */
    __vector4 up;    /* 0x12C30 */
    float scaleX;    /* 0x12C40 */
    float scaleY;    /* 0x12C44 */
} Tracker_829F7980;

extern Tracker_829F7980 *lbl_83218C44;
extern void *fn_829F5368(unsigned int size);
extern void fn_829F5370(void *memory);
extern Tracker_829F7980 *fn_829F6FE0(void *memory);
extern void fn_829F65B8(Tracker_829F7980 *tracker);
extern void fn_829F6608(Tracker_829F7980 *tracker);
extern int fn_829F67E0(Tracker_829F7980 *tracker);
extern void fn_829F77B0(Tracker_829F7980 *tracker, void *out);

int fn_829F7980(unsigned int enabled, __vector4 floor, const __vector4 *up, float scaleX, float scaleY,
                int unused, void *out)
{
    Tracker_829F7980 *tracker;
    void *memory;

    if (enabled == 0) {
        tracker = lbl_83218C44;
        lbl_83218C44 = 0;
        if (tracker != 0) {
            fn_829F65B8(tracker);
            fn_829F5370(tracker);
        }
    } else {
        if (lbl_83218C44 == 0) {
            memory = fn_829F5368(0x1a960);
            lbl_83218C44 = memory != 0 ? fn_829F6FE0(memory) : 0;
            if (lbl_83218C44 == 0) {
                return 8;
            }
        }
        lbl_83218C44->enabled = enabled;
        lbl_83218C44->floor = floor;
        lbl_83218C44->up = *up;
        lbl_83218C44->scaleX = scaleX;
        lbl_83218C44->scaleY = scaleY;
        fn_829F6608(lbl_83218C44);
        if (fn_829F67E0(lbl_83218C44) != 0) {
            fn_829F77B0(lbl_83218C44, out);
        }
    }
    return 0;
}
