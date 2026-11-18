typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Command_82D95A28 {
    short type; /* 0x00 */
    char pad02[0xe];
    short size; /* 0x10 */
    char pad12[0xe];
    __vector4 a; /* 0x20 */
    __vector4 b; /* 0x30 */
} Command_82D95A28;

typedef struct Heap_82D95A28 {
    struct {
        char pad[4];
        void *(*blockAlloc)(struct Heap_82D95A28 *heap, int size); /* 0x04 */
    } *vt;
} Heap_82D95A28;

typedef struct Router_82D95A28 {
    char pad[0x10];
    Heap_82D95A28 *heap; /* 0x10 */
} Router_82D95A28;

typedef struct Stream_82D95A28 {
    char pad[8];
    void *owner; /* 0x08 */
} Stream_82D95A28;

extern Command_82D95A28 *fn_82DBBD28(Stream_82D95A28 *stream, int type);
extern Router_82D95A28 *fn_82CE5410(void);
extern void fn_82DBBF60(Stream_82D95A28 *stream, void *owner, Command_82D95A28 *command);

void fn_82D95A28(Stream_82D95A28 *stream, const __vector4 *a, const __vector4 *b)
{
    Command_82D95A28 *command = fn_82DBBD28(stream, 0x18);

    if (command != 0) {
        command->a = *a;
        command->b = *b;
    } else {
        Heap_82D95A28 *heap = fn_82CE5410()->heap;
        Command_82D95A28 *block = (Command_82D95A28 *)heap->vt->blockAlloc(heap, 0x40);

        if (block != 0) {
            block->type = 0x18;
            block->size = 0x40;
            command = block;
        } else {
            command = 0;
        }
        command->a = *a;
        command->b = *b;
        fn_82DBBF60(stream, stream->owner, command);
    }
}
