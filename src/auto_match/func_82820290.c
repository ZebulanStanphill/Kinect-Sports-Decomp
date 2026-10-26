typedef struct { char pad[0x14]; int v; int pad2; } E;
typedef struct { char pad[0x28]; unsigned char *map; int pad2; E *items; } S;

void fn_82820290(S *s, unsigned int idx, int *out)
{
    if (idx >= 3) {
        unsigned int m = s->map[idx - 3];
        if (m == 0) {
            *out = m;
            return;
        }
        idx = m + 2;
    }
    *out = s->items[idx].v;
}
