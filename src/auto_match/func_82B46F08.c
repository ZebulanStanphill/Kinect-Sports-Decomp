typedef struct Operand_82B46F08 {
    unsigned int reserved00 : 10;
    unsigned int bank : 3;
    unsigned int reserved13 : 2;
    unsigned int channel : 3;
    unsigned int index : 7;
    unsigned int reserved25 : 7;
} Operand_82B46F08;

typedef struct Source_82B46F08 {
    int reserved00[2];
    Operand_82B46F08 operand; /* 0x08 */
} Source_82B46F08;

typedef union Encoding_82B46F08 {
    struct {
        unsigned int reserved00 : 23;
        unsigned int op : 9;
    } wide;

    struct {
        unsigned int reserved00 : 30;
        unsigned int mode : 2;
    } narrow;
} Encoding_82B46F08;

typedef struct Target_82B46F08 {
    int reserved00;
    int constant;               /* 0x04 */
    Encoding_82B46F08 encoding; /* 0x08 */
} Target_82B46F08;

typedef struct Request_82B46F08 {
    unsigned int flags;      /* 0x00 */
    unsigned int extraFlags; /* 0x04 */
    int reserved08;
    void *literal; /* 0x0c */
} Request_82B46F08;

typedef struct Compiler_82B46F08 {
    char reserved00[0x34];
    unsigned int caps; /* 0x34 */
} Compiler_82B46F08;

extern int fn_82ABDD90(Compiler_82B46F08 *self, unsigned int index, unsigned int bank, unsigned int channel);
extern int fn_82AD1978(Source_82B46F08 *source, void *literal);

void fn_82B46F08(Compiler_82B46F08 *self, Source_82B46F08 *source, Request_82B46F08 *request)
{
    int offset = fn_82ABDD90(self, source->operand.index, source->operand.bank, source->operand.channel);
    Target_82B46F08 *target = (Target_82B46F08 *)((char *)source - 0x10 + offset);
    unsigned int flags = request->flags;

    if ((flags & 8) != 0) {
        target->encoding.wide.op = 0x4;
    } else if ((flags & 0x200) != 0) {
        target->encoding.wide.op = 0x28;
    } else if ((flags & 0x400) != 0) {
        if (request->literal != 0) {
            target->constant = fn_82AD1978(source, request->literal);
            target->encoding.narrow.mode = 1;
        } else {
            target->encoding.wide.op = 0x1c;
        }
    } else if ((flags & 0x10) != 0) {
        target->encoding.wide.op = 0x8;
    } else if ((flags & 0x20) != 0) {
        target->encoding.wide.op = 0xc;
    } else if ((flags & 0x40) != 0) {
        target->encoding.wide.op = 0x10;
    } else if ((flags & 0x80) != 0) {
        target->encoding.wide.op = 0x20;
    } else if ((flags & 0x100) != 0) {
        target->encoding.wide.op = 0x24;
    } else if ((self->caps & 0x400) != 0 && (request->extraFlags & 8) != 0) {
        target->encoding.wide.op = 0x84;
    } else if ((self->caps & 0x400) != 0 && (request->extraFlags & 0x200) != 0) {
        target->encoding.wide.op = 0xa8;
    } else if ((self->caps & 0x200) != 0 && (request->extraFlags & 0x400) != 0) {
        target->encoding.wide.op = 0x9c;
    }
}
