extern unsigned int *auStack_54;
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C1EAB8();
extern int fn_82F691F0();
extern unsigned int iStack_5c;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned __int64 fn_82C1F818(int param_1,__int64 param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int uStack_60;
  struct { int first; unsigned int second; } stack_pair_5c;

  unsigned int auStack_54;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar5 = param_2 - 0x18;
  auStack_54 = 0;
  uStack_60 = 0;
  stack_pair_5c.second = (unsigned int)uVar5;
  stack_pair_5c.first = 0;
  uVar4 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar5);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  iVar2 = piVar1[1];
  if (*(short *)(iVar2 + 0x3e) < 1) {
    if (*(int *)(iVar2 + 0x78) == 0) {
      uVar4 = fn_82C10AD0(piVar1[0x38],0xb,0x10,iVar2 + 0x78);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      puVar6 = *(unsigned int **)(piVar1[1] + 0x78);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
    }
    puVar6 = (unsigned int *)(*(int *)(piVar1[1] + 0x78) + 4);
    if (*(int *)(*(int *)(piVar1[1] + 0x78) + 4) == 0) {
      uVar4 = fn_82C10AD0(piVar1[0x38],0xb,8,puVar6);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      puVar3 = (unsigned int *)*puVar6;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar6 = (unsigned int *)*puVar6;
      if ((uVar5 & 0xffffffff) < 4) {
        uVar4 = 0xffffffff8050000c;
      }
      else {
        uVar4 = fn_82C1EAB8(param_1,&stack_pair_5c.first,&auStack_54,&uStack_60,&stack_pair_5c.second);
        iVar2 = stack_pair_5c.first;
        if (-1 < (int)uVar4) {
          if (stack_pair_5c.first == 0) {
            *puVar6 = 0;
            *(short *)(piVar1[1] + 0x3e) = *(short *)(piVar1[1] + 0x3e) + 1;
            uVar5 = (uVar5 - uStack_60) - 4;
            if (uVar5 == 0) {
              return uVar4;
            }
            uVar4 = (**(int (***)())(*piVar1 + 0x14))(*piVar1,uVar5);
            if (-1 < (int)uVar4) {
              *(unsigned __int64 *)(piVar1 + 2) = (uVar5 & 0xffffffff) + *(__int64 *)(piVar1 + 2);
              return uVar4;
            }
          }
          else {
            uVar4 = fn_82C10AD0(piVar1[0x38],0xb,stack_pair_5c.first,puVar6 + 1);
            if (-1 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(puVar6[1],0,iVar2);
            }
          }
        }
      }
      if (puVar6 == (unsigned int *)0x0) {
        return uVar4;
      }
      if (puVar6[1] == 0) {
        return uVar4;
      }
      fn_82C10B28(piVar1[0x38],0xb,puVar6 + 1);
      return uVar4;
    }
  }
  return 0xffffffff8050000c;
}

