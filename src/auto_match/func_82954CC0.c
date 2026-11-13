extern int fn_8265C990();
extern int fn_828FCD88();
extern int fn_82968E90();
extern unsigned int lbl_82037BF8;


void fn_82954CC0(unsigned int *param_1)

{
  unsigned int iVar1;
  int lVar2;
  int *piVar3;
  
  *param_1 = &lbl_82037BF8;
  fn_8265C990(param_1[0x44],0x24810000);
  fn_8265C990(param_1[0x4a],0x24810000);
  if ((int *)param_1[0x6d] != (int *)0x0) {
    (*(void (**)(int))(*(int *)param_1[0x6d] + 4))(param_1[0x6d]);
    param_1[0x6d] = 0;
  }
  piVar3 = param_1 + 0x76;
  lVar2 = 7;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      fn_828FCD88(iVar1);
      fn_8265C990(iVar1,0x24810000);
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
  piVar3 = param_1 + 0x6e;
  lVar2 = 7;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      fn_828FCD88(iVar1);
      fn_8265C990(iVar1,0x24810000);
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
  fn_82968E90(param_1);
  return;
}

