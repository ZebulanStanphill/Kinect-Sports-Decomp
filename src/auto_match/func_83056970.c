extern int fn_830572B0();
extern int fn_830582A8();
extern int fn_830582B8();
extern int fn_830582C0();
extern int fn_830594D8();
extern int fn_830594E8();
extern int fn_830594F0();
extern int fn_8305ABC8();
extern int fn_8305ABD8();
extern int fn_8305ABE0();
extern int fn_8305B208();


unsigned __int64 fn_83056970(int *param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if (param_2 == 3) {
    if (param_1[3] != 0) {
      return 1;
    }
    iVar2 = fn_830572B0(4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_830582A8();
    }
    param_1[3] = iVar2;
    if (iVar2 == 0) {
      return 0x34;
    }
    uVar1 = fn_830582B8();
    uVar1 = fn_8305B208(param_1 + 10,uVar1);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    uVar1 = fn_830582C0(param_1[3],param_1 + 10,param_1[1]);
  }
  else if (param_2 == 4) {
    if (param_1[2] != 0) {
      return 1;
    }
    iVar2 = fn_830572B0(4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_830594D8();
    }
    param_1[2] = iVar2;
    if (iVar2 == 0) {
      return 0x34;
    }
    uVar1 = fn_830594E8();
    uVar1 = fn_8305B208(param_1 + 5,uVar1);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    uVar1 = fn_830594F0(param_1[2],param_1 + 5,param_1[1]);
  }
  else {
    if (param_2 != 0x3f) {
      return 0x4e;
    }
    if (param_1[4] != 0) {
      return 1;
    }
    iVar2 = fn_830572B0(4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_8305ABC8();
    }
    param_1[4] = iVar2;
    if (iVar2 == 0) {
      return 0x34;
    }
    uVar1 = fn_8305ABD8();
    uVar1 = fn_8305B208(param_1 + 0xf,uVar1);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    uVar1 = fn_8305ABE0(param_1[4],param_1 + 0xf,param_1[1]);
  }
  if ((int)uVar1 == 1) {
    (**(int (***)())(*param_1 + 8))(param_1);
    return 1;
  }
  return uVar1;
}

