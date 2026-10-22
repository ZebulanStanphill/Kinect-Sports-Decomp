extern int fn_826EB760();

typedef struct Item {
    unsigned int a;
    unsigned int b;
} Item;

typedef struct Pool {
    unsigned int count;
    unsigned int numBlocks;
    unsigned int unk8;
    Item **blocks;
} Pool;

void fn_826EBD10(Pool *param_1, Item *param_2)
{
    unsigned int block;

    block = param_1->count >> 8;
    if (block >= param_1->numBlocks) {
        fn_826EB760(param_1, block);
    }
    param_1->blocks[block][param_1->count & 0xff] = *param_2;
    param_1->count++;
}
