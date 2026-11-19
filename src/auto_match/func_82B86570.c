typedef struct Use_82B86570 {
    char pad0[8];
    unsigned int : 10;
    unsigned int first : 3; /* 0x08 */
    unsigned int : 2;
    unsigned int second : 3;
    unsigned int opcode : 7;
    unsigned int : 7;
    char padc[0x28 - 0xc];
    unsigned int next; /* 0x28, tagged: bit 0 ends the list */
} Use_82B86570;

typedef struct Block_82B86570 {
    char pad0[0x10];
    int field10;       /* 0x10 */
    unsigned int uses; /* 0x14, tagged */
} Block_82B86570;

typedef struct Record_82B86570 {
    char pad0[0x1c];
    unsigned int *operands; /* 0x1c */
    char pad20[8];
} Record_82B86570;

typedef struct Context_82B86570 {
    int pad0;
    unsigned int block; /* 0x4, tagged */
    int pad8;
    Record_82B86570 *records; /* 0xc */
} Context_82B86570;

extern void fn_82AE7308(Context_82B86570 *self, unsigned int index);
extern unsigned int fn_82ABDD90(Context_82B86570 *self, unsigned int opcode, unsigned int first,
                                unsigned int second);
extern Use_82B86570 *fn_82B84C90(Context_82B86570 *self, unsigned int index, unsigned int slot,
                                 unsigned char resolve, int opcode, Block_82B86570 *block, unsigned int link);

static __forceinline Block_82B86570 *GetBlock(unsigned int link)
{
    if (link & 1) {
        return 0;
    }
    return (Block_82B86570 *)link;
}

static __forceinline Use_82B86570 *First(Block_82B86570 *block)
{
    if (block->uses & 1) {
        return 0;
    }
    return (Use_82B86570 *)block->uses;
}

static __forceinline Use_82B86570 *Next(Use_82B86570 *use)
{
    unsigned int p = ((Use_82B86570 *)((unsigned int)use & ~1u))->next;

    if (p & 1) {
        return 0;
    }
    return (Use_82B86570 *)p;
}

Use_82B86570 *fn_82B86570(Context_82B86570 *self, unsigned int index, unsigned int slot,
                          unsigned char resolve)
{
    Use_82B86570 *use;
    unsigned int word;
    unsigned int link;

    if (resolve) {
        if (self->records[index].operands == 0) {
            fn_82AE7308(self, index);
        }
        resolve = 0;
        slot = (self->records[index].operands[slot * 2] >> 4) & 0x3fff;
    }
    link = self->block;
    for (use = First(GetBlock(link)); use != 0; use = Next(use)) {
        if (use->opcode == 0x7c) {
            word =
                *(unsigned int *)((char *)use - 8 + fn_82ABDD90(self, use->opcode, use->first, use->second));
            if ((word & 0x7fff) == index && ((word >> 15) & 0x3fff) == slot) {
                return use;
            }
        }
    }
    return fn_82B84C90(self, index, slot, resolve, 0x7c, GetBlock(link),
                       (unsigned int)&GetBlock(link)->field10 | 3);
}
