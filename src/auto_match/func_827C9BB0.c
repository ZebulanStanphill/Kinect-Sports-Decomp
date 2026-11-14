typedef struct Info_827C9BB0 Info_827C9BB0;

typedef struct Memory_827C9BB0 {
    void *(*alloc_small)(Info_827C9BB0 *cinfo, int pool_id, unsigned int size);
} Memory_827C9BB0;

typedef struct Component_827C9BB0 {
    char pad[0x50];
    unsigned char *table;
} Component_827C9BB0;

typedef struct Entropy_827C9BB0 {
    void (*start_pass)(void);
    char pad[0x2c - 4];
    int last[10];
} Entropy_827C9BB0;

struct Info_827C9BB0 {
    int f0;
    Memory_827C9BB0 *mem;
    char pad8[0x24 - 8];
    int num_components;
    char pad28[0xc4 - 0x28];
    Component_827C9BB0 *comp_info;
    char padE0[0x19c - 0xc8];
    Entropy_827C9BB0 *entropy;
};

extern void fn_827C9958(void);
void *memset(void *dst, int c, unsigned int n);

void fn_827C9BB0(Info_827C9BB0 *cinfo)
{
    Entropy_827C9BB0 *entropy;
    Component_827C9BB0 *compptr;
    int ci;

    entropy = (Entropy_827C9BB0 *)(*cinfo->mem->alloc_small)(cinfo, 1, 0x54);
    cinfo->entropy = entropy;
    entropy->start_pass = fn_827C9958;
    for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
        compptr->table = (unsigned char *)(*cinfo->mem->alloc_small)(cinfo, 1, 0x100);
        memset(compptr->table, 0, 0x100);
        entropy->last[ci] = -1;
    }
}
