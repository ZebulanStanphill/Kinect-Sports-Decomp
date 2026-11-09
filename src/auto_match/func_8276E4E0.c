extern void fn_82687270(unsigned int);
extern void fn_8267C4C8(unsigned int);
extern void fn_8276DD70(void *, void *, void *);
typedef struct Pair_8276E4E0 { int first; unsigned int second; } Pair_8276E4E0;
typedef struct Arg_8276E4E0 { int a; Pair_8276E4E0 *p; } Arg_8276E4E0;
typedef struct Loc_8276E4E0 { Pair_8276E4E0 pair; Arg_8276E4E0 arg; } Loc_8276E4E0;

void fn_8276E4E0(char *param_1, int param_2, unsigned int param_3)
{
  Loc_8276E4E0 l;
  l.pair.first = 0;
  l.pair.second = param_3;
  if (param_3 != 0) {
    fn_8267C4C8(param_3);
  }
  l.arg.p = &l.pair;
  l.arg.a = param_2;
  fn_8276DD70(param_1 + 0x24, param_1 + 0x24, &l.arg);
  if (l.pair.first == 0 && l.pair.second != 0) {
    fn_82687270(l.pair.second);
  }
}
