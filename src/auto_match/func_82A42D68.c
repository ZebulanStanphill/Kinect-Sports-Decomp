#define true 1
extern int fn_82A40BA8();
extern int fn_82A412D8();
extern int fn_82A42BB0();
extern int fn_82A4F4E0();


void fn_82A42D68(int *param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (*param_1 != 0) {
    uVar2 = 8;
    do {
      uVar3 = 0;
      do {
        fn_82A42BB0(param_1,param_1 + (uVar2 + uVar3) * 0x3c + -0x1d6);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 8);
      uVar2 = uVar2 + 8;
    } while (uVar2 < 0x41);
    while( true ) {
      uVar1 = fn_82A40BA8(param_1 + 0xf0a);
      if (uVar1 == 0) break;
      fn_82A42BB0(param_1,uVar1 + 0xc);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82A412D8(uVar1 + 0x20);
        fn_82A4F4E0(uVar1);
      }
    }
    (**(int (***)())(*(int *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}

