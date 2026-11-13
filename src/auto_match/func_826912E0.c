extern unsigned int *auStack_2c;
extern int fn_82691128();
extern int fn_8270AAF8();
extern unsigned int iStack_30;


void fn_826912E0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int iStack_30;
  unsigned char auStack_2c [44];
  
  if ((param_2 & 0xffffffff) < 0x10) {
    param_2 = 0x10;
  }
  puVar3 = (unsigned int *)(param_1 + 0x10);
  uVar4 = *(unsigned int *)(param_1 + 0x14) + param_2 & ~(unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  iVar1 = fn_8270AAF8(puVar3,uVar4,&iStack_30);
  if (iVar1 == 0) {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
    trapWord(6,uVar2,0);
    uVar2 = (__int64)(int)(((uVar2 + uVar4) - 1 & 0xffffffff) / uVar2) *
            (__int64)(int)*(unsigned int *)(param_1 + 4);
    if ((uVar2 & 0xffffffff) <
        (((((unsigned __int64)((unsigned int)(*(int *)(param_1 + 0x14) + (int)uVar2) >> (*puVar3 & 0x3f)) + 0x1f &
           0xffffffff) >> 3 & 0x1ffffffc) + 0x2f & 0xfffffff0) + uVar4 & 0xffffffff)) {
      do {
        uVar2 = *(unsigned int *)(param_1 + 4) + uVar2;
      } while ((uVar2 & 0xffffffff) <
               (((((unsigned __int64)((unsigned int)(*(int *)(param_1 + 0x14) + (int)uVar2) >> (*puVar3 & 0x3f)) +
                   0x1f & 0xffffffff) >> 3 & 0x1ffffffc) + 0x2f & 0xfffffff0) + uVar4 & 0xffffffff))
      ;
    }
    iStack_30 = fn_82691128(param_1);
    if (iStack_30 == 0) {
      return;
    }
    fn_8270AAF8(puVar3,uVar4,auStack_2c);
  }
  *(int *)(iStack_30 + 0x10) = *(int *)(iStack_30 + 0x10) + 1;
  return;
}

