extern unsigned int *auStack_220;
extern int fn_82F64020();
extern int fn_82F664B0();
extern int fn_82F69CA0();
extern int fn_82F6F870();
extern int fn_82F91548();
extern int fn_82F96B30();
extern unsigned int lbl_831BB8F0;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_20;


void fn_82F93A68(unsigned int param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  unsigned __int64 uVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  int *piStack0000002c;
  unsigned char auStack_220 [496];
  unsigned int uStack_20;
  
  uStack_20 = lbl_831BB8F0;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  piStack0000002c = param_4;
  fn_82F64020(auStack_220,0x200,0xffffffff8216c0e4,param_2,param_3);
  uVar1 = (**(int (***)())(*piStack0000002c + 8))(piStack0000002c);
  fn_82F96B30(uStack00000014,uVar1,auStack_220);
  fn_82F664B0((unsigned __int64)uStack00000014 + 0x234,0x201,uStack0000001c);
  fn_82F69CA0((unsigned __int64)uStack00000014 + 0x234,0x201);
  fn_82F91548((unsigned __int64)uStack00000014 + 0x20c,piStack0000002c);
  fn_82F6F870(uStack_20);
  return;
}

