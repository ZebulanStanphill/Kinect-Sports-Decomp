// Grow of a chunked container: a table of block pointers (0x400-byte blocks),
// grown by 0x40 entries when a new block is needed. The linker folded the
// identical Grow of two containers into this function (func_8277E600 stores
// 16-byte elements, func_8277E998 4-byte ones), so it keeps its fn_ name: the
// member's compiled name is mapped to fn_8277D098 in objects.json, and V_8277D098
// stands for both containers.

struct V_8277D098;

extern "C" void *fn_8267BDA8(void *, unsigned int);
extern "C" void *fn_8267BED0(V_8277D098 *, unsigned int, int *);

struct V_8277D098 {
    unsigned int size;    // elements stored
    unsigned int nblocks; // blocks allocated
    unsigned int cap;     // capacity of the block table
    void **blocks;
    void Grow(unsigned int idx); // reserves the table, allocates block idx
};

void V_8277D098::Grow(unsigned int idx)
{
    int a, b;
    if (idx >= cap) {
        void **p;
        if (blocks != 0) {
            p = (void **)fn_8267BDA8(blocks, (cap + 0x40) * 4);
        } else {
            a = 0x85;
            p = (void **)fn_8267BED0(this, 0x100, &a);
        }
        blocks = p;
        cap += 0x40;
    }
    b = 0x85;
    blocks[idx] = fn_8267BED0(this, 0x400, &b);
    nblocks++;
}
