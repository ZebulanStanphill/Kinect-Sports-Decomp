typedef void (*Callback_82839198)(unsigned int value, unsigned int *slot);

typedef struct Slot_82839198 {
    unsigned int value; /* 0x0 */
    char pad4[8];
    unsigned int bound; /* 0xc */
} Slot_82839198;

typedef struct Table_82839198 {
    char pad0[0x1c];
    Slot_82839198 *slots; /* 0x1c */
    int slotCount;        /* 0x20 */
} Table_82839198;

typedef struct Source_82839198 {
    unsigned int handle;   /* 0x0 */
    Table_82839198 *table; /* 0x4 */
} Source_82839198;

typedef struct Target_82839198 {
    unsigned int value;  /* 0x0 */
    unsigned int handle; /* 0x4 */
} Target_82839198;

typedef struct Binding_82839198 {
    Source_82839198 *source; /* 0x0 */
    Target_82839198 *target; /* 0x4 */
    int unk8;                /* 0x8 */
} Binding_82839198;

typedef struct Program_82839198 {
    char pad0[0x20];
    unsigned int bindingCount;  /* 0x20 */
    Binding_82839198 *bindings; /* 0x24 */
} Program_82839198;

extern Callback_82839198 lbl_83211304[];
extern void fn_82839000(unsigned int handle);
extern void fn_82631738(unsigned int dst, unsigned int src);

int fn_82839198(void *context, Program_82839198 *program)
{
    Program_82839198 *shader = program;
    unsigned int i;
    Table_82839198 *table;
    int j;

    for (i = 0; i < shader->bindingCount; i++) {
        fn_82839000(shader->bindings[i].source->handle);
        if (shader->bindings[i].target->handle != 0) {
            fn_82631738(shader->bindings[i].target->handle, shader->bindings[i].target->value);
        }
        table = shader->bindings[i].source->table;
        for (j = 0; j < table->slotCount; j++) {
            if (table->slots[j].bound == 0 && lbl_83211304[2] != 0) {
                lbl_83211304[2](table->slots[j].value, &table->slots[j].bound);
            }
        }
    }
    return 0;
}
