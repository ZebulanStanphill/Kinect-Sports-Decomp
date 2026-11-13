extern unsigned int *auStack_28;
extern int fn_82A45C40();
extern int fn_82A48EE8();
extern int fn_82A495D8();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


__int64 fn_82A49908(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  int *piVar4;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned int auStack_28;
  
  auStack_28 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  lVar2 = fn_82A495D8(param_1 + -0x8c,param_2,&auStack_28,&uStack_2c,&iStack_30);
  if (lVar2 < 0) {
    if (iStack_30 != 0) {
      fn_82A45C40();
    }
    if (uStack_2c != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + -0x58) + 0x3f74);
      do {
        if (piVar4 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar4;
          piVar4 = (int *)piVar4[1];
        }
      } while ((uStack_2c < *(unsigned int *)(iVar3 + 0xfc)) ||
              (*(int *)(iVar3 + 0x100) + *(unsigned int *)(iVar3 + 0xfc) <= uStack_2c));
      fn_82A48EE8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x14c) != 0) {
      fn_82A45C40();
    }
    uVar1 = *(unsigned int *)(param_1 + 0x138);
    if (uVar1 != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + -0x58) + 0x3f74);
      do {
        if (piVar4 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar4;
          piVar4 = (int *)piVar4[1];
        }
      } while ((uVar1 < *(unsigned int *)(iVar3 + 0xfc)) ||
              (*(int *)(iVar3 + 0x100) + *(unsigned int *)(iVar3 + 0xfc) <= uVar1));
      fn_82A48EE8();
    }
    *(unsigned int *)(param_1 + 0x134) = auStack_28;
    *(unsigned int *)(param_1 + 0x138) = uStack_2c;
    *(int *)(param_1 + 0x14c) = iStack_30;
  }
  return lVar2;
}

