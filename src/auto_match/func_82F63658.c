extern unsigned int *auStack_40;
extern int fn_82F63788();
extern int fn_82F68240();
extern int fn_82F70480();


unsigned __int64 fn_82F63658(unsigned char *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned char bVar4;
  unsigned char *pbVar5;
  unsigned int auStack_40 [1];
  
  if (param_2 == (unsigned int *)0x0) {
    param_2 = auStack_40;
  }
  iVar2 = fn_82F70480();
  bVar4 = *param_1;
  pbVar5 = param_1;
  while ((*(unsigned short *)(iVar2 + (unsigned int)bVar4 * 2) & 8) != 0) {
    iVar2 = fn_82F70480();
    pbVar5 = pbVar5 + 1;
    bVar4 = *pbVar5;
  }
  bVar4 = *pbVar5;
  if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
    pbVar5 = pbVar5 + 1;
  }
  else {
    bVar4 = 0x2b;
  }
  uVar1 = fn_82F63788(pbVar5,param_2,param_3,param_4);
  if (pbVar5 == (unsigned char *)*param_2) {
    *param_2 = param_1;
  }
  if (((param_1 != (unsigned char *)*param_2) || (uVar1 == 0)) &&
     ((bVar4 != 0x2b || (uVar1 < 0x8000000000000000)))) {
    if (bVar4 != 0x2d) {
      return uVar1;
    }
    if (uVar1 < 0x8000000000000001) {
      return -uVar1;
    }
  }
  puVar3 = (unsigned int *)fn_82F68240();
  *puVar3 = 0x22;
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 1;
  }
  uVar1 = 0x8000000000000000;
  if (bVar4 != 0x2d) {
    uVar1 = 0x7fffffffffffffff;
  }
  return uVar1;
}

