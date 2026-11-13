typedef struct Value_82E5C858 { unsigned int v[4]; } Value_82E5C858;
typedef struct Obj_82E5C858 {
    char pad0[0x48];
    Value_82E5C858 value;
} Obj_82E5C858;

int fn_82E5C858(Obj_82E5C858 *self, Value_82E5C858 value)
{
    self->value = value;
    return 0;
}
