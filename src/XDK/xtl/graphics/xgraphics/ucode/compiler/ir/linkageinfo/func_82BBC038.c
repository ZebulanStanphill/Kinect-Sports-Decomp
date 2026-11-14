typedef struct {
    char pad0[0x3d0];
    int depth[0x10];
    int order[0x10];
} Linkage_82BBC038;

int fn_82BBC038(Linkage_82BBC038 *self, int a, int b)
{
    if (self->depth[a] < self->depth[b])
        return -1;
    if (self->depth[a] > self->depth[b])
        return 1;
    if (self->order[a] > self->order[b])
        return -1;
    if (self->order[a] < self->order[b])
        return 1;
    return 0;
}
