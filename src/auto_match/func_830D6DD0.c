extern int XMemSet();


void fn_830D6DD0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (unsigned int)(*(unsigned short *)(param_2 + 0x34) >> 1) * (unsigned int)(*(unsigned short *)(param_2 + 0x32) >> 1);
  iVar3 = iVar5 * 6;
  iVar4 = *(int *)(param_2 + 0x558) * iVar3 * 0x80 + *(int *)(param_1 + 0x56f8);
  *(int *)(param_3 + 0x14) = iVar4;
  iVar1 = *(int *)(param_1 + 0x5704);
  iVar2 = *(int *)(param_2 + 0x558);
  *(int *)(param_3 + 0x1c) = iVar5 * 0x300 + iVar4;
  *(int *)(param_3 + 0x18) = iVar2 * iVar3 * 4 + iVar1;
  *(int *)(param_3 + 0x20) = *(int *)(param_2 + 0x558) * iVar3 * 4 + *(int *)(param_1 + 0x5708);
                    /* WARNING: Subroutine does not return */
  XMemSet(*(unsigned int *)(param_2 + 0x160),0,iVar5 * 4);
}

