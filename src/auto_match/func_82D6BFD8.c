#define TBLr 0
extern unsigned int *auStack_250;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8213971C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;


void fn_82D6BFD8(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  struct { unsigned int first; unsigned int second; } stack_pair_260;

  unsigned int uStack_258;
  unsigned int *puStack_254;
  unsigned char auStack_250 [512];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar3 + 4);
  if (puVar5 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar5 = &lbl_8213971C;
    uVar2 = TBLr;
    puVar5[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar5 + 3;
  }
  piVar4 = (int *)(**(int (***)())(*(int *)*param_2 + 0x10))();
  uStack_258 = param_2[2];
  lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) - 1;
  puStack_254 = param_2;
  if (-1 < lVar6) {
    puVar5 = (unsigned int *)(*(int *)(param_1 + 0xc) + -4);
    do {
      uVar1 = puVar5[1];
      stack_pair_260.first = (**(int (***)())(*piVar4 + 0x14))(piVar4,uVar1,auStack_250);
      puVar5 = puVar5 + 2;
      stack_pair_260.second = uVar1;
      (**(int (***)())(*(int *)*puVar5 + 0x14))
                ((int *)*puVar5,&stack_pair_260.first,param_3,param_4,param_5,param_6);
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar3 + 4);
  if (puVar5 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar5 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar5[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar5 + 3;
  }
  return;
}

