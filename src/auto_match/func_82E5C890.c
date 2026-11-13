typedef struct Value_82E5C890 { unsigned int v[4]; } Value_82E5C890;
typedef struct Obj_82E5C890 {
    char pad0[0x58];
    Value_82E5C890 value;
} Obj_82E5C890;

int fn_82E5C890(Obj_82E5C890 *self, Value_82E5C890 value)
{
    self->value = value;
    return 0;
}
