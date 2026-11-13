//BODY
typedef struct { int (**vt)(void *, unsigned int, unsigned int); } VO;
extern int fn_82BE5340();
extern int fn_82BE5350();
extern VO *fn_82BE5378();

int fn_82BEF9E0(int param_1, unsigned int param_2, unsigned int param_3)
{
  VO *piVar2;
  int lVar1;
  int bVar3;
  int iVar4;

  iVar4 = param_1 + 0x1c;
  bVar3 = 1;
  fn_82BE5340(iVar4);
  while (*(int *)(param_1 + 0x24) != 0) {
    piVar2 = fn_82BE5378(iVar4);
    lVar1 = piVar2->vt[2](piVar2, param_2, param_3);
    bVar3 = lVar1 != 0 ? bVar3 : 0;
    fn_82BE5350(iVar4);
  }
  return bVar3;
}