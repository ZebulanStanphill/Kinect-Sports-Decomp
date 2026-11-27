#include "xdk/vectorintrinsics.h"

extern void fn_8255DEA0(void *, unsigned int, __vector4 *);
extern void fn_8255E320(void *, unsigned int, float *);
extern void fn_82592430(void *, void *);

void fn_825D9C60(char *self, void *arg)
{
    int i = 0;
    unsigned int *entry;
    __vector4 rotation;
    float position[3];
    int *owner;
    char *target;
    int handle;
    float x;
    float y;
    float z;
    if (*(int *)(self + 0xb80) > 0) {
        entry = (unsigned int *)(self + 0xb58);
        do {
            owner = *(int **)(self + 0x4c);
            fn_8255DEA0(self, entry[3], &rotation);
            fn_8255E320(self, entry[3], position);
            entry += 2;
            handle = *entry;
            x = position[0];
            y = position[1];
            target = ((char **)*(int *)(owner[((handle >> 8) & 255) + 0x1ff] + 4))[handle & 255];
            z = position[2];
            *(__vector4 *)(target + 0x30) = rotation;
            {
                float *positionX = &*(float *)(target + 0x94);
                *positionX = x;
            }
            *(float *)(target + 0x98) = y;
            *(float *)(target + 0x9c) = z;
            i++;
        } while (i < *(int *)(self + 0xb80));
    }
    fn_82592430(self, arg);
}
