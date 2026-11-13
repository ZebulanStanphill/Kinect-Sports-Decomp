typedef struct Value_82F3E160 { unsigned int v[4]; } Value_82F3E160;
typedef struct Obj_82F3E160 {
    char pad0[0xc];
    void *ready;
    char pad10[0x40];
    Value_82F3E160 value;
} Obj_82F3E160;

int fn_82F3E160(Obj_82F3E160 *self, Value_82F3E160 value)
{
    if (self->ready == 0) {
        return 0xc00d36b6;
    }
    self->value = value;
    return 0;
}
