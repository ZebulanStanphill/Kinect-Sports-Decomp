typedef struct Effect_82285650 Effect_82285650;
typedef struct Device_82285650 Device_82285650;

typedef struct Self_82285650 {
    char pad0[0x168];
    Effect_82285650 *effect; /* 0x168 */
    void *overlay;           /* 0x16c */
    int finished;            /* 0x170 */
    float time;              /* 0x174 */
} Self_82285650;

extern Device_82285650 *lbl_83265988;

extern void fn_82276BC8(Effect_82285650 *effect);
extern void fn_8265CA20(void *memory);
extern void fn_82276CD0(Effect_82285650 *effect, float dt);
extern void fn_82284B08(void *overlay, float dt);
extern unsigned char fn_828EA608(Device_82285650 *device);
extern unsigned int fn_823AB470(Device_82285650 *device);
extern void fn_82279D28(Self_82285650 *self, int layer, int visible);
extern void fn_82279E08(Self_82285650 *self, float dt);

void fn_82285650(Self_82285650 *self, float dt)
{
    Effect_82285650 *effect;
    Device_82285650 *device;
    int playing;

    self->time += dt;
    effect = self->effect;

    if (effect != 0) {
        if (self->finished != 0) {
            fn_82276BC8(effect);
            fn_8265CA20(effect);
            self->effect = 0;
            self->finished = 0;
        } else {
            fn_82276CD0(effect, dt);
        }
    }
    if (self->overlay != 0) {
        fn_82284B08(self->overlay, dt);
    }
    device = lbl_83265988;
    playing = 0;
    if (lbl_83265988 != 0 && fn_828EA608(device) != 0) {
        playing = fn_823AB470(device) == 2;
    }
    if (playing) {
        fn_82279D28(self, 2, 0);
    } else {
        fn_82279D28(self, 2, 1);
    }
    fn_82279E08(self, dt);
}
