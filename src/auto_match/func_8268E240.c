void fn_8268E240(unsigned int *param_1,int param_2,int *param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = param_2 + 0xfffU & 0xfffff000;
  uVar2 = (*(int *)(param_2 + 0x24) << (*param_1)) + param_2 & 0xfffff000;
  if (uVar1 + 0x1000 > uVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8268e28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_3 + 4))(param_3,param_4,0,uVar1,uVar2 - uVar1);
  return;
}

