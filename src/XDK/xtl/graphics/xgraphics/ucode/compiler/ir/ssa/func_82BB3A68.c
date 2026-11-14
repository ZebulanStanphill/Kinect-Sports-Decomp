typedef struct Instr_82BB3A68 Instr_82BB3A68;
typedef struct {
    int pad0;
    unsigned int count;
    Instr_82BB3A68 **items;
} Array_82BB3A68;
typedef struct Block_82BB3A68 {
    char pad0[8];
    int next;
    char padc[0x3c - 0xc];
    Array_82BB3A68 *instrs;
} Block_82BB3A68;
typedef struct {
    char pad0[0x88];
    Block_82BB3A68 *blocks;
} Program_82BB3A68;

extern unsigned char fn_82BC5A98(Block_82BB3A68 *block);
extern unsigned char fn_82BC5A80(Instr_82BB3A68 *instr);

static unsigned char GetAt(Array_82BB3A68 *a, unsigned int index, Instr_82BB3A68 **out)
{
    if (index + 1 > a->count)
        return 0;
    *out = a->items[index];
    return 1;
}

int fn_82BB3A68(Program_82BB3A68 *self)
{
    Block_82BB3A68 *b;
    for (b = self->blocks; b->next != 0; b = (Block_82BB3A68 *)b->next) {
        if (fn_82BC5A98(b)) {
            Instr_82BB3A68 *instr = 0;
            unsigned int i;
            for (i = 0; GetAt(b->instrs, i, &instr); i++) {
                if (fn_82BC5A80(instr))
                    return 0;
            }
        }
    }
    return 1;
}
