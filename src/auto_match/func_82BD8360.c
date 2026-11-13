unsigned __int64 fn_82BD8360(int param_1,unsigned __int64 param_2,__int64 *param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  uVar7 = *(unsigned __int64 *)(param_1 + 0x10);
  uVar1 = *(unsigned short *)(param_1 + 0x20);
  uVar2 = *(unsigned short *)(param_1 + 0x46);
  *param_3 = 0;
  uVar7 = (uVar7 / 0x14 & 0xffff) + (unsigned __int64)uVar1 & 0xffff;
  uVar7 = uVar7 + (unsigned __int64)(unsigned int)((int)uVar7 >> 0xb) * -0x800 & 0xffff;
  uVar3 = uVar7 + 0x800 & 0xffff;
  uVar5 = uVar3 - uVar2;
  lVar6 = uVar3 + uVar2;
  uVar3 = uVar5 + ((__int64)((int)uVar5 >> 0xb) +
                   (unsigned __int64)((int)uVar5 < 0 && (uVar5 & 0x7ff) != 0) & 0x1fffff) * -0x800 & 0xffff
  ;
  uVar5 = lVar6 + (unsigned __int64)(unsigned int)((int)lVar6 >> 0xb) * -0x800 & 0xffff;
  param_2 = param_2 & 0xffff;
  if (uVar3 < uVar5) {
    if ((param_2 < uVar3) || (uVar5 < param_2)) {
code_r0x82bd83f8:
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      return 2;
    }
code_r0x82bd8448:
    if (param_2 < uVar7) {
code_r0x82bd8434:
      uVar4 = 1;
      goto code_r0x82bd8438;
    }
  }
  else {
    if ((param_2 < uVar3) && (uVar5 < param_2)) goto code_r0x82bd83f8;
    if (uVar7 < uVar5) {
      if ((param_2 < uVar7) || (uVar5 < param_2)) goto code_r0x82bd8434;
    }
    else if (uVar3 <= param_2) goto code_r0x82bd8448;
  }
  uVar4 = 0;
  uVar7 = (param_2 - uVar7) + 0x800;
  iVar8 = (int)uVar7;
  *param_3 = (__int64)
             (int)((iVar8 + ((iVar8 >> 0xb) + (unsigned int)(iVar8 < 0 && (uVar7 & 0x7ff) != 0)) * -0x800 &
                   0xffff) * 0x14) + *(__int64 *)(param_1 + 0x10);
code_r0x82bd8438:
  *(unsigned int *)(param_1 + 0x178) = 0;
  return uVar4;
}

