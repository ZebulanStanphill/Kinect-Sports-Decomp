typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float scalar[4];
    unsigned int words[4];
} __vector4;

__vector4 __vspltw(__vector4 value, unsigned int lane);

#define HK_REAL_MAX 3.40282e+38f

typedef struct Scale_82DEC618 {
    __vector4 axes[4]; /* 0x0 */
    float limits[3];   /* 0x40 */
} Scale_82DEC618;

static __forceinline void SetAll(__vector4 *v, float value)
{
    v->scalar[0] = value;
    *v = __vspltw(*v, 0);
}

void fn_82DEC618(Scale_82DEC618 *self)
{
    SetAll(&self->axes[0], 1.0f);
    SetAll(&self->axes[1], 1.0f);
    SetAll(&self->axes[2], 1.0f);
    SetAll(&self->axes[3], 1.0f);
    self->limits[0] = HK_REAL_MAX;
    self->limits[1] = HK_REAL_MAX;
    self->limits[2] = HK_REAL_MAX;
}
