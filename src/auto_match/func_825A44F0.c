typedef struct { unsigned char found; } Res_825A44F0;
typedef struct { void *entries; int x4; int mask; } Map_825A44F0;
extern int fn_82CEA220(Map_825A44F0 *m, int key);

/* Hash-map lookup wrapper: fn_82CEA220 returns the slot index or mask + 1. */
Res_825A44F0 *fn_825A44F0(Res_825A44F0 *out, Map_825A44F0 *m, int key)
{
  int i = fn_82CEA220(m, key);
  out->found = i <= m->mask;
  return out;
}
