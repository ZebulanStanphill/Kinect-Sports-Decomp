#define TBLr 0
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern unsigned int iStack_260;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8213971C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;


void fn_82D6C3E0(unsigned int *param_1,int *param_2,int *param_3,int param_4)

{
  unsigned int *puVar1;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar2;
  int iVar5;
  char *pcVar6;
  unsigned char auStack_270 [16];
  struct { int first; unsigned int second; } stack_pair_260;

  unsigned int uStack_258;
  unsigned int *puStack_254;
  unsigned char auStack_250 [512];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_8213971C;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  piVar4 = (int *)(**(int (***)())(*(int *)*param_1 + 0x10))();
  uStack_258 = param_1[2];
  iVar3 = *(int *)(*param_2 + 0xc);
  puStack_254 = param_1;
  uVar2 = (**(int (***)())(*piVar4 + 8))();
  iVar5 = (int)uVar2;
  while (iVar5 != -1) {
    pcVar6 = (char *)(**(int (***)())(*(int *)(param_3[3] + 0xc) + 4))
                               (auStack_270,param_3[3] + 0xc,param_3,param_2,param_1,piVar4,uVar2);
    if (*pcVar6 != '\0') {
      stack_pair_260.first = (**(int (***)())(*piVar4 + 0x14))(piVar4,uVar2,auStack_250);
      stack_pair_260.second = (unsigned int)uVar2;
      (**(int (***)())((unsigned int)*(unsigned char *)((*(int *)(stack_pair_260.first + 0xc) + 0xd) * 0x20 + *param_3 + iVar3) *
                   0x14 + *param_3 + 0x9a4))(&stack_pair_260.first,param_2,param_3,param_4);
      if (*(char *)(param_4 + 4) != '\0') break;
    }
    uVar2 = (**(int (***)())(*piVar4 + 0xc))(piVar4,uVar2);
    iVar5 = (int)uVar2;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

