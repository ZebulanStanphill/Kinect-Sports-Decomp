typedef struct {
    unsigned char type;
} Value_826A24D8;

typedef struct {
    char pad0[0x24];
    Value_826A24D8 **values;
    int count;
} Obj_826A24D8;

extern int fn_826A1A28(void *key);
extern int fn_826C0568(Obj_826A24D8 *self, int a, void *key, int mode);

static unsigned char IsNull(Value_826A24D8 *v)
{
    return v->type == 0 || v->type == 10;
}

int fn_826A24D8(Obj_826A24D8 *self, int a, void *key, int mode)
{
    int flags = mode;
    int index = fn_826A1A28(key);
    if (index >= 0) {
        if (index < self->count && self->values[index] != 0) {
            if (!IsNull(self->values[index]) && self->values[index]->type != 1)
                return 1;
        }
        return 0;
    }
    return fn_826C0568(self, a, key, flags);
}
