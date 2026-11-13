extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82536218();
extern int fn_82560690();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_82195518;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int *lbl_8327F85C;


void fn_82552E78(int param_1)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  double dVar5;
  double dVar6;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  if ((*(char **)(param_1 + 0x10) != (char *)0x0) && (**(char **)(param_1 + 0x10) != '\0')) {
    iVar4 = 0;
    dVar6 = (double)ltcg_pool_0_0f;
    iVar3 = fn_82560690(2);
    dVar5 = lbl_82195518;
    if (0 < iVar3) {
      do {
        uVar1 = (**(int (***)())*lbl_8327F85C)(lbl_8327F85C,auStack_70,auStack_80,auStack_90,auStack_a0)
        ;
        if ((uVar1 & 0xffffffff) >> 0x1f == 0) {
          if (dVar6 < 0.0) {
            dVar6 = dVar5;
          }
          dVar6 = (double)(float)dVar6;
        }
        iVar4 = iVar4 + 1;
        iVar3 = fn_82560690(2);
      } while (iVar4 < iVar3);
    }
    if (*(int **)(param_1 + 0xc) == (int *)0x0) {
      fn_82536218(dVar6,*(unsigned int *)(param_1 + 0x10));
    }
    else {
      iVar3 = **(int **)(param_1 + 0xc);
      uVar2 = fn_82864988(auStack_60,*(unsigned int *)(param_1 + 0x10));
      (**(int (***)())(iVar3 + 0x10))(dVar6,*(unsigned int *)(param_1 + 0xc),uVar2);
      fn_82864898(auStack_60);
    }
  }
  return;
}

