#define _uStack00000010 ((*(unsigned __int64*)&uStack00000010))
extern unsigned int *auStack_38;
extern int fn_82AC3628();
extern int fn_82AC3770();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack_40;


unsigned int fn_82AC4408(unsigned __int64 param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned char *pbVar7;
  unsigned __int64 *puVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned int uStack00000010;
  unsigned __int64 uStack_40;
  unsigned __int64 auStack_38 [1];
  
  _uStack00000010 = param_1;
  uVar5 = _uStack00000010;
  uStack00000010 = (unsigned int)(param_1 >> 0x20);
  puVar8 = &uStack_40;
  pbVar7 = (unsigned char *)&stack0x00000010;
  uStack_40 = param_1 & 0x3f1fff0000fc00;
  do {
    bVar1 = *(unsigned char *)puVar8;
    bVar2 = *pbVar7;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    puVar8 = (unsigned __int64 *)((int)puVar8 + 1);
    pbVar7 = pbVar7 + 1;
  } while (puVar8 != auStack_38);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
    return 0x80004005;
  }
  uVar9 = (unsigned int)param_2[*param_2 * 4 + 3] >> 0x10;
  uVar10 = (unsigned __int64)uVar9 & 7;
  uVar4 = (unsigned int)param_2[*param_2 * 4 + 3] >> 0xd & 7;
  if ((uVar9 & 7) == 0) {
    return 0x80004005;
  }
  if (4 < (unsigned int)uVar10) {
    return 0x80004005;
  }
  uVar3 = (unsigned __int64)uStack00000010 & 0x1fff;
  if ((param_4 & 0xffffffff) < uVar3) {
    return 0x80004005;
  }
  if (*param_3 <= uVar3) {
    return 0x80004005;
  }
  pbVar7 = (unsigned char *)(param_2 + *param_2 * 4 + 4);
  if (pbVar7 != (unsigned char *)0x0) {
    bVar1 = *pbVar7;
    uVar9 = (unsigned int)bVar1;
    if ((bVar1 < 0x23) && (bVar1 != 0)) goto LAB_82ac44f0;
  }
  uVar9 = 0;
LAB_82ac44f0:
  if ((uVar9 == (uStack00000010 >> 0x10 & 0x1f) + 1) &&
     (_uStack00000010 = uVar5, iVar6 = fn_82AC3628(param_2,uVar3,uVar10,uVar4,pbVar7), -1 < iVar6)
     ) {
    iVar6 = fn_82AC3770(param_2,param_4 + 1,uVar10 - 1,uVar4,pbVar7);
    return iVar6 >> 0x1f & 0x80004005;
  }
  return 0x80004005;
}

