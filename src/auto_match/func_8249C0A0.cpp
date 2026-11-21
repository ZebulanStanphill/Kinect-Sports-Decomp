#include <vector>

struct Entry_8249C0A0 {
    int mask;
    int pad4;
};

struct Stack_8249C0A0 {
    char pad0[0x10];
    std::vector<Entry_8249C0A0> entries; /* 0x10 */
};

struct Owner_8249C0A0 {
    int pad0;
    unsigned int mode; /* 0x04 */
    int busy;          /* 0x08 */
    char padC[0x110 - 0xc];
    Stack_8249C0A0 *stack; /* 0x110 */
};

struct Fade_8249C0A0 {
    char pad0[0x24];
    unsigned int flags; /* 0x24 */
    float fadeIn;       /* 0x28 */
    float fadeOut;      /* 0x2c */
};

extern "C" {
extern float lbl_8327F880[8];
extern float lbl_8218E8E8;
int fn_8249D600(Stack_8249C0A0 *stack, unsigned int mode);
int fn_8249D878(int index);
}

static __forceinline void ClearFlags(unsigned int *flags, unsigned int mask)
{
    *flags &= ~mask;
}

extern "C" unsigned int fn_8249C0A0(Owner_8249C0A0 *self, Fade_8249C0A0 *fade)
{
    if (self->busy == 0) {
        if ((fade->flags & 2) != 0) {
            float time = fade->fadeIn + lbl_8327F880[5];

            if (time < lbl_8218E8E8) {
                fade->fadeIn = time;
                ClearFlags(&fade->flags, 2);
            }
        } else {
            fade->fadeIn = 0.0f;
        }
        if (fn_8249D600(self->stack, self->mode) == 0)
            fade->fadeIn = 0.0f;
        if ((fade->flags & 8) != 0) {
            float time = fade->fadeOut + lbl_8327F880[5];

            if (time < lbl_8218E8E8) {
                fade->fadeOut = time;
                ClearFlags(&fade->flags, 8);
            }
        } else {
            fade->fadeOut = 0.0f;
        }
        {
            Stack_8249C0A0 *stack = self->stack;
            int top = fn_8249D878(0);

            if (!stack->entries.empty())
                top = stack->entries.back().mask;
            if (top == 0)
                fade->fadeOut = 0.0f;
        }
    }
    return fade->flags;
}
