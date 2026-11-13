extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern unsigned int lbl_821B7444;


unsigned int *
fn_823FE080(unsigned int *param_1,int param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  
  param_1[1] = 0;
  *param_1 = &lbl_821B7444;
  fn_82365BD8(param_1 + 6);
  param_1[8] = 0;
  param_1[9] = 0;
  iVar1 = param_3[1];
  uVar2 = *param_3;
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      if (param_1[9] != 0) {
        fn_822315A0();
      }
      param_1[9] = iVar1;
      param_1[8] = uVar2;
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar1 = param_4[1];
  uVar2 = *param_4;
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      if (param_1[0xb] != 0) {
        fn_822315A0();
      }
      param_1[0xb] = iVar1;
      param_1[10] = uVar2;
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar1 = param_5[1];
  uVar2 = *param_5;
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    if (param_1[0xd] != 0) {
      fn_822315A0();
    }
    param_1[0xd] = iVar1;
    param_1[0xc] = uVar2;
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  if (param_5[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

