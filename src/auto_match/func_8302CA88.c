typedef struct Timer_8302CA88 {
    float base;  /* 0x0 */
    float clock; /* 0x4 */
} Timer_8302CA88;

typedef struct Object_8302CA88 {
    char pad000[0x40];
    unsigned int flags; /* 0x040 */
    char pad044[0x110 - 0x44];
    Timer_8302CA88 timer; /* 0x110 */
} Object_8302CA88;

extern void *lbl_832642FC;
extern const float lbl_8200DFF4;

extern float fn_830177C8(void *system, void *object, int property, unsigned int key);
extern float fn_82FFFC20(float *clock);

float fn_8302CA88(Object_8302CA88 *self, unsigned int key)
{
    Timer_8302CA88 *timer;
    float offset;
    float value;

    if ((unsigned char)((self->flags >> 4) & 1) != 0) {
        offset = fn_830177C8(lbl_832642FC, self, 4, key) * lbl_8200DFF4;
        timer = &self->timer;
        value = fn_82FFFC20(&timer->clock) + timer->base + offset;
        return -value >= 0.0f ? 0.0f : value;
    } else {
        timer = &self->timer;
        value = fn_82FFFC20(&timer->clock) + timer->base;
        return -value >= 0.0f ? 0.0f : value;
    }
}
