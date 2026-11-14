typedef struct {
    unsigned int v[3];
} Triple_828622E8;

extern void fn_82810360(const Triple_828622E8 *src, Triple_828622E8 *dst);

void fn_828622E8(Triple_828622E8 *items, int unused1, int kind, int unused3, int index,
                 const Triple_828622E8 *value)
{
    if (kind == 1)
        fn_82810360(value, &items[index]);
}
