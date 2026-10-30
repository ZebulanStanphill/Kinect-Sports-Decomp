typedef struct Pair_823FC760 { int first; unsigned int second; } Pair_823FC760;
typedef struct Loc_823FC760 { Pair_823FC760 a; Pair_823FC760 b; char bufs[4][8]; } Loc_823FC760;
extern unsigned char fn_8223AAC0(unsigned int);
extern int fn_82365BD8(void *, int);
extern void fn_823FD610(void *, int, int, void *, void *, int, int);
extern char lbl_821AD588[];

int *fn_823FC760(int *param_1, int param_2, int param_3, Pair_823FC760 *param_4,
                 Pair_823FC760 *param_5, int param_6, int param_7)
{
  Loc_823FC760 l;
  int uVar2;
  unsigned int iVar1;

  param_1[1] = 1;
  *param_1 = (int)lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != 0) {
    iVar1 = param_5->second;
    uVar2 = param_5->first;
    l.b.first = 0;
    l.b.second = 0;
    if (iVar1 != 0) {
      if (fn_8223AAC0(iVar1) != 0) {
        l.b.second = iVar1;
        l.b.first = uVar2;
      }
    }
    iVar1 = param_4->second;
    uVar2 = param_4->first;
    l.a.first = 0;
    l.a.second = 0;
    if (iVar1 != 0 && fn_8223AAC0(iVar1) != 0) {
      l.a.second = iVar1;
      l.a.first = uVar2;
    }
    fn_823FD610(param_1 + 3, fn_82365BD8(l.bufs[3], param_2), fn_82365BD8(l.bufs[2], param_3), &l.a, &l.b,
                fn_82365BD8(l.bufs[1], param_6), fn_82365BD8(l.bufs[0], param_7));
  }
  return param_1;
}
