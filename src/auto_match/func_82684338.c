extern int fn_82680B50();
extern int fn_82681320();
extern int fn_82683FF8();


unsigned __int64
fn_82684338(int *param_1,int param_2,__int64 param_3,unsigned __int64 param_4,int *param_5,int *param_6,
             unsigned __int64 param_7)

{
  int (**pcVar1)();
  unsigned __int64 uVar2;
  
  uVar2 = (**(int (***)())(*param_1 + 4))();
  if (param_2 == 10) {
    if (param_5 != (int *)0x0) {
      pcVar1 = *(int (***)())(*param_5 + 8);
LAB_8268443c:
      uVar2 = (*pcVar1)(param_5,param_1,param_7);
      return uVar2;
    }
    if ((param_4 & 0xffffffff) == 0) {
      return 0;
    }
    uVar2 = 0xffffffff82005954;
  }
  else if (param_2 == 0xb) {
    if (param_6 != (int *)0x0) {
      pcVar1 = *(int (***)())(*param_6 + 4);
      param_5 = param_6;
      goto LAB_8268443c;
    }
    if ((param_4 & 0xffffffff) == 0) {
      return 0;
    }
    uVar2 = 0xffffffff8200598c;
  }
  else {
    if (param_2 == 0xd) {
      uVar2 = fn_82680B50(param_1,-(param_3 == 3) & 9,param_7);
      return uVar2;
    }
    if (param_2 == 0xe) {
      uVar2 = fn_82681320(param_1,param_7,uVar2);
      return uVar2;
    }
    if ((param_4 & 0xffffffff) == 0) {
      return 0;
    }
    uVar2 = 0xffffffff820059c4;
  }
  fn_82683FF8(param_4 + 0xc,uVar2);
  return 0;
}

