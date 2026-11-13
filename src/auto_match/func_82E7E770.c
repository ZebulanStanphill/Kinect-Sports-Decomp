extern int fn_82E4FE08();


unsigned __int64 fn_82E7E770(unsigned short *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  *param_1 = 0x48;
  puVar1 = (unsigned int *)fn_82E4FE08(0x10);
  *(unsigned int **)(param_1 + 4) = puVar1;
  if (puVar1 == (unsigned int *)0x0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  return uVar2;
}

