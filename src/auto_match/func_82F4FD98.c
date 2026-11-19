typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Vec_82F4FD98 {
    __vector4 v;
} Vec_82F4FD98;

typedef struct Frames_82F4FD98 {
    char pad0[0x60];
    char current[0x7f0];  /* 0x60 */
    char previous[0x7f0]; /* 0x850 */
} Frames_82F4FD98;

typedef struct Tracker_82F4FD98 {
    char pad0[0xcf0];
    Frames_82F4FD98 *frames; /* 0xcf0 */
} Tracker_82F4FD98;

extern double lbl_82165A98;

extern __int64 fn_82F538F0(void *frame);
extern float fn_82F593F8(float value, float low, float high);
extern Vec_82F4FD98 fn_82F538A0(void *joints, int i);
extern Vec_82F4FD98 fn_82F538B0(void *joints, int i);
extern __vector4 fn_8306ED30(__vector4 a, __vector4 b);
extern __vector4 fn_82F534F8(__vector4 v, float scale);
extern void fn_82F53928(void *joints, int i, __vector4 v);

float fn_82F4FD98(Tracker_82F4FD98 *tracker, void *velocities)
{
    __int64 elapsed;
    float seconds;
    float inverse;
    int i;

    elapsed = fn_82F538F0(tracker->frames->current);
    elapsed = elapsed - fn_82F538F0(tracker->frames->previous);
    seconds = fn_82F593F8((float)(elapsed * lbl_82165A98), 0.01f, 1.0f);
    inverse = 1.0f / seconds;
    i = 0;
    do {
        fn_82F53928(velocities, i,
                    fn_8306ED30(fn_82F538A0(tracker->frames->current, i).v,
                                fn_82F538A0(tracker->frames->previous, i).v));
        fn_82F53928(velocities, i, fn_82F534F8(fn_82F538B0(velocities, i).v, inverse));
        i = i + 1;
    } while (i < 25);
    return seconds;
}
