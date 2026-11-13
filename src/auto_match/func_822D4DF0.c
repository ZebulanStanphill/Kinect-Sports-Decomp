extern int fn_82230218();
extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_822C70F0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821ADA54;


void fn_822D4DF0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
                  unsigned int param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int *puStack_70;
  unsigned int *puStack_6c;
  
  puStack_6c = (unsigned int *)fn_8265C9E0(0x8c);
  if (puStack_6c == (unsigned int *)0x0) {
    puStack_6c = (unsigned int *)0x0;
  }
  else {
    puVar3 = puStack_6c + 3;
    puStack_6c[1] = 1;
    *puStack_6c = &lbl_821AD588;
    puStack_6c[2] = 1;
    if (puVar3 != (unsigned int *)0x0) {
      iVar2 = fn_82365BD8(&puStack_70,param_8);
      fn_822C70F0(puVar3,param_2,param_3);
      puStack_6c[0x18] = param_4;
      puStack_6c[0x19] = param_5;
      *puVar3 = &lbl_821ADA54;
      fn_8223B688(puStack_6c + 0x1a,param_6);
      fn_82365BD8(puStack_6c + 0x21,iVar2);
      puStack_6c[0x17] = 1;
      if (*(int *)(iVar2 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  puStack_70 = puStack_6c + 3;
  uVar1 = fn_822C7578(puStack_6c + 0x13,(unsigned __int64)*param_8 + 4);
  fn_82230218(uVar1,param_7,0,0xffffffffffffffff);
  fn_822C8B40(param_1,&puStack_70);
  if (puStack_6c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (param_8[1] != 0) {
    fn_822315A0();
  }
  return;
}

