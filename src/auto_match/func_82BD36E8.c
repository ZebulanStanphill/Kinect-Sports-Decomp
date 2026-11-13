typedef struct Ent_82BD36E8 { int active; unsigned v; char a[8]; char b[8]; } Ent_82BD36E8;
typedef struct Mgr_82BD36E8 {
  char pad[0x50];
  void *h[4];
  char pad2[0xf0 - 0x60];
  char cs[1];
} Mgr_82BD36E8;
extern Ent_82BD36E8 lbl_8329F000[];
extern Mgr_82BD36E8 *lbl_83223F40;
extern void fn_82BD4A10(Mgr_82BD36E8 *, unsigned);
extern void fn_82BD6C80(void *, void *, void *, unsigned *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

void fn_82BD36E8(void)
{
  unsigned i;
  void *h;
  for (i = 0; i < 4; i++) {
    RtlEnterCriticalSection(lbl_83223F40->cs);
    h = lbl_83223F40->h[i];
    if (h != 0) {
      lbl_8329F000[i].active = 1;
      fn_82BD6C80(h, lbl_8329F000[i].a, lbl_8329F000[i].b, &lbl_8329F000[i].v);
      RtlLeaveCriticalSection(lbl_83223F40->cs);
      fn_82BD4A10(lbl_83223F40, i);
    } else {
      lbl_8329F000[i].active = 0;
      RtlLeaveCriticalSection(lbl_83223F40->cs);
    }
  }
}
