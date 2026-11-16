typedef struct Instruction_82BB5528 Instruction_82BB5528;

typedef struct Vtable_82BB5528 {
    void *slots0[6];
    unsigned char (*test18)(Instruction_82BB5528 *);
    void *slots1c[6];
    unsigned char (*test34)(Instruction_82BB5528 *);
} Vtable_82BB5528;

struct Instruction_82BB5528 {
    Vtable_82BB5528 *vtable;
    char pad[0x14];
    int opcode;
};

typedef struct Node_82BB5528 {
    char pad[0x28];
    Instruction_82BB5528 *instruction;
} Node_82BB5528;

typedef struct Slots_82BB5528 {
    Node_82BB5528 *slots[2];
    char list[0xc];
} Slots_82BB5528;

typedef struct Opcode_82BB5528 {
    unsigned int pad : 29;
    unsigned int paired : 1;
    unsigned int remaining : 2;
    char data[0x30];
} Opcode_82BB5528;

extern Opcode_82BB5528 lbl_8316FF50[];
extern void fn_82BBFE78(void *, Node_82BB5528 *);
extern void fn_82AB15D0(void *, const char *, const char *, const char *, int);

void fn_82BB5528(Slots_82BB5528 *self, Node_82BB5528 *node)
{
    Node_82BB5528 **slots = self->slots;
    if (node->instruction->vtable->test34(node->instruction)) {
        fn_82BBFE78(self->list, node);
    } else if (!node->instruction->vtable->test18(node->instruction) &&
               (unsigned char)lbl_8316FF50[node->instruction->opcode].paired) {
        if (slots[1] != 0) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "slots[1] == 0",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics"
                        "\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",
                        0x13a);
        }
        slots[1] = node;
    } else {
        if (slots[0] != 0) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "slots[0] == 0",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics"
                        "\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",
                        0x137);
        }
        slots[0] = node;
    }
}
