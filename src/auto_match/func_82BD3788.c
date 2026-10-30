typedef struct Ent_82BD3788 { int active; unsigned v; char a[8]; char b[8]; } Ent_82BD3788;
typedef struct Mgr_82BD3788 {
  char pad[0x50];
  void *h[4];
  char pad2[0xf0 - 0x60];
  char cs[1];
} Mgr_82BD3788;
extern Ent_82BD3788 lbl_8329F000[];
extern Mgr_82BD3788 *lbl_83223F40;
extern int fn_82BD4970(Mgr_82BD3788 *, int);
extern void fn_82BD6B68(void *, void *, void *, unsigned);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

void fn_82BD3788(void)
{
  unsigned i;
  for (i = 0; i < 4; i++) {
    if (lbl_8329F000[i].active != 0 && fn_82BD4970(lbl_83223F40, i) >= 0) {
      RtlEnterCriticalSection(lbl_83223F40->cs);
      fn_82BD6B68(lbl_83223F40->h[i], lbl_8329F000[i].a, lbl_8329F000[i].b, lbl_8329F000[i].v);
      RtlLeaveCriticalSection(lbl_83223F40->cs);
    }
  }
}
