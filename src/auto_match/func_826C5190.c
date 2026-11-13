typedef struct Obj_826C5190 {
    int pad[3];
    int value;
} Obj_826C5190;

int fn_826C5190(int value, const Obj_826C5190 *o)
{
    return value < o->value;
}
