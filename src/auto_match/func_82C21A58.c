extern unsigned int *auStack_70;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82F691F0();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;


unsigned __int64 fn_82C21A58(int param_1,__int64 param_2)

{
  int *piVar1;
  unsigned short uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned short auStack_70 [2];
  unsigned short *puStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uStack_60 = 0;
  uVar4 = param_2 - 0x18;
  uStack_68 = 0;
  puStack_6c = (unsigned short *)0x0;
  uStack_64 = (unsigned int)uVar4;
  auStack_70[0] = 0;
  uStack_5c = 0;
  auStack_70[1] = 0;
  uVar3 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar4);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  if (1 < (uVar4 & 0xffffffff)) {
    uVar3 = fn_82C1E938(param_1,auStack_70,&uStack_60,&uStack_68,&uStack_64);
    uVar2 = auStack_70[0];
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if (((*(short *)(piVar1[1] + 0x2e) < 1) &&
        (uVar5 = (unsigned __int64)auStack_70[0], uVar5 * 6 + 2 <= (uVar4 & 0xffffffff))) && (uVar5 < 0x80)
       ) {
      uVar3 = fn_82C10AD0(piVar1[0x38],0xb,8,&puStack_6c);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      puStack_6c[0] = 0;
      puStack_6c[1] = 0;
      puStack_6c[2] = 0;
      puStack_6c[3] = 0;
      *(unsigned short **)(piVar1[1] + 0x68) = puStack_6c;
      *puStack_6c = uVar2;
      uVar3 = fn_82C10AD0(piVar1[0x38],0xb,uVar5 << 3,puStack_6c + 2);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(unsigned int *)(puStack_6c + 2),0,uVar5 << 3);
    }
  }
  return 0xffffffff8050000c;
}

