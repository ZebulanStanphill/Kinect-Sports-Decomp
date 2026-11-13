extern unsigned int *auStack_80;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82F691F0();
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


unsigned __int64 fn_82C221D8(int param_1,__int64 param_2)

{
  int *piVar1;
  __int64 lVar2;
  unsigned short uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned short auStack_80 [2];
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned short *apuStack_70 [28];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar5 = param_2 - 0x18;
  apuStack_70[0] = (unsigned short *)0x0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_78 = (unsigned int)uVar5;
  auStack_80[0] = 0;
  uVar4 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar5);
  if (-1 < (int)uVar4) {
    if ((*(short *)(piVar1[1] + 0x36) < 1) && (1 < (uVar5 & 0xffffffff))) {
      uVar4 = fn_82C1E938(param_1,auStack_80,&uStack_74,&uStack_7c,&uStack_78);
      uVar3 = auStack_80[0];
      if (-1 < (int)uVar4) {
        uVar6 = (unsigned __int64)auStack_80[0];
        if (uVar6 == 0) {
          uVar5 = (uVar5 - uStack_7c) - 2;
          if ((uVar5 != 0) &&
             (uVar4 = (**(int (***)())(*piVar1 + 0x14))(*piVar1,uVar5), -1 < (int)uVar4)) {
            *(unsigned __int64 *)(piVar1 + 2) = (uVar5 & 0xffffffff) + *(__int64 *)(piVar1 + 2);
          }
        }
        else {
          uVar4 = fn_82C10AD0(piVar1[0x38],0xb,8,apuStack_70);
          if (-1 < (int)uVar4) {
            apuStack_70[0][0] = 0;
            apuStack_70[0][1] = 0;
            apuStack_70[0][2] = 0;
            apuStack_70[0][3] = 0;
            lVar2 = uVar6 * 0x14;
            *(unsigned short **)(piVar1[1] + 0x60) = apuStack_70[0];
            *apuStack_70[0] = uVar3;
            uVar4 = fn_82C10AD0(piVar1[0x38],0xb,lVar2,apuStack_70[0] + 2);
            if (-1 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(*(unsigned int *)(apuStack_70[0] + 2),0,lVar2);
            }
          }
        }
      }
    }
    else {
      uVar4 = 0xffffffff8050000c;
    }
  }
  return uVar4;
}

