typedef struct Obj_8275BB38 {
    char pad0[0x38];
    int table;
    unsigned int id;
} Obj_8275BB38;

extern char *fn_8269A678(int table, unsigned int id);
extern int fn_826BD928(void *entry);

int fn_8275BB38(Obj_8275BB38 *self)
{
    char *entry;
    if (self->table == 0) {
        return 0;
    }
    if (self->id == 0) {
        return 0;
    }
    entry = fn_8269A678(self->table, self->id);
    if (entry == 0) {
        return 0;
    }
    return fn_826BD928(entry + 0x68);
}
