typedef struct It { void **cur; void **begin; } It;
extern void fn_826824B0(void *p);
extern void fn_826AABD0(It *it);

void fn_826AE4E8(It *it, unsigned int n)
{
    for (; n != 0; n--) { void *p = *it->cur; if (p != 0) fn_826824B0(p); if (--it->cur < it->begin) fn_826AABD0(it); }
}
