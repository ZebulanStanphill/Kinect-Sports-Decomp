typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Point_825EB400 {
    char pad[0x10];
    __vector4 position;
} Point_825EB400;

typedef struct Entry_825EB400 {
    Point_825EB400 *point;
    unsigned short distance;
    char pad[0x12];
} Entry_825EB400;

typedef union Slot_825EB400 {
    Entry_825EB400 *entries;
    int count;
} Slot_825EB400;

typedef struct State_825EB400 {
    char pad[8];
    Slot_825EB400 *slots;
    int reserved;
    int index;
} State_825EB400;

__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __lvsl(const void *, int);
__vector4 __vperm(__vector4, __vector4, __vector4);
__vector4 __vpkd3d(__vector4, __vector4, unsigned int, unsigned int, unsigned int);
__vector4 __vsplth(__vector4, unsigned int);
void __stvehx(__vector4, void *, int);

extern void fn_82F65FE0(void *base, unsigned int count, unsigned int size,
                        int (*compare)(const void *, const void *));
extern int fn_825EB510(const void *left, const void *right);

static __forceinline unsigned short FloatToHalf(float value)
{
    unsigned short result;
    __vector4 permute = __lvsl(&value, 0);
    __vector4 vector = *(const __vector4 *)&value;
    vector = __vperm(vector, vector, permute);
    vector = __vpkd3d(vector, vector, 5, 2, 2);
    vector = __vsplth(vector, 0);
    __stvehx(vector, &result, 0);
    return result;
}

void fn_825EB400(State_825EB400 *self, __vector4 origin)
{
    int i;
    int count = self->slots[self->index + 1].count;
    for (i = 0; i < count; ++i) {
        Entry_825EB400 *entry = &self->slots[self->index + 3].entries[i];
        __vector4 delta = __vsubfp(origin, entry->point->position);
        __vector4 square = __vmsum3fp(delta, delta);
        entry->distance = FloatToHalf(square.vector4_f32[0]);
    }
    if (self->slots[self->index + 1].count != 0) {
        fn_82F65FE0(self->slots[self->index + 3].entries, self->slots[self->index + 1].count,
                    sizeof(Entry_825EB400), fn_825EB510);
    }
}
