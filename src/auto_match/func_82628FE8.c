extern int fn_8252CAF8();


unsigned __int64 fn_82628FE8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 4) != 0x40) return 4;
 {
    if ((param_3 != 0) && (*(unsigned int *)(param_2 + 0x3e4) != 0)) {
      fn_8252CAF8(*(int *)(param_2 + 0x3e4),*(int *)(iVar1 + 8) & 0xff,
                        *(int *)(iVar1 + 0xc) & 0xff);
    }
    uVar2 = 3;
  }

  return uVar2;
}

