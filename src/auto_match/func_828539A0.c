typedef struct Param_828539A0 {
    int pad0;
    float value;            /* 0x04 */
    unsigned char kind;     /* 0x08 */
    unsigned char count;    /* 0x09 */
} Param_828539A0;

typedef struct State_828539A0 {
    int pad0;
    void *device;           /* 0x04 */
    char pad8[0x7c];
    int f84;                /* 0x84 */
    int f88;                /* 0x88 */
    int pad8c[3];
    int f98;                /* 0x98 */
    int f9c;                /* 0x9c */
    int fa0;                /* 0xa0 */
    int regs[1];            /* 0xa4 */
} State_828539A0;

extern void fn_826310E0(void *p, unsigned int start, void *src, unsigned int count, unsigned __int64 mask);

void fn_828539A0(State_828539A0 *self, Param_828539A0 *param)
{
    switch (param->kind) {
    case 0:
        self->f84 = (int)param->value;
        break;
    case 1:
        self->f88 = (int)param->value;
        break;
    case 2:
        self->f98 = (int)param->value;
        break;
    case 3:
        self->f9c = (int)param->value;
        break;
    case 4: {
        unsigned int count = param->count;
        unsigned int start = (int)param->value;
        unsigned int first = start / 4;
        unsigned int last = (start + count - 1) / 4;

        fn_826310E0(self->device, start, self->regs, count,
                    (unsigned __int64)((__int64)0x8000000000000000ULL >> (last - first)) >> first);
        break;
    }
    case 5:
        self->fa0 = (int)param->value;
        break;
    }
}
