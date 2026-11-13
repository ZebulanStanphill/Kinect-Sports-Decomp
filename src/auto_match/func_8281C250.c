extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_8281B838();
extern int fn_82F691F0();


void fn_8281C250(int param_1,__int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned char auStack_40 [4];
  unsigned char auStack_3c [60];
  
  lVar2 = param_2;
  lVar3 = param_3;
  if ((*(unsigned int *)(param_1 + 0xc) & 4) != 0) {
    lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x78) + param_2;
    lVar3 = param_3 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x78) & 0x7fffffff) * -2;
  }
  if ((*(unsigned int *)(param_1 + 0xc) & 0x40) != 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x78);
    fn_8281B838(param_2,(unsigned __int64)uVar1,0xbb,auStack_3c,auStack_40);
    fn_8281B838((unsigned __int64)uVar1 + param_2 + lVar3,*(unsigned int *)(param_1 + 0x78),0xdd,auStack_3c
                  ,auStack_40);
  }
  if ((*(unsigned int *)(param_1 + 0xc) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_2,0xee,param_3);
  }
  if ((*(unsigned int *)(param_1 + 0xc) & 4) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x78) * -2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x78) * 2;
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (int)lVar3;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (int)lVar3;
  if (*(int (***)())(param_1 + 0x24) != (int (**)())0x0) {
    (**(int (***)())(param_1 + 0x24))(param_1,lVar2);
  }
  return;
}

