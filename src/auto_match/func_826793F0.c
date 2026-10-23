extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82679378();
extern int fn_8267A1C0();

typedef struct {
  char pad[0x21f8];
  char *items;
  unsigned int count;
  int pad2;
  char cs[0x1c];
} Mgr;

void fn_826793F0(Mgr *m)
{
  unsigned int i;

  RtlEnterCriticalSection(m->cs);
  for (i = 0; i < m->count; i++) {
    fn_8267A1C0(m->items + i * 0xc);
  }
  fn_82679378(&m->items, 0);
  RtlLeaveCriticalSection(m->cs);
}
