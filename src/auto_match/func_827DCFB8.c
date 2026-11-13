extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_827D5078();
extern int fn_827D5090();
extern int fn_827D50A8();
extern int fn_828171A0();
extern int fn_8281C510();
extern int fn_8281C530();


unsigned __int64
fn_827DCFB8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puStack0000002c;
  unsigned char auStack_30 [16];
  
  puStack0000002c = param_4;
  fn_8281C510(param_2,auStack_30);
  fn_827D5078(*param_4,0);
  iVar2 = fn_8281C530(param_2);
  if (iVar2 == 2) {
    uVar1 = *param_4;
    uVar3 = fn_828171A0(0,0xffffffff8201c380);
    fn_827D5090(uVar1,uVar3);
    uVar1 = *param_4;
    uVar3 = fn_828171A0(0,0xffffffff8201c388);
    fn_827D50A8(uVar1,uVar3);
    uVar3 = 0;
  }
  else {
    uVar3 = 0x65b;
  }
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return uVar3;
}

