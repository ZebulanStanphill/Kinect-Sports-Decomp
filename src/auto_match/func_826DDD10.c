extern int fn_826DBE10(void *, void *, void *, unsigned);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
typedef struct { unsigned a; unsigned b; } Res_826DDD10;
typedef struct { char pad[0x74]; int lv; char pad2[0xa8-0x78]; unsigned cnt; char cs[0x1c]; char tab[1]; } Map_826DDD10;
typedef struct { unsigned *key; Res_826DDD10 *out; } Args_826DDD10;

Res_826DDD10 *fn_826DDD10(Res_826DDD10 *out, Map_826DDD10 *m, unsigned *key)
{
  Map_826DDD10 *locked = 0;
  Args_826DDD10 a;
  unsigned c = m->cnt;
  out->a = 1;
  out->b = c;
  m->cnt = m->cnt + 1;
  if (m->lv < 2) {
    locked = m;
    RtlEnterCriticalSection(m->cs);
  }
  a.key = key;
  a.out = out;
  fn_826DBE10(m->tab, m->tab, &a, (*key >> 8) ^ *key);
  if (locked != 0) {
    RtlLeaveCriticalSection(locked->cs);
  }
  return out;
}
