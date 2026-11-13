extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82C10AD0();
extern int fn_82C1EAB8();
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern int memset();
extern unsigned int iStack_78;
extern unsigned int uStack_68;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


unsigned __int64 fn_82C23120(int param_1,__int64 param_2,unsigned char param_3,unsigned char *param_4)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_7c;
  struct { int first; unsigned int second; } stack_pair_78;

  unsigned int auStack_70 [2];
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [16];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  auStack_70[0] = 0;
  uVar3 = param_2 - 0x18;
  uStack_7c = 0;
  stack_pair_78.second = (unsigned int)uVar3;
  lVar4 = 0;
  stack_pair_78.first = 0;
  uStack_68 = 0;
  uVar2 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar3);
  if ((int)uVar2 < 0) goto LAB_82c2332c;
  if (0xf < (uVar3 & 0xffffffff)) {
    lVar4 = 0x10;
    uVar2 = fn_82C1EE20(param_1,auStack_60,auStack_70,&uStack_7c,&stack_pair_78.second);
    if ((int)uVar2 < 0) goto LAB_82c2332c;
    if (0x1f < (uVar3 & 0xffffffff)) {
      lVar4 = 0x20;
      uVar2 = fn_82C1EC50(param_1,&uStack_68,auStack_70,&uStack_7c,&stack_pair_78.second);
      if (-1 < (int)uVar2) {
        *(int *)(param_4 + 4) = (int)((uStack_68 & 0xffffffff) / 10000);
        uVar2 = fn_82C1EAB8(param_1,&stack_pair_78.first,auStack_70,&uStack_7c,&stack_pair_78.second);
        if (-1 < (int)uVar2) {
          *(int *)(param_4 + 8) = stack_pair_78.first;
          uVar2 = fn_82C1EAB8(param_1,&stack_pair_78.first,auStack_70,&uStack_7c,&stack_pair_78.second);
          if (-1 < (int)uVar2) {
            *param_4 = param_3;
            *(int *)(param_4 + 0xc) = stack_pair_78.first;
            if (stack_pair_78.first != 0) {
              uVar2 = fn_82C10AD0(piVar1[0x38],0xb,stack_pair_78.first << 3,param_4 + 0x10);
              if (-1 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
                memset(*(unsigned int *)(param_4 + 0x10),0,*(int *)(param_4 + 0xc) << 3);
              }
            }
          }
        }
      }
      goto LAB_82c2332c;
    }
  }
  uVar2 = 0xffffffff8050000c;
LAB_82c2332c:
  do {
    uVar5 = (uVar3 - uStack_7c) - lVar4;
    if (uVar5 == 0) {
      return uVar2;
    }
    uVar2 = (**(int (***)())(*piVar1 + 0x14))(*piVar1,uVar5);
  } while ((int)uVar2 < 0);
  *(unsigned __int64 *)(piVar1 + 2) = (uVar5 & 0xffffffff) + *(__int64 *)(piVar1 + 2);
  return uVar2;
}

