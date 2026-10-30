typedef struct E_8277C2A0 { int a; int b; int c; } E;
typedef struct Self_8277C2A0 { char pad[0x98]; int *data; char pad2[0x14]; int *map; char pad3[0x14]; E **chunks; } Self;
void fn_8277C2A0(Self *s, unsigned int lo, unsigned int hi)
{
  unsigned int i;
  for (i = lo; i < hi; i++) {
    int *data = s->data;
    E *e = &s->chunks[i >> 6][i & 0x3f];
    int o2 = s->map[e->b];
    int o1 = s->map[e->a];
    int t = data[o1];
    data[o1] = data[o2];
    data[o2] = t;
    {
      int b = e->b;
      int a = e->a;
      int *m = s->map;
      int u = m[a];
      m[a] = m[b];
      m[b] = u;
    }
  }
}
