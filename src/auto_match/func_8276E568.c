extern void fn_82687270(unsigned int);
extern void fn_826D6290(void *, int);
extern void fn_8276DD70(void *, void *, void *);
typedef struct Pair_8276E568 { int first; unsigned int second; } Pair_8276E568;
typedef struct Arg_8276E568 { int a; Pair_8276E568 *p; } Arg_8276E568;
typedef struct Loc_8276E568 { Pair_8276E568 pair; Arg_8276E568 arg; } Loc_8276E568;

void fn_8276E568(char *param_1, int param_2, int param_3)
{
  Loc_8276E568 l;
  l.pair.first = 0;
  l.pair.second = 0;
  fn_826D6290(&l.pair, param_3);
  l.arg.p = &l.pair;
  l.arg.a = param_2;
  fn_8276DD70(param_1 + 0x24, param_1 + 0x24, &l.arg);
  if (l.pair.first == 0 && l.pair.second != 0) {
    fn_82687270(l.pair.second);
  }
}
