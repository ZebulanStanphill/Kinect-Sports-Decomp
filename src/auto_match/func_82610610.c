typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

typedef struct Event_82610610 {
    char unknown[0x10];
    int id;       /* 0x10 */
    float x;      /* 0x14 */
    float y;      /* 0x18 */
    float z;      /* 0x1c */
    int type;     /* 0x20 */
    float first;  /* 0x24 */
    float second; /* 0x28 */
    int flags;    /* 0x2c */
} Event_82610610;

typedef struct Owner_82610610 {
    char unknown[0x60];
    void **device;
} Owner_82610610;

extern const float ltcg_pool_0_0f;
extern __vector4 __lvlx(const void *, int);
extern __vector4 __vrlimi(__vector4, __vector4, unsigned int, unsigned int);

static __forceinline __vector4 MakePosition_82610610(const float *x, const float *y, const float *z)
{
    __vector4 xy = __vrlimi(__lvlx(x, 0), __lvlx(y, 0), 4, 3);
    __vector4 zw = __vrlimi(__lvlx(z, 0), __lvlx(&ltcg_pool_0_0f, 0), 4, 3);
    return __vrlimi(xy, zw, 3, 2);
}

extern void fn_8257E950(void *, unsigned int, __vector4, int, float, float, int);

void fn_82610610(Owner_82610610 *self, int event, const Event_82610610 *data, int context, int failed)
{
    if (failed == 0 && data != 0) {
        fn_8257E950(*self->device, data->id, MakePosition_82610610(&data->x, &data->y, &data->z), data->type,
                    data->first, data->second, data->flags);
    }
}
