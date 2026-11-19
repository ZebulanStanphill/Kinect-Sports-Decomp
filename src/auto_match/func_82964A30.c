typedef struct Tables_82964A30 {
    int pad0;
    unsigned int nodeCount;    /* 0x04 */
    unsigned int edgeCount;    /* 0x08 */
    unsigned int faceCount;    /* 0x0c */
    void **nodes;              /* 0x10 */
    void **edges;              /* 0x14 */
    void **faces;              /* 0x18 */
    unsigned int nodeCapacity; /* 0x1c */
    unsigned int edgeCapacity; /* 0x20 */
    unsigned int faceCapacity; /* 0x24 */
} Tables_82964A30;

extern void *fn_8265C9E0(unsigned int size);
extern int fn_82964760(Tables_82964A30 *self, void *item);
extern int fn_829647E8(Tables_82964A30 *self, void *item);
extern int fn_82964868(Tables_82964A30 *self, void *item);

int fn_82964A30(Tables_82964A30 *self, Tables_82964A30 *source)
{
    unsigned int i;
    unsigned int count;

    self->nodeCount = 0;
    count = source->nodeCount;
    self->nodeCapacity = count;
    self->nodes = (void **)fn_8265C9E0(count <= 0x3fffffff ? count * 4 : 0xffffffff);
    if (self->nodes == 0) {
        return 0x8007000E;
    }
    i = 0;
    if (i < source->nodeCount) {
        do {
            if (fn_82964760(self, source->nodes[i]) == -1) {
                return 0x8007000E;
            }
            i++;
        } while (i < source->nodeCount);
    }
    self->edgeCount = 0;
    count = source->edgeCount;
    self->edgeCapacity = count;
    self->edges = (void **)fn_8265C9E0(count <= 0x3fffffff ? count * 4 : 0xffffffff);
    if (self->edges == 0) {
        return 0x8007000E;
    }
    for (i = 0; i < source->edgeCount; i++) {
        if (fn_829647E8(self, source->edges[i]) == -1) {
            return 0x8007000E;
        }
    }
    self->faceCount = 0;
    count = source->faceCount;
    self->faceCapacity = count;
    self->faces = (void **)fn_8265C9E0(count <= 0x3fffffff ? count * 4 : 0xffffffff);
    if (self->faces == 0) {
        return 0x8007000E;
    }
    for (i = 0; i < source->faceCount; i++) {
        if (fn_82964868(self, source->faces[i]) == -1) {
            return 0x8007000E;
        }
    }
    return 0;
}
