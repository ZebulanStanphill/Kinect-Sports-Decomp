typedef struct Pool_82DB0258 {
    char pad[0x5c];
    char **blocks;
    int numBlocks;
} Pool_82DB0258;

Pool_82DB0258 *fn_82DB0258(char *p, Pool_82DB0258 *a, Pool_82DB0258 *b)
{
    char aSmaller = b->numBlocks >= a->numBlocks;
    Pool_82DB0258 *small = aSmaller ? a : b;
    int n = small->numBlocks;
    char found = 0;
    int i;

    i = 0;
    if (0 < n) {
        char **blk = small->blocks;
        do {
            if (*blk <= p && p < *blk + 0x200) {
                found = 1;
                break;
            }
            i++;
            blk++;
        } while (i < n);
    }
    if ((found != 0) ^ (aSmaller != 0))
        return b;
    return a;
}
