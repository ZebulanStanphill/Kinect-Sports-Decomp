/* Fades the control out while the child object is busy, otherwise in or out by its condition. */
typedef struct Animation_82341BF0 {
    char pad000[0x108];
    float current; /* 0x108 */
    float target;  /* 0x10c */
} Animation_82341BF0;

typedef struct Control_82341BF0 {
    char pad000[0x10];
    Animation_82341BF0 *animation; /* 0x10 */
} Control_82341BF0;

typedef struct Child_82341BF0 {
    char pad000[0xc];
    void *object; /* 0xc */
} Child_82341BF0;

typedef struct Data_82341BF0 {
    char pad000[0x24];
    void *condition; /* 0x24 */
    char pad028[0xf0];
    Control_82341BF0 *control; /* 0x118 */
    char pad11c[0x84];
    Child_82341BF0 *child; /* 0x1a0 */
} Data_82341BF0;

typedef struct Owner_82341BF0 {
    char pad000[0xc];
    Data_82341BF0 **data; /* 0xc */
} Owner_82341BF0;

extern int fn_8242E560(void *object);
extern int fn_824CCFC8(void *object);
extern void fn_827F57E8(Animation_82341BF0 *animation, float value, float duration);
extern const float lbl_821CA45C[2];

/* Starts a fade to `value` and makes the fade's target the current value. */
static __forceinline void Fade(Data_82341BF0 *data, float value, float duration)
{
    Control_82341BF0 *control = data->control;

    fn_827F57E8(control->animation, value, duration);
    control->animation->current = control->animation->target;
}

void fn_82341BF0(Owner_82341BF0 *self)
{
    if (fn_8242E560((*self->data)->child->object) != 0) {
        Fade(*self->data, 0.0f, 4.0f);
        return;
    }
    if ((*self->data)->condition == 0) {
        return;
    }
    if (fn_824CCFC8((*self->data)->condition) != 0) {
        Fade(*self->data, lbl_821CA45C[1], 4.0f);
    } else {
        Fade(*self->data, 0.0f, 4.0f);
    }
}
