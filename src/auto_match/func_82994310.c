typedef struct Reader_82994310 Reader_82994310;
typedef struct {
    char pad0[0x70];
    unsigned int (*getType)(Reader_82994310 *self, unsigned int token);
    unsigned int (*getNumber)(Reader_82994310 *self, unsigned int token);
} ReaderVtbl_82994310;
struct Reader_82994310 {
    ReaderVtbl_82994310 *vt;
    char pad4[0x28 - 4];
    unsigned int numTemps;
};
typedef struct {
    char pad0[0x6c];
    unsigned int token;
} Instr_82994310;

int fn_82994310(Reader_82994310 *self, Instr_82994310 *instr, unsigned int *number, unsigned int *file)
{
    unsigned int type = self->vt->getType(self, instr->token);
    unsigned int n = self->vt->getNumber(self, instr->token);
    unsigned int f;
    *number = n;
    if (type == 0xb) {
        if (n >= self->numTemps)
            return 0x80004005;
        f = 1;
    } else if (type == 6) {
        if (n >= 8)
            return 0x80004005;
        f = 3;
    } else if (type == 0xffff) {
        f = 0;
    } else {
        return 0x80004005;
    }
    *file = f;
    return 0;
}
