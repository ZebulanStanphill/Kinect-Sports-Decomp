extern int fn_82C11AE0();


unsigned __int64 fn_82C122B8(int param_1,int param_2,unsigned int *param_3,int *param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  if (*param_4 != 0) {
    return 0;
  }
  if (param_2 != 0xc0000) {
    return 0xffffffff805000b2;
  }
  puVar1 = (unsigned int *)param_3[1];
  uVar2 = *param_3;
  *puVar1 = 0;
  *(unsigned char *)(param_1 + 0x60) = *(unsigned char *)(param_1 + 0x10);
  uVar3 = (**(int (***)())(*(int *)(param_1 + 4) + 8))(*(int *)(param_1 + 4),puVar1,uVar2);
  if ((-1 < (int)uVar3) && ((int)uVar3 == 0x50000d)) {
    uVar3 = fn_82C11AE0(param_1);
  }
  return uVar3;
}

