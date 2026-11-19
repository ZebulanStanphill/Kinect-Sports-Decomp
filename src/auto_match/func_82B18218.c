typedef struct Use_82B18218 {
    void *value;               /* 0x0 */
    struct Use_82B18218 *next; /* 0x4 */
} Use_82B18218;

typedef struct Instr_82B18218 {
    Use_82B18218 *uses; /* 0x00 */
    unsigned char pad04[4];
    unsigned pad08_hi : 18; /* 0x08 */
    unsigned opcode : 7;
    unsigned pad08_lo : 7;
    unsigned char pad0c[0x1c];
    unsigned int next; /* 0x28: tagged link, bit 0 set = end of list */
} Instr_82B18218;

typedef struct Block_82B18218 {
    unsigned char pad00[8];
    void *function; /* 0x08 */
    unsigned char pad0c[8];
    unsigned int instrs; /* 0x14: tagged link to the first instruction */
} Block_82B18218;

typedef struct Iterator_82B18218 {
    Block_82B18218 *block; /* 0x00 */
    int pad04;
    int position; /* 0x08 */
    int pad0c;
    int current;        /* 0x10 */
    int end;            /* 0x14 */
    unsigned char done; /* 0x18 */
} Iterator_82B18218;

extern void fn_82B44B88(void *compiler);
extern void fn_82B8F208(Iterator_82B18218 *iterator, void *function);
extern Instr_82B18218 *fn_82AC64B8(Iterator_82B18218 *iterator);
extern Use_82B18218 *fn_82B41D68(void *compiler, Instr_82B18218 *instr, Instr_82B18218 *user, int a, int b);
extern void fn_82AD20C0(Instr_82B18218 *instr, Use_82B18218 *use, void *compiler);

static __forceinline Instr_82B18218 *FirstInstr(Block_82B18218 *block)
{
    if (block->instrs & 1) {
        return 0;
    }
    return (Instr_82B18218 *)block->instrs;
}

static __forceinline Instr_82B18218 *NextInstr(Instr_82B18218 *instr)
{
    Instr_82B18218 *node = (Instr_82B18218 *)((unsigned int)instr & ~1u);

    unsigned int next = node->next;

    if (next & 1) {
        return 0;
    }
    return (Instr_82B18218 *)next;
}

static __forceinline int NotNull(Use_82B18218 *use)
{
    if (use) {
        return 1;
    }
    return 0;
}

static __forceinline unsigned char HasUses(Instr_82B18218 *instr)
{
    return instr->uses != 0 && instr->uses->next != 0;
}

void fn_82B18218(void *compiler, Block_82B18218 *block, unsigned char *dirty)
{
    Instr_82B18218 *instr;
    Instr_82B18218 *user;
    Use_82B18218 **link;
    Use_82B18218 *use;
    Iterator_82B18218 iterator;

    for (instr = FirstInstr(block); instr != 0; instr = NextInstr(instr)) {
        if (instr->opcode != 0x70 || !HasUses(instr)) {
            continue;
        }
        if (*dirty != 0) {
            fn_82B44B88(compiler);
            *dirty = 0;
        }
        link = &instr->uses;
        while (NotNull(use = *link)) {
            iterator.block = block;
            iterator.position = 0;
            iterator.current = 0;
            iterator.end = 0;
            iterator.done = 0;
            fn_82B8F208(&iterator, block->function);
            for (user = fn_82AC64B8(&iterator); user != 0; user = fn_82AC64B8(&iterator)) {
                if (fn_82B41D68(compiler, instr, user, 0, 1) == use) {
                    break;
                }
            }
            if (user == 0) {
                fn_82AD20C0(instr, use, compiler);
            }
            if (*link == use) {
                link = &use->next;
            }
        }
    }
}
