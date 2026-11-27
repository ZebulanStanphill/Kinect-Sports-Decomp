#include <string.h>

typedef struct Def_82AF6CC8 Def_82AF6CC8;

typedef struct Use_82AF6CC8 {
    unsigned int unknown28 : 4; /* 0x0 */
    unsigned int count : 3;
    unsigned int unknown13 : 12;
    unsigned int swizzle : 8;
    unsigned int flags : 5;
    int unknown4;              /* 0x4 */
    struct Use_82AF6CC8 *next; /* 0x8 */
    Def_82AF6CC8 *def;         /* 0xc */
} Use_82AF6CC8;

struct Def_82AF6CC8 {
    int unknown0;               /* 0x0 */
    Use_82AF6CC8 *uses;         /* 0x4 */
    unsigned int unknown25 : 7; /* 0x8 */
    unsigned int folded : 1;
    unsigned int unknown22 : 2;
    unsigned int operandCount : 3;
    unsigned int unknown14 : 5;
    unsigned int opcode : 7;
    unsigned int unknown0b : 7;
    char padc[0x20];
    Use_82AF6CC8 *operands[1]; /* 0x2c */
};

typedef struct Options_82AF6CC8 {
    unsigned int bits;
} Options_82AF6CC8;

extern int fn_82AF4BA8(void *self, Def_82AF6CC8 *constant, unsigned int count, unsigned int swizzle,
                       unsigned int flags, float *values);
extern Def_82AF6CC8 *fn_82B86888(void *self, unsigned int count, float *values, Options_82AF6CC8 options);
extern void fn_82AEFCD8(Def_82AF6CC8 *def);
extern void fn_82AA66A8(void *self, int code);

static __forceinline int HasOperand(Def_82AF6CC8 *instruction, unsigned int index)
{
    if (index < instruction->operandCount) {
        return 1;
    }
    return 0;
}

void fn_82AF6CC8(void *self, Def_82AF6CC8 *instruction, unsigned int flags)
{
    unsigned int i;
    unsigned int j;
    Use_82AF6CC8 *use;
    Use_82AF6CC8 *other;
    Use_82AF6CC8 **link;
    Def_82AF6CC8 *def;
    float values[6];
    Options_82AF6CC8 options;

    for (i = 0; HasOperand(instruction, i); i++) {
        use = instruction->operands[i];
        if (use->def->opcode != 0x7d) {
            continue;
        }
        fn_82AF4BA8(self, use->def, use->count, use->swizzle, use->flags, values);
        memset(&options, 0, sizeof(options));
        def = fn_82B86888(self, use->count, values, options);
        link = &use->def->uses;
        other = *link;
        while (other != use) {
            link = &other->next;
            other = *link;
        }
        *link = use->next;
        use->next = def->uses;
        def->uses = use;
        use->def = def;
        use->swizzle = 0xe4;
        fn_82AEFCD8(def);
        def->folded = 1;
        if (flags & 4) {
            if (values[0] < 0.0f) {
                for (j = 1; j < use->count; j++) {
                    if (values[j] > 0.0f) {
                        fn_82AA66A8(self, 0x12c0);
                        return;
                    }
                }
                use->flags = 6;
            } else {
                use->flags = 2;
            }
        } else {
            use->flags = 0;
        }
    }
}
