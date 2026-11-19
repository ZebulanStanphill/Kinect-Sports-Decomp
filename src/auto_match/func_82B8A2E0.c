/* Emits an integer constant: the value's bits go out as the first component, and the
   modifier records whether it is unsigned (2) or signed (1). */

#include <string.h>

typedef struct Modifier_82B8A2E0 {
    unsigned int bits;
} Modifier_82B8A2E0;

extern void fn_82B86888(void *ctx, int count, float *values, Modifier_82B8A2E0 modifier);

void fn_82B8A2E0(void *ctx, unsigned int value, unsigned char isSigned)
{
    float values[4];
    Modifier_82B8A2E0 modifier;

    values[0] = *(float *)&value;
    memset(&modifier, 0, sizeof(modifier));
    values[1] = 0.0f;
    values[2] = 0.0f;
    values[3] = 0.0f;
    modifier.bits |= (isSigned == 0) + 1;
    fn_82B86888(ctx, 1, values, modifier);
}
