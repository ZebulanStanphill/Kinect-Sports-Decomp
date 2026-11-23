typedef struct Value_8227DA30 {
    int type;      /* 0x0 */
    int iface;     /* 0x4 */
    double number; /* 0x8 */
} Value_8227DA30;

typedef struct Slider_8227DA30 {
    char pad0[0x3c];
    int movie; /* 0x3c */
    char pad40[0x48 - 0x40];
    float value; /* 0x48 */
} Slider_8227DA30;

extern void fn_82273CD8(Value_8227DA30 *value, int type);
extern void fn_82273C88(Value_8227DA30 *value);
extern void fn_82672C20(int movie, const char *method, Value_8227DA30 *args, int count);

static __forceinline float Clamp01(float value)
{
    value = value >= 0.0f ? value : 0.0f;
    return value - 1.0f >= 0.0f ? 1.0f : value;
}

/* Sets the slider value (clamped to [0, 1]) and passes a change on to the movie. */
void fn_8227DA30(Slider_8227DA30 *self, float value)
{
    Value_8227DA30 arg;

    value = Clamp01(value);
    if (value != self->value) {
        self->value = value;
        arg.type = 0;
        arg.iface = 0;
        fn_82273CD8(&arg, 3);
        arg.number = value;
        fn_82672C20(self->movie, "_root.mainCtrl.setValue", &arg, 1);
        fn_82273C88(&arg);
    }
}
