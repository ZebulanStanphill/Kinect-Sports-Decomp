extern int fn_82F63EA4();
extern int _lockexit();
extern int realloc();
extern int _msize();
extern unsigned int lbl_8329F724;
extern unsigned int lbl_8329F728;
extern unsigned int uStack_60;


unsigned int _onexit(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uStack_60;
  
  _lockexit();
  puVar1 = lbl_8329F728;
  puVar3 = lbl_8329F724;
  if (lbl_8329F728 <= lbl_8329F724) {
    iVar4 = (int)lbl_8329F724 - (int)lbl_8329F728;
    uVar5 = iVar4 + 4;
    if (3 < uVar5) {
      uVar2 = _msize(lbl_8329F728);
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
        if (0x7ff < uVar2) {
          uVar5 = 0x800;
        }
        if (((uVar5 + uVar2 < uVar2) ||
            (puVar3 = (unsigned int *)realloc(puVar1), puVar3 == (unsigned int *)0x0)) &&
           ((uVar2 + 0x10 < uVar2 ||
            (puVar3 = (unsigned int *)realloc(puVar1), puVar3 == (unsigned int *)0x0))))
        goto LAB_82f63e84;
        lbl_8329F728 = puVar3;
        puVar3 = lbl_8329F728 + (iVar4 >> 2);
      }
      lbl_8329F724 = puVar3 + 1;
      *puVar3 = param_1;
      uStack_60 = param_1;
      goto LAB_82f63e8c;
    }
  }
LAB_82f63e84:
  uStack_60 = 0;
LAB_82f63e8c:
  fn_82F63EA4();
  return uStack_60;
}

