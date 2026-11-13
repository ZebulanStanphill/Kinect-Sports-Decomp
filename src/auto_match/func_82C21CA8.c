extern unsigned int *auStack_70;
extern unsigned int *auStack_7c;
extern int fn_82C10AD0();
extern int fn_82C1EAB8();
extern int fn_82C1EE20();
extern int fn_82F691F0();
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


unsigned __int64 fn_82C21CA8(int param_1,__int64 param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int auStack_7c [3];
  unsigned char auStack_70 [112];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uStack_80 = 0;
  uVar4 = param_2 - 0x18;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_84 = (unsigned int)uVar4;
  auStack_7c[0] = 0;
  uVar2 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar4);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if (0x13 < (uVar4 & 0xffffffff)) {
    uVar2 = fn_82C1EE20(param_1,auStack_70,&uStack_80,&uStack_88,&uStack_84);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar2 = fn_82C1EAB8(param_1,auStack_7c,&uStack_80,&uStack_88,&uStack_84);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar3 = (unsigned __int64)auStack_7c[0];
    *(unsigned int *)(piVar1[1] + 0x70) = auStack_7c[0];
    if (*(short *)(piVar1[1] + 0x30) < 1) {
      if (auStack_7c[0] != 0) {
        uVar2 = fn_82C10AD0(piVar1[0x38],0xb,uVar3 * 0x1c,&uStack_8c);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uStack_8c,0,uVar3 * 0x1c);
      }
      uVar4 = (uVar4 - uStack_88) - 0x14;
      if (uVar4 == 0) {
        return uVar2;
      }
      uVar2 = (**(int (***)())(*piVar1 + 0x14))(*piVar1,uVar4);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(unsigned __int64 *)(piVar1 + 2) = (uVar4 & 0xffffffff) + *(__int64 *)(piVar1 + 2);
      return uVar2;
    }
  }
  return 0xffffffff8050000c;
}

