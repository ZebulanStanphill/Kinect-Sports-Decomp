// The object at 0x4c is a second base class: converting the object pointer
// to it (a reference conversion, so no null check) is what puts the
// `addi r3` before `li r4`.
struct Base_82E726E0 {
    char pad0[0xc];
    void *ready;
    char pad10[0x4c - 0x10];
};
struct Component_82E726E0 {
    int v;
};
extern "C" void fn_82F37588(Component_82E726E0 *c, int arg);

struct Object_82E726E0 : Base_82E726E0, Component_82E726E0 {
    char pad[0xb4 - 0x4c - 4];
    int state;
};

extern "C" long fn_82E726E0(Object_82E726E0 *o)
{
    if (o->ready == 0) {
        return 0xc00d36b6;
    }
    fn_82F37588(&static_cast<Component_82E726E0 &>(*o), 0);
    o->state = 0;
    return 0;
}
