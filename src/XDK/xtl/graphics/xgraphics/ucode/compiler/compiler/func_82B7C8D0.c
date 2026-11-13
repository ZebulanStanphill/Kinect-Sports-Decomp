extern int fn_82AB1818();
extern int fn_82F6EDE8();
extern int lbl_83160578[];


void fn_82B7C8D0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  char acStack_120 [256];
  
  if (lbl_83160578[44] != 0) {
    iVar1 = fn_82F6EDE8(acStack_120,0xff,param_2,param_3);
    acStack_120[iVar1] = '\0';
    if (((acStack_120[0] != '\0') && (lbl_83160578[44] == 2)) && (*(char *)(param_1 + 0x558) != '\0')) {
      uVar2 = fn_82AB1818("timer.out");
      *(unsigned int *)(param_1 + 0x55c) = uVar2;
      *(unsigned char *)(param_1 + 0x558) = 0;
    }
  }
  return;
}

