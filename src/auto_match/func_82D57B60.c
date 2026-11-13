#define TBLr 0
extern unsigned int *auStack_260;
extern unsigned int *auStack_464;
extern unsigned int *auStack_490;
extern unsigned int *auStack_4b0;
extern int fn_82CE5410();
extern int fn_82D583E8();
extern unsigned int iStack_46c;
extern unsigned int iStack_4a0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82138C54;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_468;
extern unsigned int uStack_498;
extern unsigned int uStack_49c;


void fn_82D57B60(int *param_1,unsigned int *param_2,int *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned char auStack_4b0 [16];
  struct { int first; unsigned int second; } stack_pair_4a0;

  unsigned int uStack_498;
  unsigned int *puStack_494;
  unsigned char auStack_490 [32];
  unsigned int *puStack_470;
  int iStack_46c;
  unsigned int uStack_468;
  unsigned int auStack_464 [129];
  unsigned char auStack_260 [512];

  iVar2 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar2 + 4);
  if (puVar5 < *(unsigned int **)(iVar2 + 0xc)) {
    *puVar5 = &lbl_82138C54;
    puVar5[3] = "StQueryTree";
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(unsigned int **)(iVar2 + 4) = puVar5 + 4;
  }
  fn_82D583E8(param_1,param_2,param_3,auStack_490);
  puStack_470 = auStack_464;
  uStack_468 = 0x80000080;
  iStack_46c = 0;
  piVar3 = (int *)*param_2;
  (**(int (***)())(*piVar3 + 0x30))(piVar3,auStack_490,&puStack_470);
  iVar2 = KeTlsGetValue(lbl_8323B4A0);
  puVar6 = puStack_470;
  puVar5 = *(unsigned int **)(iVar2 + 4);
  if (puVar5 < *(unsigned int **)(iVar2 + 0xc)) {
    *puVar5 = "StNarrowPhase";
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(unsigned int **)(iVar2 + 4) = puVar5 + 3;
  }
  uStack_498 = param_2[2];
  iVar2 = *(int *)(*param_1 + 0xc);
  puVar5 = puStack_470 + iStack_46c;
  puStack_494 = param_2;
  piVar3 = (int *)(**(int (***)())(*piVar3 + 0x10))(piVar3);
  for (; puVar6 != puVar5; puVar6 = puVar6 + 1) {
    pcVar4 = (char *)(**(int (***)())(*(int *)(param_3[3] + 0xc) + 4))
                               (auStack_4b0,param_3[3] + 0xc,param_3,param_1,param_2,piVar3,*puVar6)
    ;
    if (*pcVar4 != '\0') {
      stack_pair_4a0.first = (**(int (***)())(*piVar3 + 0x14))(piVar3,*puVar6,auStack_260);
      stack_pair_4a0.second = *puVar6;
      (**(int (***)())((unsigned int)*(unsigned char *)((iVar2 + 0xd) * 0x20 + *(int *)(stack_pair_4a0.first + 0xc) + *param_3) *
                   0x14 + *param_3 + 0x9ac))(param_1,&stack_pair_4a0.first,param_3,param_4,param_5);
    }
  }
  iVar2 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar2 + 4);
  if (puVar5 < *(unsigned int **)(iVar2 + 0xc)) {
    *puVar5 = &lbl_8202CF7C;
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(unsigned int **)(iVar2 + 4) = puVar5 + 3;
  }
  iVar2 = fn_82CE5410();
  iStack_46c = 0;
  if ((uStack_468 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),puStack_470,uStack_468 & 0x3fffffff,4);
  }
  return;
}
