// Selects the LFE on/off choice, then picks one of three handles by the length of a velocity
// (low below the lower tuning threshold, high above the upper one, middle otherwise) and plays
// it at the owner's position (fn_82552D10) with the choice list.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vcfsx(__vector4 v, int shift);

typedef struct Tuning_8236A100 {
    char pad0[0x88];
    float lowSpeed;      /* 0x88 */
    float highSpeed;     /* 0x8c */
} Tuning_8236A100;

typedef struct Node_8236A100 {
    char pad0[0x50];
    __vector4 position;  /* 0x50 */
} Node_8236A100;

typedef struct Obj_8236A100 {
    char pad0[0xe10];
    Node_8236A100 *node;          /* 0xe10 */
    char pade14[0x1cc];
    void *context;                /* 0xfe0 */
    unsigned int low;             /* 0xfe4 */
    unsigned int middle;          /* 0xfe8 */
    unsigned int high;            /* 0xfec */
} Obj_8236A100;

typedef struct String_8236A100 {
    unsigned int words[7];
} String_8236A100;

/* VC10 std::vector layout: three pointers, then the (empty) allocator. */
typedef struct List_8236A100 {
    unsigned int first;
    unsigned int last;
    unsigned int end;
    unsigned char alloc;
} List_8236A100;

extern Tuning_8236A100 lbl_831D18A8;
extern void fn_82230110(String_8236A100 *s, const char *text);
extern void fn_82230300(String_8236A100 *s, int a, int b);
extern void fn_822C1730(List_8236A100 *list, String_8236A100 *pair);
extern void fn_822C18B8(List_8236A100 *list);
extern void fn_822CD140(List_8236A100 *list);
extern void fn_82552D10(void *context, unsigned int *handle, __vector4 *position, List_8236A100 *choices);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    zero = __vspltisw(0);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    mask = __vcmpeqfp(d, zero);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline void Play(Obj_8236A100 *self, unsigned int *e, __vector4 *position, List_8236A100 *choices)
{
    int ok = e != 0 ? *e != 0 : 0;

    if (ok) {
        fn_82552D10(self->context, e, position, choices);
    }
}

void fn_8236A100(Obj_8236A100 *self, unsigned char off, __vector4 velocity)
{
    __vector4 position;
    __vector4 length;
    List_8236A100 extra;
    List_8236A100 choices;
    String_8236A100 names[2];
    const char *choice;

    position = self->node->position;
    length = Length3(velocity);
    extra.first = 0;
    extra.last = 0;
    extra.end = 0;
    choices.first = 0;
    choices.last = 0;
    choices.end = 0;
    if (off) {
        choice = "LFE_off";
    } else {
        choice = "LFE_on";
    }
    fn_82230110(&names[0], "LFE_choice");
    fn_82230110(&names[1], choice);
    fn_822C1730(&choices, &names[0]);
    fn_82230300(&names[1], 1, 0);
    fn_82230300(&names[0], 1, 0);
    if (length.vector4_f32[0] < lbl_831D18A8.lowSpeed) {
        Play(self, &self->low, &position, &choices);
    } else if (length.vector4_f32[0] > lbl_831D18A8.highSpeed) {
        Play(self, &self->high, &position, &choices);
    } else {
        Play(self, &self->middle, &position, &choices);
    }
    fn_822C18B8(&choices);
    fn_822CD140(&extra);
}
