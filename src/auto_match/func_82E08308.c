typedef struct { char pad[0xc]; void **items; int count; } Self;
extern __int64 fn_82E08BE0(void *item);

__int64 fn_82E08308(Self *s)
{
    __int64 sum = 0;
    int i;
    for (i = 0; i < s->count; i++) {
        sum += fn_82E08BE0(s->items[i]);
    }
    return sum;
}
