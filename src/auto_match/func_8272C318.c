void fn_8272C318(int *param_1,unsigned __int64 param_2,char param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  
  uVar2 = *(unsigned short *)(param_1 + 0x32);
  uVar1 = uVar2 >> 1 & 1;
  if ((param_3 == '\0') || (uVar1 != 0)) {
    if ((param_3 != '\0') || (uVar1 == 0)) goto LAB_8272c350;
    uVar2 = uVar2 & 0xfffd;
  }
  else {
    uVar2 = uVar2 | 2;
  }
  *(unsigned short *)(param_1 + 0x32) = uVar2;
LAB_8272c350:
                    /* WARNING: Could not recover jumptable at 0x8272c360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_1 + 0x1ac))();
  return;
}

