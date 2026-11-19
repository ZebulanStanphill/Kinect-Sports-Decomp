typedef struct Block_82ADD330 {
    unsigned char pad00[8];
    void *function; /* 0x08 */
} Block_82ADD330;

typedef struct Instr_82ADD330 {
    unsigned char pad00[0x1c];
    Block_82ADD330 *block; /* 0x1c */
} Instr_82ADD330;

typedef struct Node_82ADD330 {
    unsigned char pad00[0x10];
    unsigned int size; /* 0x10 */
} Node_82ADD330;

typedef struct Packed_82ADD330 {
    unsigned char pad00[0x44];
    unsigned int flags : 4; /* 0x44 */
    unsigned int size : 28;
} Packed_82ADD330;

typedef struct Iterator_82ADD330 {
    Block_82ADD330 *block; /* 0x00 */
    int pad04;
    int position;            /* 0x08 */
    Node_82ADD330 *node;     /* 0x0c */
    void *current;           /* 0x10 */
    Packed_82ADD330 *packed; /* 0x14 */
    unsigned char done;      /* 0x18 */
} Iterator_82ADD330;

extern void fn_82B8F208(Iterator_82ADD330 *iterator, void *function);
extern Instr_82ADD330 *fn_82AC64B8(Iterator_82ADD330 *iterator);
extern unsigned int fn_82B41D68(void *compiler, Instr_82ADD330 *instr, Instr_82ADD330 *user, int a, int b);

void fn_82ADD330(void *compiler, Instr_82ADD330 *instr, unsigned int first, unsigned int second,
                 unsigned int *secondTotal, unsigned int *firstTotal)
{
    Iterator_82ADD330 iterator;
    Instr_82ADD330 *user;
    unsigned int use;
    unsigned int firstSum;
    unsigned int secondSum;
    unsigned int total;

    iterator.block = instr->block;
    iterator.position = 0;
    iterator.current = 0;
    iterator.packed = 0;
    iterator.done = 0;
    firstSum = 0;
    secondSum = 0;
    fn_82B8F208(&iterator, iterator.block->function);
    while ((user = fn_82AC64B8(&iterator)) != 0) {
        use = fn_82B41D68(compiler, instr, user, 0, 1);
        if (first == use) {
            if (iterator.current == 0) {
                firstSum += iterator.node->size;
            } else {
                firstSum += iterator.packed->size;
            }
        }
        if (second == use) {
            if (iterator.current == 0) {
                secondSum += iterator.node->size;
            } else {
                secondSum += iterator.packed->size;
            }
        }
    }
    total = *secondTotal + secondSum;
    if (total > 0xfffffff) {
        total = 0xfffffff;
    }
    *secondTotal = total;
    total = *firstTotal + firstSum;
    if (total > 0xfffffff) {
        total = 0xfffffff;
    }
    *firstTotal = total;
}
