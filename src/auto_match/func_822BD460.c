typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Listener_822BD460 Listener_822BD460;
typedef struct ListenerVt_822BD460 {
    void *slots[2];
    void (*notify)(Listener_822BD460 *self, int message, int *data);
} ListenerVt_822BD460;
struct Listener_822BD460 {
    ListenerVt_822BD460 *vt;
};

typedef struct Spawned_822BD460 {
    char pad0[0x1b0];
    Listener_822BD460 *listener;
} Spawned_822BD460;

extern Spawned_822BD460 *fn_82560100(int a, int b, __vector4 *position, float scale,
                                     __vector4 *direction, int c, int d, int e);
extern int fn_824CD030(void *source);
extern int fn_824CCD80(void *source);

void fn_822BD460(int a, int b, __vector4 position, __vector4 direction, void *source)
{
    Spawned_822BD460 *spawned;
    int value;

    spawned = fn_82560100(a, b, &position, 0.0f, &direction, 0, 0, 0);
    if (source != 0 && fn_824CD030(source) != 0) {
        value = fn_824CCD80(source);
        spawned->listener->vt->notify(spawned->listener, 0x19, &value);
    }
}
