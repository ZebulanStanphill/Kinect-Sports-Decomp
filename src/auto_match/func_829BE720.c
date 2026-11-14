typedef struct Info_829BE720 Info_829BE720;

typedef struct Memory_829BE720 {
    void *(*alloc_small)(Info_829BE720 *cinfo, int pool_id, unsigned int size);
} Memory_829BE720;

typedef struct Component_829BE720 {
    char pad[0x50];
    unsigned char *table;
} Component_829BE720;

typedef struct Entropy_829BE720 {
    void (*start_pass)(void);
    char pad[0x2c - 4];
    int last[10];
} Entropy_829BE720;

struct Info_829BE720 {
    int f0;
    Memory_829BE720 *mem;
    char pad8[0x24 - 8];
    int num_components;
    char pad28[0xdc - 0x28];
    Component_829BE720 *comp_info;
    char padE0[0x1c4 - 0xe0];
    Entropy_829BE720 *entropy;
};

extern void fn_829BE330(void);
void *memset(void *dst, int c, unsigned int n);

void fn_829BE720(Info_829BE720 *cinfo)
{
    Entropy_829BE720 *entropy;
    Component_829BE720 *compptr;
    int ci;

    entropy = (Entropy_829BE720 *)(*cinfo->mem->alloc_small)(cinfo, 1, 0x54);
    cinfo->entropy = entropy;
    entropy->start_pass = fn_829BE330;
    for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
        compptr->table = (unsigned char *)(*cinfo->mem->alloc_small)(cinfo, 1, 0x100);
        memset(compptr->table, 0, 0x100);
        entropy->last[ci] = -1;
    }
}
