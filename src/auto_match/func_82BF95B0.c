extern int fn_82BF9038();


void fn_82BF95B0(int param_1)

{
  unsigned int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar2 = fn_82BF9038(param_1 + 0x10,0x2000,((unsigned int)*(unsigned short *)(param_1 + 8) + 2) * 0x2000,0
                         );
    if (iVar2 == 0) {
      *(unsigned char *)(iVar1 + 0xf) = 1;
    }
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  return;
}

