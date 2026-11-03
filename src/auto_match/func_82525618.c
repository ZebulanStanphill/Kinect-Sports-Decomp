extern void *fn_827EF640(int);
extern void *fn_827F0298(void *, int, int, int);
extern void fn_82524C20(void *);
extern void fn_82524968(void *);
extern void fn_82524E38(void *);

void *fn_82525618(char *p)
{
  void *m;
  void *r;
  if (*(void **)(p + 0xb7c) == 0) fn_82524968(p);
  m = fn_827EF640(0x130);
  r = m ? fn_827F0298(m, *(int *)(p + 0xb7c), 0, 0) : 0;
  *(void **)(p + 0xb68) = r;
  if (*(int *)(p + 0xb80) == 0) fn_82524C20(p);
  if (*(int *)(p + 0x1c0) == 3 && *(int *)(p + 0x9bc) == 0) {
    fn_82524E38(p);
    *(int *)(p + 0x9bc) = 1;
  }
  return *(void **)(p + 0xb68);
}
