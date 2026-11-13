extern int fn_8267C4F0();
extern int fn_8269D480();
extern int fn_82711878();
extern int fn_82712008();


void fn_8272D028(int *param_1)

{
  unsigned int iVar2;
  int lVar1;
  unsigned char cVar3;
  
  iVar2 = (*(int (**)())(*param_1 + 0x40))();
  if (iVar2 != 0) {
    lVar1 = (*(int (**)())(*(int *)(iVar2 + 8) + 0xc))(iVar2 + 8,0x1b);
    if (lVar1 != 0) {
      cVar3 = fn_82712008(lVar1,param_1);
      if (cVar3 != '\0') {
        fn_82711878(lVar1);
      }
      fn_8267C4F0(lVar1);
    }
  }
  iVar2 = (*(int (**)())(*param_1 + 0x40))(param_1);
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 0xb00) = *(unsigned int *)(iVar2 + 0xb00) | 0x400;
  }
  fn_8269D480(param_1);
  return;
}

