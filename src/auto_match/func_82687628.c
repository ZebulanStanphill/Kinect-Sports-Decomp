typedef struct It_82687628 { int **t; int idx; } It_82687628;
typedef struct Loc_82687628 { int e0, e1; It_82687628 it; } Loc_82687628;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_82687270(int);
extern unsigned char fn_826A8E58(It_82687628 *, void *);
extern void fn_82766D88(It_82687628 *);
extern void fn_82768DE0(It_82687628 *, unsigned);
extern void fn_82768F38(unsigned);

void fn_82687628(char *param_1)
{
  Loc_82687628 L;
  RtlEnterCriticalSection(param_1 + 0xc);
  if (*(unsigned *)(param_1 + 8) != 0) {
    fn_82768DE0(&L.it, *(unsigned *)(param_1 + 8) + 0xc);
    L.e0 = 0;
    L.e1 = 0;
    if (!fn_826A8E58(&L.it, &L)) {
      L.e0 = 0;
      L.e1 = 0;
      do {
        fn_82687270(*(int *)((char *)*L.it.t + L.it.idx * 8 + 0xc));
        fn_82766D88(&L.it);
      } while (!fn_826A8E58(&L.it, &L));
    }
    fn_82768F38(*(unsigned *)(param_1 + 8) + 0xc);
  }
  RtlLeaveCriticalSection(param_1 + 0xc);
}
