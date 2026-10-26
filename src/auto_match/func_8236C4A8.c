typedef struct { void **first; void **last; } List;
typedef struct { char pad[0x20]; List **lists; } Self;
extern int fn_824CD030(void *p);
int fn_8236C4A8(Self *self, int i)
{
    int n = 0;
    List *l = self->lists[i];
    void **b = l->first;
    void **end = l->last;
    void **it = b;
    if (b != end) {
        do {
            if (fn_824CD030(*it))
                n++;
            it++;
        } while (it != end);
    }
    return n;
}
