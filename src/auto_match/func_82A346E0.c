extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int lbl_820893C4;
extern unsigned int uStack00000028;


void fn_82A346E0(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int param_5,
                  unsigned int *param_6,unsigned int *param_7,unsigned int *param_8)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned __int64 uStack00000028;
  int *in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [40];
  __int64 lStack_58;
  
  uVar7 = *(unsigned int *)(param_2 + 0xc);
  uVar4 = uVar7 >> 6 & 0xffff;
  uStack00000028 = param_4;
  if (uVar4 == 0) {
    (**(int (***)())(*param_1 + 0x20))(param_3,auStack_90,auStack_80,0x38,0x22);
    uVar9 = param_4 + 0x10;
    if ((__int64)uVar9 < lStack_58) {
      uVar8 = (unsigned __int64)param_5;
      iVar1 = 0x8000 << (*(unsigned int *)(param_2 + 0xc) >> 4 & 3);
      uVar6 = (unsigned __int64)iVar1;
      *param_6 = 0;
      *param_7 = (unsigned int)(uVar9 / uVar6);
      trapDoubleWordImmediate(6,uVar6,0);
      trapDoubleWordImmediate(6,uVar6,0);
      trapDoubleWordImmediate(6,uVar6,0);
      uVar10 = (lStack_58 - param_4) - 0x10;
      *param_8 = (unsigned int)((uVar8 + uVar9) / uVar6);
      *in_stack_00000054 = (int)uVar9 - (int)(uVar9 / uVar6) * iVar1;
      if (uVar8 < uVar10) {
        uVar10 = uVar8;
      }
      *in_stack_0000005c = (unsigned int)uVar10;
      return;
    }
  }
  else {
    *param_6 = 1;
    uVar9 = (unsigned __int64)(uVar7 >> 0x16) & 3;
    uVar7 = 0;
    uVar11 = 0;
    if (uVar4 != 0) {
      do {
        uVar8 = (__int64)*(int *)(&lbl_820893C4 + (int)(uVar9 << 2)) * (__int64)(int)uVar11;
        uVar3 = (unsigned int)uVar8 & 0x1f;
        piVar2 = (int *)(((unsigned int)((uVar8 & 0xffffffff) >> 3) & 0x1ffffffc) + param_2 + 0x10);
        uVar7 = 0x20 - uVar3;
        uVar7 = ((unsigned int)piVar2[1] >> (uVar7 & 0x3f) & (uVar7 >> 5) - 1 | *piVar2 << uVar3) >>
                (0x20U - *(int *)(&lbl_820893C4 + (int)(uVar9 << 2)) & 0x3f);
        uStack00000028 = param_4;
        if (param_4 < uVar7) break;
        uVar11 = uVar11 + 1;
        param_4 = param_4 - uVar7;
        uStack00000028 = param_4;
      } while (uVar11 < uVar4);
    }
    if (uVar11 != uVar4) {
      *param_7 = uVar11;
      *in_stack_00000054 = (((unsigned __int64)(uStack00000028) >> 32) & 0xFFFFFFFF);
      if (param_5 <= uVar7 - (((unsigned __int64)(uStack00000028) >> 32) & 0xFFFFFFFF)) {
        *param_8 = uVar11;
        *in_stack_0000005c = param_5;
        return;
      }
      uVar11 = uVar11 + 1;
      uVar7 = param_5 - (uVar7 - (((unsigned __int64)(uStack00000028) >> 32) & 0xFFFFFFFF));
      if (uVar11 < uVar4) {
        do {
          uVar8 = (__int64)*(int *)(&lbl_820893C4 + (int)(uVar9 << 2)) * (__int64)(int)uVar11;
          uVar5 = (unsigned int)uVar8 & 0x1f;
          piVar2 = (int *)(((unsigned int)((uVar8 & 0xffffffff) >> 3) & 0x1ffffffc) + param_2 + 0x10);
          uVar3 = 0x20 - uVar5;
          uVar3 = ((unsigned int)piVar2[1] >> (uVar3 & 0x3f) & (uVar3 >> 5) - 1 | *piVar2 << uVar5) >>
                  (0x20U - *(int *)(&lbl_820893C4 + (int)(uVar9 << 2)) & 0x3f);
          if (uVar7 <= uVar3) break;
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 - uVar3;
        } while (uVar11 < uVar4);
      }
      if (uVar11 != uVar4) {
        *param_8 = uVar11;
        *in_stack_0000005c = param_5;
        return;
      }
      param_5 = param_5 - uVar7;
      *param_8 = uVar4 - 1;
      goto LAB_82a34918;
    }
  }
  param_5 = 0;
  *param_7 = 0xffffffff;
LAB_82a34918:
  *in_stack_0000005c = param_5;
  return;
}

