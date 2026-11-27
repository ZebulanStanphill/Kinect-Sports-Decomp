#include "xdk/vectorintrinsics.h"

typedef struct State_829DA4D0 {
    unsigned __int64 type;     /* 0x00 */
    unsigned __int64 flags;    /* 0x08 */
    __vector4 first;           /* 0x10 */
    __vector4 second;          /* 0x20 */
    unsigned char data[0xa80]; /* 0x30 */
    unsigned __int64 id;       /* 0xab0 */
    unsigned int unused;
    unsigned int firstHigh;
    unsigned int firstLow;
    unsigned int secondHigh;
    unsigned int secondLow;
    char padding[0xae0 - 0xacc];
} State_829DA4D0;

extern void *XMemSet(void *destination, int value, unsigned int size);
extern void *fn_82A1DDC0(void *destination, const void *source, unsigned int size);

void fn_829DA4D0(State_829DA4D0 *source, unsigned int *first, unsigned int *second,
                 State_829DA4D0 *destination)
{
    XMemSet(destination, 0, 0xae0);
    destination->type = 5;
    destination->flags = 0x2dff;
    destination->id = source->type;
    destination->firstHigh = first[1];
    destination->firstLow = first[0];
    destination->secondHigh = second[1];
    destination->secondLow = second[0];
    destination->first = source->first;
    destination->second = source->second;
    fn_82A1DDC0(destination->data, source->data, 0xa80);
}
