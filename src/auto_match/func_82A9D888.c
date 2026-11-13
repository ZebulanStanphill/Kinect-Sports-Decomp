extern unsigned int *auStack_70;
extern int fn_828F6FA8();
extern int fn_82A9D530();


void fn_82A9D888(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_70 [112];
  
  uVar2 = 0xffffffff82196f18;
  uVar1 = uVar2;
  if ((param_2 & 4) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2d1c,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 8) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2d14,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x10) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2d0c,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x20) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2d04,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x100) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2d00,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x200) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cf8,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x400) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cf0,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x40000) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2ce0,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x400000) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cd8,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x2000000) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cd0,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x1000000) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cc8,uVar1);
  uVar1 = uVar2;
  if ((param_3 & 8) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cb4,uVar1);
  if ((param_3 & 0x20) == 0) {
    uVar2 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2ca8,uVar2);
  if ((param_3 & 0x100) != 0) {
    fn_82A9D530(param_1,0xffffffff820d2c9c,0xffffffff82196f18);
  }
  if ((param_3 & 0x200) != 0) {
    fn_82A9D530(param_1,0xffffffff820d2c88,0xffffffff82196f18);
  }
  if ((param_3 & 0x400) != 0) {
    fn_82A9D530(param_1,0xffffffff820d2c74,0xffffffff82196f18);
    fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_4);
    fn_82A9D530(param_1,0xffffffff820d2c60,auStack_70);
  }
  if ((param_3 & 0x800) != 0) {
    fn_82A9D530(param_1,0xffffffff820d2c48,0xffffffff82196f18);
    fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_5);
    fn_82A9D530(param_1,0xffffffff820d2c34,auStack_70);
    fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_6);
    fn_82A9D530(param_1,0xffffffff820d2c20,auStack_70);
    fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_7);
    fn_82A9D530(param_1,0xffffffff820d2c0c,auStack_70);
  }
  if ((param_3 & 0xc00) != 0) {
    fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_8);
    fn_82A9D530(param_1,0xffffffff820d2bf8,auStack_70);
  }
  if ((param_3 & 0x1000) != 0) {
    fn_82A9D530(param_1,0xffffffff820d2be4,0xffffffff82196f18);
  }
  return;
}

