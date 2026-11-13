extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822DD8B0();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


void fn_822D47D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned int *puStack_90;
  unsigned int *puStack_8c;
  unsigned char auStack_80 [32];
  
  puStack_8c = (unsigned int *)fn_8265C9E0(0xb0);
  if (puStack_8c == (unsigned int *)0x0) {
    puStack_8c = (unsigned int *)0x0;
  }
  else {
    puStack_8c[1] = 1;
    *puStack_8c = &lbl_821A8D8C;
    puStack_8c[2] = 1;
    if (puStack_8c + 4 != (unsigned int *)0x0) {
      uVar1 = fn_82365BD8(&puStack_90,param_8);
      fn_822DD8B0(puStack_8c + 4,param_2,param_3,param_4,param_5,param_6,uVar1);
    }
  }
  puStack_90 = puStack_8c + 4;
  puVar2 = puStack_8c + 0x14;
  uVar1 = fn_822C7578(puVar2,(unsigned __int64)*param_8 + 4);
  fn_82230218(uVar1,param_7,0,0xffffffffffffffff);
  fn_82230110(auStack_80,0xffffffff821ad2f4);
  uVar1 = fn_822C7578(puVar2,auStack_80);
  fn_82230218(uVar1,param_7,0,0xffffffffffffffff);
  fn_82230300(auStack_80,1,0);
  fn_822C8B40(param_1,&puStack_90);
  if (puStack_8c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (param_8[1] != 0) {
    fn_822315A0();
  }
  return;
}

