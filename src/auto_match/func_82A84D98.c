extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8265C940();
extern int fn_82A84B20();
extern int fn_82A873E0();
extern int fn_82A87490();
extern int fn_82A8ACB0();
extern int fn_82A8B030();
extern int fn_82A8B0B0();
extern int fn_82A8B5F8();


unsigned __int64 fn_82A84D98(int *param_1,unsigned int param_2,__int64 param_3)

{
  char cVar2;
  int iVar1;
  unsigned __int64 uVar3;
  unsigned int auStack_80 [4];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  if (param_2 < 0x1ca0f) {
    return 0xffffffff8007000e;
  }
  fn_82A8B5F8(auStack_70,0xffffffff820bcb20,0xfa5a,0);
  fn_82A8B0B0(auStack_50,auStack_70,0x1ca0f,param_3);
  cVar2 = fn_82A873E0(auStack_50,auStack_80);
  if ((cVar2 == '\0') || (param_2 - 0x1ca0f < auStack_80[0])) {
    fn_82A8B030(auStack_50);
    return 0xffffffff8007000e;
  }
  cVar2 = fn_82A87490(auStack_50,param_1,param_1 + 1);
  if (cVar2 != '\0') {
    if (*param_1 != 0) {
      iVar1 = fn_8265C940(*param_1,0x20980000);
      param_1[7] = iVar1;
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar1 = fn_8265C940(iVar1,0xffffffffb0980000);
      param_1[8] = iVar1;
    }
    if ((param_1[7] == 0) || (param_1[8] == 0)) {
      fn_82A84B20(param_1);
      uVar3 = 0xffffffff8007000e;
      goto LAB_82a84e3c;
    }
    cVar2 = fn_82A8ACB0(param_1,auStack_50,auStack_80[0],param_3 + 0x1ca0f);
    if ((cVar2 != '\0') && (param_1[5] != 0)) {
      fn_82A8B030(auStack_50);
      return 0;
    }
    fn_82A84B20(param_1);
  }
  uVar3 = 0xffffffff80004005;
LAB_82a84e3c:
  fn_82A8B030(auStack_50);
  return uVar3;
}

