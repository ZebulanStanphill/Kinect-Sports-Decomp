extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82864E90();
extern unsigned int lbl_821C3FBC;
extern unsigned int lbl_8327F86C;


unsigned __int64 fn_825338C0(unsigned int param_1,unsigned int param_2,int *param_3)

{
  unsigned int uVar1;
  int *piVar2;
  char cVar5;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *apuStack_40 [16];
  
  uVar1 = lbl_8327F86C;
  piVar2 = (int *)fn_82864E90();
  piVar2 = (int *)(**(int (***)())(*piVar2 + 0x1c))();
  cVar5 = (**(int (***)())(*piVar2 + 0x38))(piVar2,param_3);
  if (cVar5 != '\0') {
    puVar3 = (unsigned int *)fn_8265C9E0(0x10);
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3[1] = param_3;
      puVar3[2] = param_1;
      puVar3[3] = param_2;
      *puVar3 = &lbl_821C3FBC;
    }
    if (puVar3 != (unsigned int *)0x0) {
      apuStack_40[0] = puVar3;
      iVar4 = (**(int (***)())(*param_3 + 0x48))(param_3,puVar3);
      if (-1 < iVar4) {
        fn_82536690(uVar1,apuStack_40);
        return 0;
      }
      fn_8265CA20(puVar3);
    }
  }
  return 0xffffffff80004005;
}

