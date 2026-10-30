// The object at 0x48 is a second base class: converting the object pointer
// to it (a reference conversion, so no null check) is what puts the
// `addi r3` before `li r4`.
struct Base_82EE4E00 {
    char pad0[0xc];
    void *ready;
    char pad10[0x48 - 0x10];
};
struct Component_82EE4E00 {
    int v;
};
extern "C" void fn_82E3BCC8(Component_82EE4E00 *c, int arg);

struct Object_82EE4E00 : Base_82EE4E00, Component_82EE4E00 {
    char pad[0x88 - 0x48 - 4];
    int state;
};

extern "C" long fn_82EE4E00(Object_82EE4E00 *o)
{
    if (o->ready == 0) {
        return 0xc00d36b6;
    }
    fn_82E3BCC8(&static_cast<Component_82EE4E00 &>(*o), 0);
    o->state = 0;
    return 0;
}
