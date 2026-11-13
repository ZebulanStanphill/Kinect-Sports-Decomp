extern unsigned int *auStack_58;
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822FB670();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;


void fn_822FF048(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int *param_6,unsigned int *param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int *puStack_60;
  unsigned int *puStack_5c;
  unsigned char auStack_58 [1];
  
  puVar3 = (unsigned int *)fn_8265C9E0(0x88);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821AD588;
    puVar3[2] = 1;
    if (puVar3 + 3 != (unsigned int *)0x0) {
      fn_822FB670(puVar3 + 3,param_4,param_3,param_2,param_5,0);
    }
  }
  puStack_60 = puVar3 + 3;
  uVar1 = *param_7;
  puStack_5c = puVar3;
  uVar2 = fn_822C7578(puVar3 + 0x13,(unsigned __int64)*param_8 + 4);
  fn_82230218(uVar2,(unsigned __int64)uVar1 + 4,0,0xffffffffffffffff);
  iVar4 = fn_82365BD8(auStack_58,param_8);
  fn_82376640(puVar3 + 0xf,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_1,&puStack_60);
  uVar2 = fn_822C7578((unsigned __int64)*param_6 + 0x40,param_4);
  fn_82230218(uVar2,param_4,0,0xffffffffffffffff);
  uVar2 = fn_822C7578((unsigned __int64)*param_7 + 0x40,param_4);
  fn_82230218(uVar2,param_4,0,0xffffffffffffffff);
  if (puStack_5c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (param_6[1] != 0) {
    fn_822315A0();
  }
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  if (param_8[1] != 0) {
    fn_822315A0();
  }
  return;
}

