#include "xdk/vectorintrinsics.h"

typedef struct State_823E7788 {
    char pad0[0x41c];
    int mode; /* 0x41c */
} State_823E7788;

typedef struct Output_823E7788 {
    char pad0[0x50];
    __vector4 first;    /* 0x50 */
    __vector4 second;   /* 0x60 */
    __vector4 third;    /* 0x70 */
    unsigned int index; /* 0x80 */
} Output_823E7788;

typedef struct Player_823E7788 {
    char pad0[0x2c];
    unsigned int index; /* 0x2c */
} Player_823E7788;

extern void fn_823E7368(State_823E7788 *, Output_823E7788 *, __vector4, __vector4);
extern Player_823E7788 *fn_82368C30(State_823E7788 *);

void fn_823E7788(State_823E7788 *self, Output_823E7788 *out, __vector4 first, __vector4 second,
                 __vector4 third)
{
    unsigned int index;
    int mode;
    fn_823E7368(self, out, first, third);
    out->first = first;
    out->second = second;
    out->third = third;
    mode = self->mode;
    if ((mode == 2 || mode == 8 || mode == 9 || mode == 6 || mode == 7) && fn_82368C30(self) != 0) {
        index = fn_82368C30(self)->index;
    } else {
        index = -1;
    }
    out->index = index;
}
