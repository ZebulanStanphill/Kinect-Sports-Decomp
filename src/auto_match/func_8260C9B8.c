typedef struct It_8260C9B8 { int d[2]; } It_8260C9B8;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_827DDDA0(It_8260C9B8 *it, char *list);
extern void fn_827DEB38(It_8260C9B8 *it);
extern unsigned char fn_827DEB60(It_8260C9B8 *it);
extern void *fn_827DEAA8(It_8260C9B8 *it);
extern int fn_827D9698(void);
extern int fn_827D96A0(void *p);
extern unsigned int fn_827DDDD8(void *s, int *key);
extern void fn_827DDFB8(void *s, void *p);
extern void fn_827DEA98(It_8260C9B8 *it);

int fn_8260C9B8(char *self, int *key, void *set)
{
  int k;
  void *p;
  It_8260C9B8 it;

  RtlEnterCriticalSection(self + 0x1a0);
  fn_827DDDA0(&it, self + 200);
  fn_827DEB38(&it);
  while (fn_827DEB60(&it) == 0) {
    p = fn_827DEAA8(&it);
    if (fn_827D9698() == *key) {
      k = fn_827D96A0(p);
      if (fn_827DDDD8(set, &k) == 0) {
        fn_827DDFB8(set, p);
      }
    }
    fn_827DEA98(&it);
  }
  RtlLeaveCriticalSection(self + 0x1a0);
  return 0;
}
