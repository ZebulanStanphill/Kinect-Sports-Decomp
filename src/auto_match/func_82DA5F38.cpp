class hkFinishLoadedObjectFlag { public: int m_finishing; };
struct CommandBuffer { int *data; int size; int capacity; };
class hkpGenericConstraintDataScheme {
public:
    int a, b, c, d;
    int padding[3];
    CommandBuffer commands;
    hkpGenericConstraintDataScheme(hkFinishLoadedObjectFlag flag);
};
extern "C" void fn_82DC1250(CommandBuffer *, hkpGenericConstraintDataScheme *);
hkpGenericConstraintDataScheme::hkpGenericConstraintDataScheme(hkFinishLoadedObjectFlag flag) {
    if (flag.m_finishing) {
        a = 0; c = 0; d = 0; b = 16;
        fn_82DC1250(&commands, this);
        a = b;
    }
}
