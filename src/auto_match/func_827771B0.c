typedef struct { int first; int second; } Pair_827771B0;
typedef struct { char **p; int idx; } Iter_827771B0;
typedef struct { Pair_827771B0 pr; Iter_827771B0 it; } Loc_827771B0;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned char fn_826A8E58(Iter_827771B0 *it, Pair_827771B0 *pr);
extern void fn_8276D860(void *a, void *b);
extern void fn_827741E8(Iter_827771B0 *it);
extern void fn_82774A58(void *p);
extern void fn_82774B68(void *p);
extern void fn_827750F8(void *a, void *b);
extern void fn_82776DD8(void *p);
extern void fn_8278C110(Iter_827771B0 *it, void *v);
extern void fn_827B02B0(void *p);
extern void fn_827B0A40(void *p);

void fn_827771B0(char *self)
{
  Loc_827771B0 L;
  RtlEnterCriticalSection(self + 0x9e4);
  fn_82776DD8(self);
  *(char **)(self + 0x38) = self + 0x38;
  *(char **)(self + 0x3c) = self + 0x38;
  fn_82774A58(self + 0x24);
  fn_8278C110(&L.it, self + 0x8e0);
  L.pr.first = 0;
  L.pr.second = 0;
  if (fn_826A8E58(&L.it, &L.pr) == 0) {
    char *s8 = self + 8;
    L.pr.first = 0;
    L.pr.second = 0;
    do {
      fn_8276D860(*(void **)(*L.it.p + L.it.idx * 0xc + 0x10), s8);
      fn_827741E8(&L.it);
    } while (fn_826A8E58(&L.it, &L.pr) == 0);
  }
  fn_827B0A40(self + 0x8e0);
  fn_827750F8(self + 0x8f8, self + 0x8e4);
  fn_82774B68(self + 0x8e4);
  fn_827B02B0(self + 0x900);
  RtlLeaveCriticalSection(self + 0x9e4);
}
