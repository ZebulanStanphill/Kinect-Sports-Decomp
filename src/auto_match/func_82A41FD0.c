#define true 1
extern int fn_82A40AD8();
extern int fn_82A412D8();
extern int fn_82A41AE8();
extern int fn_82A4F4E0();


void fn_82A41FD0(unsigned __int64 param_1)

{
  unsigned int uVar1;
  
  while( true ) {
    uVar1 = fn_82A40AD8(param_1);
    if (uVar1 == 0) break;
    if ((uVar1 & 0xffffffff) != 0) {
      fn_82A41AE8(uVar1);
      fn_82A4F4E0(uVar1);
    }
  }
  fn_82A412D8(param_1);
  return;
}

