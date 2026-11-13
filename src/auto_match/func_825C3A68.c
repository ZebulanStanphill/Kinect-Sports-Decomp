typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Float3_825C3A68 {
    float x, y, z;
} Float3_825C3A68;

typedef struct Source_825C3A68 {
    unsigned int flags;             /* 0x00 */
} Source_825C3A68;

typedef struct Slot_825C3A68 {
    char data[0x18];
} Slot_825C3A68;

typedef struct Event_825C3A68 {
    char pad0[0x20];
    void *handle;                   /* 0x20 */
    int count;                      /* 0x24 */
    char pad28[0x28];
    __vector4 position;             /* 0x50 */
    char pad60[0x9d0];
    Slot_825C3A68 slots[1];         /* 0xa30 */
} Event_825C3A68;

typedef struct Handler_825C3A68 {
    char pad0[0x4];
    unsigned short kind;            /* 0x04 */
    char pad6[0x42];
    int slot;                       /* 0x48 */
} Handler_825C3A68;

extern void fn_825C32D0(Handler_825C3A68 *self, Source_825C3A68 *source, Event_825C3A68 *event, int flags);
extern void fn_825C3060(Handler_825C3A68 *self, Source_825C3A68 *source, Event_825C3A68 *event);
extern void fn_825C3108(Handler_825C3A68 *self, Source_825C3A68 *source, Event_825C3A68 *event);
extern void fn_825C31F0(Handler_825C3A68 *self, Source_825C3A68 *source, Event_825C3A68 *event);
extern unsigned char fn_8288B760(void *handle);
extern void fn_826127C8(Handler_825C3A68 *self, Source_825C3A68 *source, Event_825C3A68 *event);
extern Float3_825C3A68 *fn_825934E8(Source_825C3A68 *source);
extern void fn_825B9598(void *target, const __vector4 *position);
extern void fn_825C3488(Handler_825C3A68 *self, Source_825C3A68 *source, Event_825C3A68 *event,
                        int a, int b, int c);
extern void fn_826128C0(Handler_825C3A68 *self, Event_825C3A68 *event);
extern void fn_82552B50(Slot_825C3A68 *slot, int value);

static __forceinline __vector4 LoadFloat3(const Float3_825C3A68 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline __vector4 LoadPosition(const Float3_825C3A68 *src)
{
    __vector4 v, zero;

    v = LoadFloat3(src);
    zero = __VMXGetReg(77);
    return __vsel(v, zero, __VMXGetReg(67));
}

static __forceinline unsigned char IsActive(const Event_825C3A68 *event)
{
    if (event->handle == 0)
        return event->count != 0;
    return fn_8288B760(event->handle);
}

void fn_825C3A68(Handler_825C3A68 *self, Source_825C3A68 *source, Event_825C3A68 *event)
{
    switch (self->kind) {
    case 1:
        fn_825C32D0(self, source, event, 0);
        break;
    case 4:
        fn_825C3060(self, source, event);
        break;
    case 5:
        fn_825C3108(self, source, event);
        break;
    case 6:
        fn_825C31F0(self, source, event);
        break;
    case 7:
        if (IsActive(event))
            fn_826127C8(self, source, event);
        break;
    case 8:
        {
            __vector4 position;

            if (source != 0 && (source->flags & 1)) {
                position = LoadPosition(fn_825934E8(source));
            } else {
                position = event->position;
            }
            fn_825B9598((char *)self + 0x48, &position);
        }
        break;
    case 10:
        fn_825C3488(self, source, event, 0, 0, 0);
        break;
    case 11:
        fn_826128C0(self, event);
        break;
    case 12:
        fn_82552B50(&event->slots[self->slot], 1);
        break;
    }
}
