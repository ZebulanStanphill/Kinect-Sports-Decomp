extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82C1EE20();
extern int fn_82F691F0();
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8e;
extern unsigned int uStack_90;


unsigned __int64 fn_82C21328(int param_1,__int64 param_2)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned short uStack_90;
  unsigned short uStack_8e;
  unsigned short *puStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int auStack_80 [4];
  unsigned char auStack_70 [112];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  auStack_80[0] = 0;
  uVar5 = param_2 - 0x18;
  uStack_88 = 0;
  puStack_8c = (unsigned short *)0x0;
  uStack_84 = (unsigned int)uVar5;
  uStack_8e = 0;
  uStack_90 = 0;
  uVar4 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar5);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  if (0x13 < (uVar5 & 0xffffffff)) {
    uVar4 = fn_82C1EE20(param_1,auStack_70,auStack_80,&uStack_88,&uStack_84);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = fn_82C1E938(param_1,&uStack_8e,auStack_80,&uStack_88,&uStack_84);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = fn_82C1E938(param_1,&uStack_90,auStack_80,&uStack_88,&uStack_84);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    if (*(short *)(piVar1[1] + 0x32) < 1) {
      uVar4 = fn_82C10AD0(piVar1[0x38],0xb,0xc,&puStack_8c);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      puStack_8c[0] = 0;
      puStack_8c[1] = 0;
      puStack_8c[2] = 0;
      puStack_8c[3] = 0;
      puStack_8c[4] = 0;
      puStack_8c[5] = 0;
      iVar2 = piVar1[1];
      *(unsigned short **)(iVar2 + 0x54) = puStack_8c;
      puStack_8c[1] = uStack_90;
      if ((unsigned __int64)uStack_90 != 0) {
        lVar3 = (unsigned __int64)uStack_90 << 3;
        uVar4 = fn_82C10AD0(piVar1[0x38],0xb,lVar3,puStack_8c + 2,puStack_8c,iVar2,puStack_8c)
        ;
        if ((int)uVar4 < 0) {
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(unsigned int *)(puStack_8c + 2),0,lVar3);
      }
      *puStack_8c = uStack_8e;
      if ((unsigned __int64)uStack_8e != 0) {
        lVar3 = (unsigned __int64)uStack_8e * 0xc;
        uVar4 = fn_82C10AD0(piVar1[0x38],0xb,lVar3,puStack_8c + 4);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(unsigned int *)(puStack_8c + 4),0,lVar3);
      }
      *(short *)(piVar1[1] + 0x32) = *(short *)(piVar1[1] + 0x32) + 1;
      uVar5 = (uVar5 - uStack_88) - 0x14;
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

