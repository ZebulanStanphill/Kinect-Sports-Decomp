extern void *fn_825A27B8(void *self);
extern int fn_825F6B28(void *self, void *start, void *end, float radius);
extern int fn_825D30C8(void *scene, void *basis, void *transform, void *filter, void *start, void *end,
                       float radius, unsigned int mask, void *details, int flags);

typedef struct FilterOwner_825F6BE8 {
    char *model; /* 0x00: owner + 0x4c */
    char padding2[0x870];
    void **entries; /* 0x874: owner + 0x8c0 */
} FilterOwner_825F6BE8;

static __forceinline void *Filter_825F6BE8(FilterOwner_825F6BE8 *self)
{
    if (self->model == 0) {
        return 0;
    }
    if (self->entries == 0) {
        return 0;
    }
    return self->entries[*(int *)(self->model + 0x44) + 0x20];
}

int fn_825F6BE8(char *self, void *start, void *end, float radius, unsigned int mask, int flags)
{
    void *scene = fn_825A27B8(self);
    if (scene == 0) {
        return 0;
    }
    if ((mask = *(unsigned int *)(self + 0x8ac) & mask) == 0) {
        return 0;
    }
    if (fn_825F6B28(self, start, end, radius) != 0) {
        return 0;
    }
    {
        void *basis = self + 0xf0;
        void *transform = self + 0x130;
        char *details = *(char **)(self + 0x8c0) != 0 ? *(char **)(self + 0x8c0) + 0x144 : 0;
        void *filter = Filter_825F6BE8((FilterOwner_825F6BE8 *)(self + 0x4c));
        return fn_825D30C8(scene, basis, transform, filter, start, end, radius, mask, details, flags);
    }
}
