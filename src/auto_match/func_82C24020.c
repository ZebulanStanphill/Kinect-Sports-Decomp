extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82F691F0();
extern unsigned int uStack_64;
extern unsigned int uStack_68;


unsigned __int64 fn_82C24020(int param_1,__int64 param_2)

{
  int *piVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned short auStack_70;
  unsigned short *puStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int auStack_60 [12];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar4 = param_2 - 0x18;
  auStack_60[0] = 0;
  uStack_68 = 0;
  puStack_6c = (unsigned short *)0x0;
  uStack_64 = (unsigned int)uVar4;
  auStack_70 = 0;
  uVar3 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar4);
  if (-1 < (int)uVar3) {
    if ((uVar4 & 0xffffffff) < 2) {
      uVar3 = 0xffffffff8050000c;
    }
    else {
      uVar3 = fn_82C1E938(param_1,&auStack_70,auStack_60,&uStack_68,&uStack_64);
      if ((-1 < (int)uVar3) &&
         (uVar3 = fn_82C10AD0(piVar1[0x38],0xb,8,&puStack_6c), -1 < (int)uVar3)) {
        puStack_6c[0] = 0;
        puStack_6c[1] = 0;
        puStack_6c[2] = 0;
        puStack_6c[3] = 0;
        *(unsigned short **)(piVar1[1] + 0x6c) = puStack_6c;
        *puStack_6c = auStack_70;
        if ((unsigned __int64)auStack_70 == 0) {
          uVar4 = (uVar4 - uStack_68) - 2;
          if ((uVar4 != 0) &&
             (uVar3 = (**(int (***)())(*piVar1 + 0x14))(*piVar1,uVar4), -1 < (int)uVar3)) {
            *(unsigned __int64 *)(piVar1 + 2) = (uVar4 & 0xffffffff) + *(__int64 *)(piVar1 + 2);
          }
        }
        else {
          lVar2 = (unsigned __int64)auStack_70 << 2;
          uVar3 = fn_82C10AD0(piVar1[0x38],0xb,lVar2,puStack_6c + 2);
          if (-1 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(unsigned int *)(puStack_6c + 2),0,lVar2);
          }
        }
      }
    }
  }
  return uVar3;
}

