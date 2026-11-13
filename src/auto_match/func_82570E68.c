extern int fn_8251E5A0();
extern int fn_82572A20();


void fn_82570E68(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)(param_1 + 0x380);
  if ((*(unsigned int *)(param_1 + 0x4b8) & 1) != 0) {
    uVar1 = *(unsigned int *)(param_1 + 900);
    for (uVar2 = *puVar3; uVar2 < uVar1; uVar2 = uVar2 + 0xd0) {
      if ((unsigned __int64)*(unsigned int *)(uVar2 + 0x94) == (param_2 & 0xffffffff)) {
        fn_8251E5A0(param_1 + 0x394,
                        (__int64)((int)(uVar2 - *puVar3) / (int)(unsigned int)*(unsigned short *)(param_1 + 0x38c))
                        * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x3a0) +
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x394));
        fn_8251E5A0(puVar3,uVar2);
        uVar2 = uVar2 - 0xd0;
        uVar1 = uVar1 - 0xd0;
      }
    }
    uVar1 = *(unsigned int *)(param_1 + 0x4a8);
    for (uVar2 = *(unsigned int *)(param_1 + 0x4a4); uVar2 < uVar1; uVar2 = uVar2 + 8) {
      fn_82572A20(*(unsigned int *)(uVar2 + 4),param_2);
    }
  }
  return;
}

