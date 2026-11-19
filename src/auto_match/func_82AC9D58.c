typedef struct Link_82AC9D58 {
    unsigned int prev; /* 0x00 */
    unsigned int next; /* 0x04: tagged link, bit 0 set = end of list */
} Link_82AC9D58;

typedef struct Instr_82AC9D58 {
    int pad0;
    int pad4;
    unsigned int flags; /* 0x08 */
    char pad0C[0x1c];
    unsigned int next; /* 0x28: tagged link, bit 0 set = end of list */
} Instr_82AC9D58;

typedef struct Block_82AC9D58 {
    Link_82AC9D58 link; /* 0x00 */
    char pad08[8];
    Link_82AC9D58 instrs; /* 0x10 */
} Block_82AC9D58;

typedef struct Compiler_82AC9D58 {
    Link_82AC9D58 blocks; /* 0x00 */
    char pad08[0x24];
    unsigned int options; /* 0x2c */
} Compiler_82AC9D58;

typedef struct Alloc_82AC9D58 {
    Compiler_82AC9D58 *device; /* 0x00 */
    int pad4;
    unsigned __int64 a[4]; /* 0x08 */
    unsigned __int64 b[4]; /* 0x28 */
    unsigned int count;    /* 0x48 */
} Alloc_82AC9D58;

extern void fn_82AC8E50(Alloc_82AC9D58 *self, Compiler_82AC9D58 *device);
extern void fn_82AC91D0(Compiler_82AC9D58 *compiler, Block_82AC9D58 *block, unsigned char flag,
                        Alloc_82AC9D58 *alloc);
extern unsigned char fn_82ABE2E0(Instr_82AC9D58 *instr);
extern void fn_82B8AC10(Compiler_82AC9D58 *compiler, Instr_82AC9D58 *instr, int pass, int flag);

static __forceinline Block_82AC9D58 *FirstBlock_82AC9D58(Compiler_82AC9D58 *compiler)
{
    if (compiler->blocks.next & 1) {
        return 0;
    }
    return (Block_82AC9D58 *)compiler->blocks.next;
}

static __forceinline Block_82AC9D58 *NextBlock_82AC9D58(Block_82AC9D58 *block)
{
    unsigned int next = ((Block_82AC9D58 *)((unsigned int)block & ~1u))->link.next;

    if (next & 1) {
        return 0;
    }
    return (Block_82AC9D58 *)next;
}

static __forceinline Instr_82AC9D58 *FirstInstr_82AC9D58(Block_82AC9D58 *block)
{
    if (block->instrs.next & 1) {
        return 0;
    }
    return (Instr_82AC9D58 *)block->instrs.next;
}

static __forceinline Instr_82AC9D58 *NextInstr_82AC9D58(Instr_82AC9D58 *instr)
{
    unsigned int next = ((Instr_82AC9D58 *)((unsigned int)instr & ~1u))->next;

    if (next & 1) {
        return 0;
    }
    return (Instr_82AC9D58 *)next;
}

void fn_82AC9D58(Compiler_82AC9D58 *compiler)
{
    Alloc_82AC9D58 alloc;
    Block_82AC9D58 *block;
    Instr_82AC9D58 *instr;
    Instr_82AC9D58 *prev;
    unsigned char flag;

    fn_82AC8E50(&alloc, compiler);
    for (block = FirstBlock_82AC9D58(compiler); block != 0; block = NextBlock_82AC9D58(block)) {
        if ((compiler->options & 0x10) != 0 && (compiler->options & 0x20) == 0) {
            flag = 1;
        } else {
            flag = 0;
        }
        fn_82AC91D0(compiler, block, flag == 0, &alloc);
    }
    prev = 0;
    instr = FirstInstr_82AC9D58(FirstBlock_82AC9D58(compiler));
    while (instr != 0) {
        if ((instr->flags & 0x3f80) == 0x3e80 && fn_82ABE2E0(instr)) {
            fn_82B8AC10(compiler, instr, 0, 1);
        }
        if (prev != 0) {
            if (instr == NextInstr_82AC9D58(prev)) {
                prev = instr;
                instr = NextInstr_82AC9D58(instr);
            } else {
                instr = NextInstr_82AC9D58(prev);
            }
        } else {
            if (instr == FirstInstr_82AC9D58(FirstBlock_82AC9D58(compiler))) {
                prev = instr;
                instr = NextInstr_82AC9D58(instr);
            } else {
                instr = FirstInstr_82AC9D58(FirstBlock_82AC9D58(compiler));
            }
        }
    }
}
