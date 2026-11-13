extern int fn_82A40BA8();
extern int fn_82A411B8();
extern int fn_82A4F4E0();
extern int fn_82A761F8();


void fn_82A599E8(int *param_1)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int *piVar5;
  
  lVar4 = 0xd;
  piVar2 = param_1;
  do {
    piVar5 = piVar2 + 10;
    iVar1 = *piVar5;
    while (iVar1 != 0) {
      uVar3 = fn_82A40BA8(piVar2 + 2);
      fn_82A761F8();
      fn_82A4F4E0(uVar3);
      iVar1 = *piVar5;
    }
    lVar4 = lVar4 + -1;
    piVar2 = piVar5;
  } while (lVar4 != 0);
  if (param_1[0x85] != 0) {
    fn_82A4F4E0();
    param_1[0x85] = 0;
  }
  if (param_1[0x88] != 0) {
    fn_82A4F4E0();
    param_1[0x88] = 0;
  }
  param_1 = param_1 + 0x84;
  lVar4 = 0xc;
  do {
    param_1 = param_1 + -10;
    fn_82A411B8(param_1);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

