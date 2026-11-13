extern int fn_82FEC850();


void fn_83037590(unsigned int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = 0;
  for (uVar2 = param_1[1]; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
    iVar1 = iVar1 + 1;
  }
  fn_82FEC850(((int)(int)(unsigned int)*(unsigned short *)(param_1 + 3) * (int)iVar1 & 0x3fffffffU) << 2,
               *param_1);
  *param_1 = 0;
  *(unsigned short *)(param_1 + 3) = 0;
  return;
}

