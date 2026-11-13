unsigned __int64 fn_82296E38(int *param_1,unsigned __int64 param_2)

{
  unsigned short *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if (*(int *)param_1[9] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)param_1[0xd];
  }
  if (0 < iVar3) {
    *(int *)param_1[0xd] = *(int *)param_1[0xd] + -1;
    puVar1 = *(unsigned short **)param_1[9];
    *(unsigned short **)param_1[9] = puVar1 + 1;
    *puVar1 = (short)param_2;
    return param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x82296ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(int (***)())(*param_1 + 0xc))(param_1);
  return uVar2;
}

