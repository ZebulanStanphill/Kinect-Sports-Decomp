extern int fn_82B7BD28();
extern int fn_82B7C438();
extern int fn_82BA03B8();


int * fn_82BAA040(int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  __int64 lVar5;
  
  *param_1 = *(int *)(param_2 + 0xc);
  param_1[0x21] = -1;
  param_1[0x22] = -1;
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  *(unsigned char *)(param_1 + 0x1f) = 0;
  *(unsigned char *)((int)param_1 + 0x7d) = 0;
  param_1[0x20] = 0;
  param_1[0x23] = param_2;
  uVar1 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar6 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar6,*(unsigned int *)(*param_1 + 0x5b0));
  }
  param_1[0x1c] = (int)puVar6;
  uVar1 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar6 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar6,*(unsigned int *)(*param_1 + 0x5b0));
  }
  param_1[0x1d] = (int)puVar6;
  uVar1 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar6 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar6,*(unsigned int *)(*param_1 + 0x5b0));
  }
  param_1[0x1e] = (int)puVar6;
  uVar1 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar6 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar6,*(unsigned int *)(*param_1 + 0x5b0));
  }
  param_1[0x19] = (int)puVar6;
  uVar1 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar6 = puVar2 + 1;
  *puVar2 = uVar1;
  puVar2 = (unsigned int *)0x0;
  if (puVar6 != (unsigned int *)0x0) {
    fn_82BA03B8(puVar6,*(unsigned int *)(*param_1 + 0x5b0));
    puVar2 = puVar6;
  }
  param_1[0x1a] = (int)puVar2;
  uVar4 = (unsigned __int64)*(unsigned int *)(*param_1 + 0x560);
  lVar5 = uVar4 * 0x24;
  iVar3 = fn_82B7C438(*param_1,lVar5);
  param_1[1] = iVar3;
  iVar3 = fn_82B7C438(*param_1,lVar5);
  param_1[2] = iVar3;
  iVar3 = fn_82B7C438(*param_1,(uVar4 * 3 & 0x1fffffff) << 3);
  param_1[0xd] = iVar3;
  param_1[3] = param_1[2];
  param_1[4] = param_1[1];
  return param_1;
}

