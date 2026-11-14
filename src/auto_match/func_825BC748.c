typedef struct Target_825BC748 {
    char pad0[0xc];
    void *first;
    void *second;
} Target_825BC748;

extern void fn_825BC5E0(void *self, Target_825BC748 *target, void *source, int index,
                        float x, float y, int flag, int mode);

static __forceinline int IsSet(void **p)
{
    int result;
    result = p != 0 ? *p != 0 : 0;
    return result;
}
static __forceinline void Reset(void **p, void *v)
{
    if (*p == v && IsSet(p))
        *p = 0;
}
void fn_825BC748(void *self, Target_825BC748 *target, void *source, int index, float x, float y)
{
    fn_825BC5E0(self, target, source, index, x, y, 1, 0);
    if (IsSet(&target->first))
        Reset(&target->first, target->first);
    if (IsSet(&target->second))
        target->second = 0;
}
