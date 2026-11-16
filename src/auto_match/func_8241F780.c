typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4];
} __vector4;

typedef struct Pair_8241F780 {
    float x;
    float y;
} Pair_8241F780;

extern int fn_8235CDC8(void *self, Pair_8241F780 *position, Pair_8241F780 *size, __vector4 transform);
extern void fn_824E94F0(float x, float y, float width, float height, void *renderer, int enabled, int type,
                        int flags);
extern const float lbl_821916FC;

void fn_8241F780(void **self, float delta, __vector4 transform)
{
    char *owner = (char *)*self;
    Pair_8241F780 position;
    Pair_8241F780 size;

    if (self == *(void ***)(owner + 0x2b20)) {
        if (fn_8235CDC8(owner, &position, &size, transform)) {
            float time = *(float *)(owner + 0x2cbc) + delta;
            *(float *)(owner + 0x2cbc) = time;
            *(int *)(owner + 0x2cc0) = 1;
            if (time > lbl_821916FC) {
                fn_824E94F0(position.x - size.x * 0.5f, position.y - size.y * 0.5f, size.x, size.y,
                            *(void **)(owner + 0x2cb8), 1, 2, 0);
            }
        }
    }
}
