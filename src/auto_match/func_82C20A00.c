extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_90;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82C1EAB8();
extern int fn_82C1EE20();
extern int fn_82C1EFD0();
extern int fn_82F691F0();
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


unsigned __int64 fn_82C20A00(int param_1,__int64 param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned short auStack_90 [2];
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int auStack_78 [2];
  unsigned char auStack_70 [112];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uStack_80 = 0;
  uVar6 = param_2 - 0x18;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_84 = (unsigned int)uVar6;
  uStack_7c = 0;
  auStack_78[0] = 0;
  uVar3 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar6);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  if (0x17 < (uVar6 & 0xffffffff)) {
    uVar3 = fn_82C1EE20(param_1,auStack_70,&uStack_80,&uStack_88,&uStack_84);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar3 = fn_82C1EAB8(param_1,auStack_78,&uStack_80,&uStack_88,&uStack_84);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar3 = fn_82C1E938(param_1,auStack_90,&uStack_80,&uStack_88,&uStack_84);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar3 = fn_82C1E938(param_1,auStack_90,&uStack_80,&uStack_88,&uStack_84);
    uVar2 = auStack_78[0];
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar8 = 0x18;
    if (*(short *)(piVar1[1] + 0x34) < 1) {
      uVar5 = (unsigned __int64)auStack_78[0];
      *(unsigned int *)(piVar1[1] + 0x5c) = auStack_78[0];
      if (uVar5 == 0) {
        uVar6 = (uVar6 - uStack_88) - 0x18;
        if (uVar6 == 0) {
          return uVar3;
        }
        uVar3 = (**(int (***)())(*piVar1 + 0x14))(*piVar1,uVar6);
        if (-1 < (int)uVar3) {
          *(unsigned __int64 *)(piVar1 + 2) = (uVar6 & 0xffffffff) + *(__int64 *)(piVar1 + 2);
          return uVar3;
        }
        return uVar3;
      }
      uVar4 = (unsigned __int64)auStack_90[0];
      if (uVar4 != 0) {
        uVar8 = uVar4 + 0x18;
        if ((uVar6 & 0xffffffff) < uVar8) {
          return 0xffffffff8050000c;
        }
        uVar3 = fn_82C1EFD0(param_1,0,uVar4,&uStack_80,&uStack_88,&uStack_84);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      if (((uVar5 + ((unsigned __int64)uVar2 & 0x1fffffff) * 8 & 0x7fffffff) * 2 + uVar8 & 0xffffffff) <=
          (uVar6 & 0xffffffff)) {
        lVar7 = (uVar5 + ((unsigned __int64)uVar2 & 0x3fffffff) * 4 & 0x1fffffff) << 3;
        uVar3 = fn_82C10AD0(piVar1[0x38],0xb,lVar7,&uStack_8c);
        if (-1 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(uStack_8c,0,lVar7);
        }
        return uVar3;
      }
    }
  }
  return 0xffffffff8050000c;
}

