typedef struct Block_825A23C0 {
    unsigned short count;
    unsigned short stride;
    char *begin;
    char *cur;
    char *end;
} Block_825A23C0;

extern void *fn_82522D98(unsigned int size);

Block_825A23C0 *fn_825A23C0(int count, int stride)
{
    int size = count * stride;
    Block_825A23C0 *b = (Block_825A23C0 *)fn_82522D98(size + sizeof(Block_825A23C0));
    char *data;
    b->count = count;
    if (stride == 0)
        stride = 10;
    b->stride = stride;
    data = (char *)(b + 1);
    b->begin = data;
    b->cur = data;
    b->end = data + size;
    return b;
}
