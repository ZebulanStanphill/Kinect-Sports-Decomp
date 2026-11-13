extern unsigned int *auStack_b0;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82F691F0();
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;


unsigned __int64 fn_82C23C10(int param_1,__int64 param_2)

{
  int *piVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned short auStack_b0;
  unsigned int uStack_ac;
  unsigned short *puStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  struct { unsigned int first; unsigned int second; } stack_pair_9c;

  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar4 = param_2 - 0x18;
  stack_pair_9c.first = 0;
  uStack_a4 = 0;
  puStack_a8 = (unsigned short *)0x0;
  uStack_ac = 0;
  stack_pair_9c.second = 0;
  uStack_a0 = (unsigned int)uVar4;
  auStack_b0 = 0;
  uVar3 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar4);
  if (-1 < (int)uVar3) {
    if ((uVar4 & 0xffffffff) < 2) {
      uVar3 = 0xffffffff8050000c;
    }
    else {
      uVar3 = fn_82C1E938(param_1,&auStack_b0,&stack_pair_9c.first,&uStack_a4,&uStack_a0);
      if ((-1 < (int)uVar3) &&
         (uVar3 = fn_82C10AD0(piVar1[0x38],0xb,8,&puStack_a8), -1 < (int)uVar3)) {
        puStack_a8[0] = 0;
        puStack_a8[1] = 0;
        puStack_a8[2] = 0;
        puStack_a8[3] = 0;
        *(unsigned short **)((*(short *)(piVar1[1] + 0x48) + 0x21) * 4 + piVar1[1]) = puStack_a8;
        *(short *)(piVar1[1] + 0x48) = *(short *)(piVar1[1] + 0x48) + 1;
        *puStack_a8 = auStack_b0;
        if ((unsigned __int64)auStack_b0 == 0) {
          uVar4 = (uVar4 - uStack_a4) - 2;
          if ((uVar4 != 0) &&
             (uVar3 = (**(int (***)())(*piVar1 + 0x14))(*piVar1,uVar4), -1 < (int)uVar3)) {
            *(unsigned __int64 *)(piVar1 + 2) = (uVar4 & 0xffffffff) + *(__int64 *)(piVar1 + 2);
          }
        }
        else {
          lVar2 = (unsigned __int64)auStack_b0 << 3;
          uVar3 = fn_82C10AD0(piVar1[0x38],0xb,lVar2,puStack_a8 + 2);
          if (-1 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(unsigned int *)(puStack_a8 + 2),0,lVar2);
          }
        }
      }
    }
  }
  return uVar3;
}

