extern int fn_82366908();
extern int fn_8242F318();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B90F0;


unsigned int * fn_8242DE78(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  
  iVar4 = *(int *)(param_2 + 0x174);
  puVar3 = (unsigned int *)fn_8265C9E0(0x260);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar5 = puVar3 + 4;
    puVar3[1] = 1;
    *puVar3 = &lbl_821A8D8C;
    puVar3[2] = 1;
    if (puVar5 != (unsigned int *)0x0) {
      uVar1 = *(unsigned int *)(iVar4 + 0xa8);
      uVar2 = *(unsigned int *)(iVar4 + 0xa4);
      fn_82366908(puVar5,param_3,0xffffffff821b90dc);
      puVar3[0x94] = param_2;
      *puVar5 = &lbl_821B90F0;
      iVar4 = fn_8265C9E0(0x150);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_8242F318();
      }
      puVar3[0x95] = iVar4;
      *(unsigned int *)(iVar4 + 0x7c) = uVar2;
      *(unsigned int *)(puVar3[0x95] + 0x80) = uVar1;
    }
  }
  param_1[1] = puVar3;
  *param_1 = puVar3 + 4;
  return param_1;
}

