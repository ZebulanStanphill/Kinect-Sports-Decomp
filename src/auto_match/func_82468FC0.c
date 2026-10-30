extern int fn_822315A0(void *);
extern void fn_82273C88(void *);
extern int *fn_82279C58(void *, int);
extern void fn_82672C20(int, const char *, int, int);
typedef struct { int ptr; void *rep; } Ref;
typedef struct { int first; int second; int pad[2]; } Pair;
void fn_82468FC0(int param_1)
{
  Ref ref; Pair pair;
  pair.first = 0; pair.second = 0;
  if (*(int *)(param_1 + 0x130) != 0) {
    *(int *)(param_1 + 0x130) = 0;
    fn_82672C20(*fn_82279C58(&ref, param_1), "_root.idle", 0, 0);
    if (ref.rep != 0) fn_822315A0(ref.rep);
  }
  fn_82273C88(&pair);
}
