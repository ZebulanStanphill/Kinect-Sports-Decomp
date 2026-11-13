extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack_10;
extern unsigned int uStack_8;


unsigned __int64 fn_82AC4650(unsigned __int64 param_1,int *param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned char *pbVar3;
  unsigned __int64 *puVar4;
  unsigned char bVar5;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack_10;
  unsigned __int64 uStack_8;
  
  uStack00000010 = param_1;
  puVar4 = &uStack_10;
  pbVar3 = (unsigned char *)&stack0x00000010;
  uStack_10 = param_1 & 0xf800;
  do {
    bVar5 = *(unsigned char *)puVar4;
    bVar1 = *pbVar3;
    if ((unsigned __int64)bVar5 - (unsigned __int64)bVar1 != 0) break;
    puVar4 = (unsigned __int64 *)((int)puVar4 + 1);
    pbVar3 = pbVar3 + 1;
  } while (puVar4 != &uStack_8);
  if ((int)((unsigned __int64)bVar5 - (unsigned __int64)bVar1) == 0) {
    uVar2 = (unsigned int)param_2[*param_2 * 4 + 3] >> 0xd & 7;
    if ((unsigned char *)(param_2 + *param_2 * 4 + 4) != (unsigned char *)0x0) {
      bVar5 = *(unsigned char *)(param_2 + *param_2 * 4 + 4);
      if ((0x22 < bVar5) || (bVar5 == 0)) {
        bVar5 = 0;
      }
      if (((bVar5 == 0x21) && (uVar2 != 0)) && (uVar2 < 5)) {
        return 0;
      }
    }
  }
  return 0xffffffff80004005;
}

