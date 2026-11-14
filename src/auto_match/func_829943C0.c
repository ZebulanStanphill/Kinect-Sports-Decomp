typedef struct Reader_829943C0 Reader_829943C0;
typedef struct {
    char pad0[0x70];
    unsigned int (*getType)(Reader_829943C0 *self, unsigned int token);
    unsigned int (*getNumber)(Reader_829943C0 *self, unsigned int token);
} ReaderVtbl_829943C0;
struct Reader_829943C0 {
    ReaderVtbl_829943C0 *vt;
};
typedef struct {
    char pad0[0x6c];
    unsigned int token;
} Instr_829943C0;

/* Sibling of Matching fn_82994310. */
int fn_829943C0(Reader_829943C0 *self, Instr_829943C0 *instr, unsigned int *number, unsigned int *file,
                unsigned int *present)
{
    unsigned int used = 1;
    unsigned int type = self->vt->getType(self, instr->token);
    unsigned int n = self->vt->getNumber(self, instr->token);
    *number = n;
    if (type == 0xb) {
        if (n >= 4)
            return 0x80004005;
        *file = 8;
    } else if (type == 0xd) {
        if (n != 0)
            return 0x80004005;
        *file = 9;
    } else if (type == 0xffff) {
        used = 0;
        *file = 0;
    } else {
        return 0x80004005;
    }
    if (present != 0)
        *present = used;
    return 0;
}
