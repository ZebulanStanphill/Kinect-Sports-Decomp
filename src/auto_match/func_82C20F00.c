extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82F691F0();
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


unsigned __int64 fn_82C20F00(int param_1,__int64 param_2)

{
  int *piVar1;
  __int64 lVar2;
  unsigned short uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned short auStack_80 [2];
  unsigned int uStack_7c;
  unsigned short *puStack_78;
  unsigned int uStack_74;
  unsigned int auStack_70 [28];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar5 = param_2 - 0x18;
  auStack_70[0] = 0;
  uStack_7c = 0;
  puStack_78 = (unsigned short *)0x0;
  uStack_74 = (unsigned int)uVar5;
  auStack_80[0] = 0;
  uVar4 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar5);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  if (1 < (uVar5 & 0xffffffff)) {
    uVar4 = fn_82C1E938(param_1,auStack_80,auStack_70,&uStack_7c,&uStack_74);
    uVar3 = auStack_80[0];
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    if (*(short *)(piVar1[1] + 0x3a) < 1) {
      uVar6 = (unsigned __int64)auStack_80[0];
      if (uVar6 != 0) {
        uVar4 = fn_82C10AD0(piVar1[0x38],0xb,8,&puStack_78);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        lVar2 = uVar6 << 4;
        puStack_78[0] = 0;
        puStack_78[1] = 0;
        puStack_78[2] = 0;
        puStack_78[3] = 0;
        *(unsigned short **)(piVar1[1] + 0x50) = puStack_78;
        *puStack_78 = uVar3;
        uVar4 = fn_82C10AD0(piVar1[0x38],0xb,lVar2,puStack_78 + 2);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(unsigned int *)(puStack_78 + 2),0,lVar2);
      }
      uVar5 = (uVar5 - uStack_7c) - 2;
      if (uVar5 == 0) {
        return uVar4;
      }
      uVar4 = (**(int (***)())(*piVar1 + 0x14))(*piVar1,uVar5);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      *(unsigned __int64 *)(piVar1 + 2) = (uVar5 & 0xffffffff) + *(__int64 *)(piVar1 + 2);
      return uVar4;
    }
  }
  return 0xffffffff8050000c;
}

