unsigned __int64 fn_8302B168(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_2 + 0xc);
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_2 + 0x10);
  uVar4 = (unsigned int)*(unsigned char *)(param_2 + 0x14) << 0x1c;
  *(unsigned int *)(param_1 + 0x20) = uVar4 | uVar1 & 0xfffffff;
  uVar2 = (*(unsigned char *)(param_2 + 0x15) & 0xf) << 0x18;
  *(unsigned int *)(param_1 + 0x20) = uVar2 | uVar4 | uVar1 & 0xffffff;
  uVar3 = (*(unsigned char *)(param_2 + 0x16) & 0xf) << 0x14;
  *(unsigned int *)(param_1 + 0x20) = uVar3 | uVar2 | uVar4 | uVar1 & 0xfffff;
  *(unsigned int *)(param_1 + 0x20) =
       (*(unsigned char *)(param_2 + 0x17) & 0xf) << 0x10 | uVar3 | uVar2 | uVar4 | uVar1 & 0xffff;
  return 1;
}

