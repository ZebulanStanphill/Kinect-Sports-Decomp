typedef struct Reader_829A66D8 Reader_829A66D8;
typedef struct {
    char pad0[0x70];
    unsigned int (*getType)(Reader_829A66D8 *self, unsigned int token);
    unsigned int (*getNumber)(Reader_829A66D8 *self, unsigned int token);
} ReaderVtbl_829A66D8;
struct Reader_829A66D8 {
    ReaderVtbl_829A66D8 *vt;
};
typedef struct {
    char pad0[0x6c];
    unsigned int token;
} Instr_829A66D8;

int fn_829A66D8(Reader_829A66D8 *self, Instr_829A66D8 *instr, unsigned int *number, unsigned int *file,
                unsigned int *present)
{
    unsigned int type = self->vt->getType(self, instr->token);
    unsigned int value;
    *number = self->vt->getNumber(self, instr->token);
    value = 0;
    if (present != 0)
        *present = 0;
    if (type == 1) {
        if (*number != 0)
            goto fail;
        *file = 4;
        *number = 0;
    } else if (type == 5) {
        if (*number != 0)
            goto fail;
        *file = 4;
        *number = 2;
        if (present != 0)
            *present = 1;
    } else if (type == 0xc) {
        if (*number != 0)
            goto fail;
        *file = 4;
        *number = 1;
        if (present != 0)
            *present = 1;
    } else {
        if (type == 0xb) {
            if (*number >= 2)
                goto fail;
            value = 5;
        } else if (type == 6) {
            if (*number >= 8)
                goto fail;
            value = 6;
        } else if (type == 0xffff) {
        } else {
            goto fail;
        }
        *file = value;
    }
    return 0;
fail:
    return 0x80004005;
}
