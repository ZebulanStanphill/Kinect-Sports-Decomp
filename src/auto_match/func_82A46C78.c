extern unsigned int *auStack_20;
extern int fn_82A44370();
extern int fn_82A476E0();
extern int fn_82A4F4E0();


__int64 fn_82A46C78(__int64 param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int auStack_20 [2];
  
  auStack_20[0] = 0;
  lVar2 = fn_82A476E0(param_1 + 0x268,auStack_20);
  uVar1 = auStack_20[0];
  if (-1 < lVar2) {
    iVar3 = fn_82A44370(param_1 + 0x270,auStack_20[0]);
    if (iVar3 == 0) {
      lVar2 = -0x7ff8fff2;
      fn_82A4F4E0(uVar1);
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
}

