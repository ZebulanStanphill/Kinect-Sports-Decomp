// Releases the four pointers at the start of a block through fn_82AC6808, then pushes
// the block onto the list at owner+0x2c0 and decrements the count at owner+0x2bc.
// Every caller of fn_82AC6808 passes a fourth argument (0 here; 0x24, 0x26, 0x31 and
// others elsewhere), although fn_82AC6808 itself never reads it.
typedef struct Block_82ADDE40 {
    void *ptrs[4];                 // ptrs[0] links the block once it is on the list
    int pad[44];
    unsigned int flags;            // 0xc0
} Block_82ADDE40;

typedef struct Owner_82ADDE40 {
    char pad[0x2a0];
    int x2a0;
    char pad2[0x2bc - 0x2a4];
    int x2bc;
    Block_82ADDE40 *x2c0;
} Owner_82ADDE40;

extern void fn_82AC6808(Owner_82ADDE40 *owner, void *p, int size, int tag);

void fn_82ADDE40(Owner_82ADDE40 *owner, Block_82ADDE40 *block)
{
    void **p = block->ptrs;
    int i = 4;

    do {
        if (*p != 0)
            fn_82AC6808(owner, *p, owner->x2a0 << 3, 0);
        i--;
        p++;
    } while (i != 0);
    block->flags &= ~7u;
    block->ptrs[0] = owner->x2c0;
    owner->x2c0 = block;
    owner->x2bc--;
}
