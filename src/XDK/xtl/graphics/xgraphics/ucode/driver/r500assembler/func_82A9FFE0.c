extern unsigned int *auStack_60;
extern int fn_82A9FD38();
extern int fn_82A9FF70();


void fn_82A9FFE0(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned char auStack_60 [48];
  
  if (((param_2 != (int *)0x0) && (iVar1 = (**(int (***)())(*param_2 + 0xc))(param_2), iVar1 != 0)) &&
     (uVar2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xc), uVar2 != 0)) {
    iVar4 = *(int *)(iVar1 + 0x10) + iVar1;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      iVar3 = *(int *)(iVar4 + 0xc) + iVar1;
      if (*(short *)(iVar3 + 2) == 3) {
        fn_82A9FF70(param_1,auStack_60,iVar1,iVar4,iVar3);
        fn_82A9FD38(param_1,auStack_60,iVar1,iVar4,iVar3);
      }
      iVar4 = iVar4 + 0x14;
    }
  }
  return;
}

