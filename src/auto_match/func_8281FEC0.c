extern int fn_8281FCC8();
extern int fn_82F68CC0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8281FEC0(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  char cStack_44;
  
  uVar3 = fn_8281FCC8();
  uVar4 = 0;
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x28);
  if (uVar1 != 0) {
    uVar2 = *(unsigned int *)(param_1 + 0x44);
    lVar5 = 0;
    do {
      fn_82F68CC0(&uStack_50,lVar5 + (unsigned __int64)uVar2,0xe);
      if ((uStack_50 == uVar3) && (cStack_44 == *(char *)(param_1 + 0x78))) {
        *param_3 = uStack_4c;
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0xe;
    } while (uVar4 < uVar1);
  }
  return;
}

