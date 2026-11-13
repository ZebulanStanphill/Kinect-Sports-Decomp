extern int fn_82AC3548();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack_10;
extern unsigned int uStack_8;


unsigned int fn_82AC4558(unsigned __int64 param_1,int *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned char *pbVar6;
  unsigned __int64 *puVar7;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack_10;
  unsigned __int64 uStack_8;
  
  uStack00000010 = param_1;
  puVar7 = &uStack_10;
  pbVar6 = (unsigned char *)&stack0x00000010;
  uStack_10 = param_1 & 0x7fff0000fffc;
  do {
    bVar1 = *(unsigned char *)puVar7;
    bVar2 = *pbVar6;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    puVar7 = (unsigned __int64 *)((int)puVar7 + 1);
    pbVar6 = pbVar6 + 1;
  } while (puVar7 != &uStack_8);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    uVar4 = (unsigned int)param_2[*param_2 * 4 + 3] >> 0xd & 7;
    if ((uVar4 < 4) && (uVar3 = param_1 >> 0x20 & 0x1fff, uVar3 < *param_3)) {
      iVar5 = fn_82AC3548(param_2,uVar3,(unsigned int)param_2[*param_2 * 4 + 3] >> 0x10 & 7,uVar4 + 1,
                            param_2 + *param_2 * 4 + 4,0x21);
      return iVar5 >> 0x1f & 0x80004005;
    }
  }
  return 0x80004005;
}

