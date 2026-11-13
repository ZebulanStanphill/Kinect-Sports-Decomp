extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B730C;


unsigned int * fn_823FC3B8(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  char cVar3;
  int iVar2;
  unsigned int uVar4;
  int iVar5;
  unsigned char auStack_50 [1];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (unsigned int *)0x0) {
    iVar2 = param_2[1];
    uVar1 = *param_2;
    uVar4 = 0;
    iVar5 = 0;
    if (iVar2 != 0) {
      cVar3 = fn_8223AAC0(iVar2);
      if (cVar3 != '\0') {
        uVar4 = uVar1;
        iVar5 = iVar2;
      }
    }
    iVar2 = fn_82365BD8(auStack_50,param_3);
    param_1[4] = 0;
    param_1[3] = &lbl_821B730C;
    param_1[7] = 0;
    param_1[8] = 0;
    if ((iVar5 != 0) && (cVar3 = fn_8223AAC0(iVar5), cVar3 != '\0')) {
      if (param_1[8] != 0) {
        fn_822315A0();
      }
      param_1[8] = iVar5;
      param_1[7] = uVar4;
    }
    fn_82365BD8(param_1 + 9,iVar2);
    if (iVar5 != 0) {
      fn_822315A0(iVar5);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

