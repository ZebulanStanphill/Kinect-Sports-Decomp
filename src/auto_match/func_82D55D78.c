void fn_82D55D78(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_3;
  iVar2 = iVar1 + 0x5a0;
  if (param_3[5] == 0) {
    iVar2 = iVar1 + 0x1a0;
  }
                    /* WARNING: Could not recover jumptable at 0x82d55dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())((unsigned int)*(unsigned char *)(*(int *)(*param_1 + 0xc) * 0x20 + iVar2 + *(int *)(*param_2 + 0xc)) *
               0x14 + iVar1 + 0x9a0))();
  return;
}

