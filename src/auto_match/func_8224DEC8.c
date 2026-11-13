typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_f30;
extern int fn_8225C590();
extern int fn_8225DB68();
extern int fn_8225F160();
extern int fn_82292AE8();
extern int fn_82A1BFB0();
extern int fn_82CE3C88();
extern unsigned int iStack_f5c;
extern unsigned int iStack_f60;
extern unsigned int lbl_82005748;
extern unsigned int lbl_821985F4;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832760A8;
extern unsigned int lbl_832760A9;
extern unsigned int uStack_f58;


bool fn_8224DEC8(int *param_1,int *param_2)

{
  int iVar3;
  unsigned __int64 uVar1;
  int iVar4;
  __int64 lVar2;
  bool bVar5;
  __int64 lVar6;
  unsigned int uVar7;
  __int64 *plVar8;
  struct { int first; int second; } stack_pair_f60;

  unsigned __int64 uStack_f58;
  unsigned char **ppuStack_f50;
  int *piStack_f4c;
  unsigned char ***pppuStack_f40;
  unsigned int auStack_f30 [2];
  __int64 alStack_f28 [481];
  
  iVar3 = fn_8225F160();
  stack_pair_f60.first = *(int *)(iVar3 + 0x38);
  piStack_f4c = &stack_pair_f60.first;
  pppuStack_f40 = &ppuStack_f50;
  ppuStack_f50 = &lbl_821985F4;
  uVar1 = fn_8225C590();
  fn_8225DB68(uVar1,&ppuStack_f50);
  iVar3 = stack_pair_f60.first;
  iVar4 = fn_8225F160();
  if (*(int *)(iVar4 + 0x3c) <= iVar3) {
    iVar3 = *(int *)(iVar4 + 0x3c);
  }
  if (iVar3 == 0) {
LAB_8224df30:
    iVar3 = fn_82292AE8();
    if (*(float *)(iVar3 + 0x5c) == ltcg_pool_0_0f) {
      *(float *)(iVar3 + 0x5c) = lbl_82005748;
    }
    bVar5 = false;
  }
  else {
    if (iVar3 == 1) {
      uStack_f58 = (**(int (***)())(*param_2 + 0x48))(param_2);
      stack_pair_f60.second = 0;
      uVar1 = (**(int (***)())(*param_1 + 0x44))(param_1);
      fn_82A1BFB0(uVar1,&uStack_f58,1,&stack_pair_f60.second,0);
      if (stack_pair_f60.second == 0) goto LAB_8224df30;
    }
    fn_82CE3C88(auStack_f30);
    uVar7 = 0;
    if (auStack_f30[0] != 0) {
      plVar8 = alStack_f28;
      do {
        lVar6 = *plVar8;
        lVar2 = (**(int (***)())(*param_1 + 0x48))(param_1);
        if ((lVar6 == lVar2) && ((*(unsigned int *)((int)plVar8 + 0x24) & 2) != 0)) goto LAB_8224df30;
        uVar7 = uVar7 + 1;
        plVar8 = plVar8 + 0xf;
      } while (uVar7 < auStack_f30[0]);
    }
    iVar3 = fn_82292AE8();
    if (*(float *)(iVar3 + 0x5c) == lbl_82005748) {
      *(float *)(iVar3 + 0x5c) = ltcg_pool_0_0f;
    }
    if ((lbl_832760A8 != '\0') || (bVar5 = false, lbl_832760A9 != '\0')) {
      bVar5 = true;
    }
    bVar5 = !bVar5;
  }
  return bVar5;
}

