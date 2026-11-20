#define __lwsync() __emit(0x7C2004AC)

typedef struct Node_82813680 {
    struct Node_82813680 *next;
} Node_82813680;

typedef union Tagged_82813680 {
    __int64 value;

    struct {
        Node_82813680 *top;
        unsigned int count;
    } parts;
} Tagged_82813680;

typedef struct Stack_82813680 {
    __int64 head;
    __int64 pad8;
    __int64 barrier;
} Stack_82813680;

typedef struct Swap_82813680 {
    Tagged_82813680 old;
    Node_82813680 *node;
    Stack_82813680 *stack;
} Swap_82813680;

extern unsigned char fn_82813428(Swap_82813680 *swap);

void fn_82813680(Stack_82813680 *stack, Node_82813680 *node)
{
    Swap_82813680 swap;
    unsigned char same;
    unsigned char needSync;

    if (node == 0) {
        return;
    }
    do {
        do {
            swap.stack = stack;
            swap.old.value = stack->head;
            node->next = swap.old.parts.top;
            same = swap.old.value == swap.stack->head;
        } while (!same);
        needSync = stack->barrier == 0;
        if (needSync) {
            __lwsync();
        }
        swap.node = node;
    } while (!fn_82813428(&swap));
}
