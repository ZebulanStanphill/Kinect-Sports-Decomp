extern void *memcpy(void *dst, const void *src, unsigned int size);
extern void *memmove(void *dst, const void *src, unsigned int size);
extern int fn_82825290(void *bigEndian);

typedef struct Patch_82824188 {
    int opCount;          /* 0x0 */
    int sourceSize;       /* 0x4 */
    int targetSize;       /* 0x8 */
    unsigned char ops[1]; /* 0xc */
} Patch_82824188;

void fn_82824188(unsigned char *source, int sourceSize, unsigned char *target, int targetSize,
                 Patch_82824188 *patch)
{
    unsigned char *data;
    unsigned char *ops;
    unsigned char *op;
    int sourcePos;
    int targetPos;
    int dataPos;
    int i;
    unsigned int kind;
    int length;
    patch->opCount = fn_82825290(&patch->opCount);
    patch->sourceSize = fn_82825290(&patch->sourceSize);
    patch->targetSize = fn_82825290(&patch->targetSize);
    ops = patch->ops;
    data = ops + patch->opCount * 5;
    sourcePos = 0;
    targetPos = 0;
    dataPos = 0;
    for (i = 0; i < patch->opCount; i++) {
        op = ops + i * 5;
        kind = op[0];
        length = fn_82825290(op + 1);
        switch (kind) {
        case 0:
            memmove(target + targetPos, source + sourcePos, length);
            targetPos += length;
            sourcePos += length;
            break;
        case 1:
            sourcePos += length;
            /* fall through */
        case 2:
            memcpy(target + targetPos, data + dataPos, length);
            targetPos += length;
            dataPos += length;
            break;
        case 3:
            sourcePos += length;
            break;
        }
    }
}
