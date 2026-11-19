typedef struct Instr_82AD2B40 Instr_82AD2B40;

typedef struct Use_82AD2B40 {
    int pad0;
    int pad4;
    struct Use_82AD2B40 *next; /* 0x08 */
    Instr_82AD2B40 *owner;     /* 0x0c */
    unsigned int value;        /* 0x10 */
} Use_82AD2B40;

struct Instr_82AD2B40 {
    int pad0;
    Use_82AD2B40 *uses; /* 0x04 */
    unsigned int flags; /* 0x08 */
    char pad0C[6];
    unsigned short operand; /* 0x12 */
    char pad14[0x14];
    unsigned int next; /* 0x28: tagged link, bit 0 set = end of list */
};

typedef struct Link_82AD2B40 {
    unsigned int prev; /* 0x00 */
    unsigned int next; /* 0x04 */
} Link_82AD2B40;

typedef struct Block_82AD2B40 {
    char pad0[0x10];
    Link_82AD2B40 instrs; /* 0x10 */
} Block_82AD2B40;

typedef struct Compiler_82AD2B40 {
    char pad0[0x28c];
    int pass; /* 0x28c */
} Compiler_82AD2B40;

extern unsigned int fn_82ADD198(Compiler_82AD2B40 *compiler, unsigned short operand);
extern void fn_82B8AC10(Compiler_82AD2B40 *compiler, Instr_82AD2B40 *instr, int pass, int flag);

static __forceinline Instr_82AD2B40 *First_82AD2B40(Link_82AD2B40 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Instr_82AD2B40 *)list->next;
}

static __forceinline Instr_82AD2B40 *Next_82AD2B40(Instr_82AD2B40 *instr)
{
    unsigned int next = ((Instr_82AD2B40 *)((unsigned int)instr & ~1u))->next;

    if (next & 1) {
        return 0;
    }
    return (Instr_82AD2B40 *)next;
}

static __forceinline int NotNull_82AD2B40(Use_82AD2B40 *use)
{
    if (use) {
        return 1;
    }
    return 0;
}

void fn_82AD2B40(Compiler_82AD2B40 *compiler, Block_82AD2B40 *block)
{
    Instr_82AD2B40 *instr;
    Instr_82AD2B40 *other;
    Instr_82AD2B40 *prev;
    Instr_82AD2B40 *next;
    Use_82AD2B40 **link;
    Use_82AD2B40 **slot;
    Use_82AD2B40 *use;
    unsigned int key;

    for (instr = First_82AD2B40(&block->instrs); instr != 0; instr = Next_82AD2B40(instr)) {
        if ((instr->flags & 0x3f80) != 0x3800) {
            continue;
        }
        key = fn_82ADD198(compiler, instr->operand);
        prev = 0;
        for (other = First_82AD2B40(&block->instrs); other != 0;) {
            if (instr == other) {
                break;
            }
            if ((other->flags & 0x3f80) == 0x3800 && key == fn_82ADD198(compiler, other->operand)) {
                link = &other->uses;
                while (NotNull_82AD2B40(use = *link)) {
                    if (use->value != 0) {
                        for (slot = &use->owner->uses; *slot != use; slot = &(*slot)->next) {
                        }
                        *slot = use->next;
                        use->next = instr->uses;
                        instr->uses = use;
                        use->owner = instr;
                    }
                    if (*link == use) {
                        link = &use->next;
                    }
                }
                fn_82B8AC10(compiler, other, compiler->pass, 1);
            }
            if (prev != 0) {
                if (other == Next_82AD2B40(prev)) {
                    prev = other;
                    other = Next_82AD2B40(other);
                } else {
                    other = Next_82AD2B40(prev);
                }
            } else {
                if (other == First_82AD2B40(&block->instrs)) {
                    prev = other;
                    other = Next_82AD2B40(other);
                } else {
                    other = First_82AD2B40(&block->instrs);
                }
            }
        }
    }
}
