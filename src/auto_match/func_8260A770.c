#include "xdk/vectorintrinsics.h"

typedef struct Record_8260A770 {
    unsigned short type;    /* 0x00 */
    unsigned char enabled;  /* 0x02 */
    unsigned char reserved; /* 0x03 */
    unsigned short first;   /* 0x04 */
    unsigned short second;  /* 0x06 */
    char padding08[8];      /* 0x08 */
    __vector4 vectors[3];   /* 0x10 */
    unsigned int values[3]; /* 0x40 */
} Record_8260A770;

void fn_8260A770(Record_8260A770 *out, const Record_8260A770 *source)
{
    int index;
    out->type = source->type;
    out->enabled = source->enabled;
    out->first = source->first;
    out->second = source->second;
    {
        __vector4 *targetVectors = out->vectors;
        const __vector4 *sourceVectors = source->vectors;
        targetVectors[0] = sourceVectors[0];
        targetVectors[1] = sourceVectors[1];
        targetVectors[2] = sourceVectors[2];
    }
    for (index = 0; index < 3; index++) {
        out->values[index] = source->values[index];
    }
}
