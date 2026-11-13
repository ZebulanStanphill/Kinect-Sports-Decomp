extern unsigned int *auStack_70;
extern int fn_82663428();
extern int fn_82663470();
extern int fn_826634A0();
extern int fn_8266C340();
extern int fn_82A2A378();
extern unsigned int iStack_18;
extern unsigned int uStack0000001e;
extern unsigned int uStack00000026;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000046;


unsigned short *
fn_826632D8(unsigned short *param_1,unsigned short param_2,unsigned short param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned short param_7)

{
  unsigned short *puStack00000014;
  unsigned short uStack0000001e;
  unsigned short uStack00000026;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned short uStack00000046;
  unsigned char auStack_70 [88];
  int iStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  puStack00000014 = param_1;
  uStack0000001e = param_2;
  uStack00000026 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000046 = param_7;
  fn_82663428(param_1 + 2);
  fn_826634A0(puStack00000014 + 0x10,uStack00000034);
  fn_82663428(puStack00000014 + 0x1e);
  puStack00000014[0x2c] = uStack00000046;
  iStack_18 = fn_82A2A378(0,0,uStack0000002c,0xffffffffffffffff,auStack_70,0x55,0,0);
  if (iStack_18 < 1) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001d38,0x4e,0xffffffff82001940);
  }
  fn_82663470(puStack00000014 + 2,auStack_70);
  iStack_18 = fn_82A2A378(0,0,uStack0000003c,0xffffffffffffffff,auStack_70,0x55,0,0);
  if (iStack_18 < 1) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001d38,0x53,0xffffffff82001940);
  }
  fn_82663470(puStack00000014 + 0x1e,auStack_70);
  return puStack00000014;
}

