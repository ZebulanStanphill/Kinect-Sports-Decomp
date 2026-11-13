extern unsigned int *auStack_830;
extern int fn_822315A0();
extern int fn_822A0EB8();
extern int fn_822A1210();
extern int fn_822A12F8();
extern int fn_822ABA88();
extern int fn_82358FD8();
extern int fn_82397F30();
extern int fn_82397F88();
extern int fn_823980B0();
extern int fn_8239FF60();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821922D4;


void fn_823A4048(int param_1,int param_2)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  __int64 lVar2;
  unsigned int uVar5;
  unsigned char auStack_830 [2096];
  
  if (*(int *)(param_1 + 0x14) == 1) {
    fn_823980B0(*(unsigned int *)(param_1 + 8),0,0);
    fn_823980B0(*(unsigned int *)(param_1 + 8),1,0);
    fn_822A0EB8(*(unsigned int *)(*(int *)(param_1 + 8) + 0xd4));
    *(unsigned int *)(param_1 + 0x10) = lbl_821917B0;
  }
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 == 1) {
    *(unsigned int *)(param_1 + 0x18) = lbl_821922D4;
    fn_823980B0(*(unsigned int *)(param_1 + 8),0,1);
    iVar3 = fn_82397F88(*(unsigned int *)(param_1 + 8));
    if (iVar3 != 0) {
      fn_823980B0(*(unsigned int *)(param_1 + 8),1,1);
    }
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = fn_82397F30(iVar3);
    if (iVar4 != 0) {
      piVar1 = *(int **)(*(int *)(iVar3 + 0xcc) * 4 + **(int **)(iVar3 + 8));
      iVar4 = *(int *)(piVar1[4] * 4 + *piVar1);
      lVar2 = fn_822ABA88(iVar4,*(unsigned int *)((*(int *)(iVar4 + 0x10) + 7) * 4 + param_1));
      iVar3 = *(int *)(iVar3 + 0xd4);
      if (*(int *)(iVar3 + 0x44) == 0) {
        fn_82358FD8(*(unsigned int *)(iVar3 + 0x1c),auStack_830,0x400,0xffffffff821abd54);
        iVar4 = fn_8265C9E0(0x10);
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = fn_822A1210();
        }
        iVar4 = *(int *)(iVar3 + 0x44);
        *(unsigned int *)(iVar3 + 0x44) = uVar5;
        if (iVar4 != 0) {
          if (*(int *)(iVar4 + 4) != 0) {
            fn_822315A0();
          }
          fn_8265CA20(iVar4);
        }
        fn_822A12F8(*(unsigned int *)(iVar3 + 0x44),lVar2 + 0x30,auStack_830);
      }
    }
    *(unsigned int *)(*(int *)(param_1 + 8) + 0x260) = *(unsigned int *)(*(int *)(param_1 + 8) + 0x260) | 8;
  }
  else if (param_2 == 2) {
    *(unsigned int *)(*(int *)(param_1 + 8) + 0x260) = *(unsigned int *)(*(int *)(param_1 + 8) + 0x260) | 0x10;
    if (*(int *)(*(int *)(param_1 + 8) + 0x178) == 0) {
      fn_8239FF60(*(unsigned int *)(*(int *)(param_1 + 8) + 0x2dc),2);
    }
  }
  return;
}

