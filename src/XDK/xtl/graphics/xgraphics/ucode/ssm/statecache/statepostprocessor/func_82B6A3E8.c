typedef struct StateObject_82B6A3E8 {
    char pad0[0x10];
    unsigned int address;
    char pad14[0xc];
    unsigned int *storage;
} StateObject_82B6A3E8;

typedef struct CommandInterface_82B6A3E8 {
    unsigned int unknown;
    void *context;
    unsigned int *(*allocate)(void *context, unsigned int count);
    void *reserved[2];
    void (*finish)(void *context, unsigned int count, void *out);
} CommandInterface_82B6A3E8;

extern void fn_82AB15D0(void *object, const char *format, ...);
extern void fn_82B6D908(StateObject_82B6A3E8 **key, void *data);

unsigned int fn_82B6A3E8(void *processor, StateObject_82B6A3E8 **key, char *state)
{
    CommandInterface_82B6A3E8 *commands;
    unsigned int *begin;
    unsigned int *cursor;
    StateObject_82B6A3E8 *object;
    unsigned int count;
    unsigned int *storage;
    int i;
    unsigned int data[4];

    if (processor == 0) {
        fn_82AB15D0(
            0, "Assertion failed: %s (%s:%u)", "pPostProcessor",
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\statepostprocessor.cpp",
            0x539);
    }
    if (key == 0) {
        fn_82AB15D0(
            0, "Assertion failed: %s (%s:%u)", "pProgKey",
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\statepostprocessor.cpp",
            0x53a);
    }
    if (state == 0) {
        fn_82AB15D0(
            0, "Assertion failed: %s (%s:%u)", "pAbstractState",
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\statepostprocessor.cpp",
            0x53b);
    }
    commands = (CommandInterface_82B6A3E8 *)(state + 0xec);
    if (commands == 0) {
        fn_82AB15D0(
            0, "Assertion failed: %s (%s:%u)", "pObjectCI",
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\statepostprocessor.cpp",
            0x53e);
    }
    cursor = commands->allocate(commands->context, 13);
    begin = cursor;
    *cursor++ = 0xc00b2500;
    object = key[1];
    *cursor++ = object->storage[1] | object->address;
    *cursor++ = 0x10;
    *cursor++ = 0x10;
    for (i = 0; i < 5; i++) {
        object = key[i + 2];
        *cursor++ = object->storage[1] | object->address;
    }
    object = key[8];
    storage = object->storage;
    *cursor++ = object->address;
    *cursor++ = storage[1];
    object = key[7];
    storage = object->storage;
    *cursor++ = object->address;
    *cursor++ = storage[1];
    count = cursor - begin;
    if (count > 13) {
        fn_82AB15D0(
            0, "Assertion failed: %s (%s:%u)", "cmdBufSizeCount >= cmdBufSizeUsed",
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\statepostprocessor.cpp",
            0x572);
    }
    commands->finish(commands->context, count, data);
    fn_82B6D908(key, data);
    return 0;
}
