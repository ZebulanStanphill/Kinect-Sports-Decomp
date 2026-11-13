typedef struct Value_82CE8268 { unsigned int v[4]; } Value_82CE8268;
typedef struct Obj_82CE8268 {
    char pad0[0xd8];
    Value_82CE8268 values[1];
} Obj_82CE8268;

void fn_82CE8268(Obj_82CE8268 *self, int index, Value_82CE8268 value)
{
    self->values[index] = value;
}
