typedef struct Reader_82960A30 Reader_82960A30;
typedef struct {
    char pad0[0x70];
    unsigned int (*getType)(Reader_82960A30 *self, unsigned int token);
    unsigned int (*getNumber)(Reader_82960A30 *self, unsigned int token);
} ReaderVtbl_82960A30;
struct Reader_82960A30 {
    ReaderVtbl_82960A30 *vt;
    char pad4[0x70 - 4];
    unsigned int flags; /* 0x70 */
};
typedef struct {
    char pad0[0xc];
    unsigned int index; /* 0x0c */
    char pad10[0x6c - 0x10];
    unsigned int token; /* 0x6c */
} Instr_82960A30;

int fn_82960A30(Reader_82960A30 *self, Instr_82960A30 *instr, unsigned int *number, unsigned int *file,
                unsigned int *present)
{
    unsigned int type = self->vt->getType(self, instr->token);
    unsigned int extra;
    *number = self->vt->getNumber(self, instr->token);
    if (self->flags & 0x1000000) {
        if (present != 0)
            *present = 0;
        if (type == 5 && *number == 0 && present != 0)
            *present = 1;
        if (type == 0xffff) {
            *file = 0;
        } else {
            *file = 6;
            *number = instr->index;
        }
    } else {
        extra = 0;
        if (type == 0xb) {
            if (*number >= 4)
                goto fail;
            *file = 8;
        } else if (type == 0xd) {
            if (*number != 0)
                goto fail;
            extra = 1;
            *file = 9;
        } else if (type == 0x11) {
            if (*number != 0)
                goto fail;
            *file = 0x11;
            *number = 1;
        } else if (type == 0x12) {
            if (*number != 0)
                goto fail;
            *file = 0x11;
            *number = 0;
        } else if (type == 0xffff) {
            *file = 0;
        } else {
            goto fail;
        }
        if (present != 0)
            *present = extra;
    }
    return 0;
fail:
    return 0x80004005;
}
