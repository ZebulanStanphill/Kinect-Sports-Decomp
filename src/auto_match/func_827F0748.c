extern int fn_827F3A60();
extern int fn_827F3AB0();


__int64 fn_827F0748(__int64 param_1)

{
  int iVar1;
  __int64 lVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  __int64 lVar8;
  
  iVar1 = (int)param_1;
  uVar6 = (unsigned __int64)*(unsigned short *)(iVar1 + 0xe0);
  if (uVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = uVar6 - 1;
    uVar7 = 0;
    if (-1 < lVar2) {
      lVar8 = (uVar6 + 7) * 4 + param_1;
      uVar7 = 0;
      do {
        uVar3 = fn_827F3AB0(*(unsigned int *)((*(unsigned short *)lVar8 + 0x28) * 4 + iVar1));
        if (uVar7 < uVar3) {
          uVar7 = uVar3;
        }
        lVar2 = lVar2 + -1;
        lVar8 = lVar8 + -4;
      } while (-1 < lVar2);
    }
    iVar4 = (**(int (***)())(**(int **)(iVar1 + 4) + 8))();
    iVar5 = fn_827F3A60(param_1);
    lVar2 = (__int64)iVar5 * (__int64)(int)(*(unsigned short *)(iVar1 + 0xe6) - 1) +
            (__int64)(int)(unsigned int)*(unsigned short *)(iVar1 + 0xe4) *
            (__int64)(int)((iVar4 + 0xfU & 0xfffffff0) + uVar7);
  }
  return lVar2;
}

