extern int fn_82830110();
extern int fn_82F678C8();
extern int __iob_func();
extern int fprintf();


unsigned __int64 fn_8282FC60(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar3;
  int lVar1;
  unsigned __int64 uVar2;
  
  fn_82830110(*(unsigned int *)(param_2 + 0x388),*(unsigned int *)(param_2 + 0xa0));
  uVar3 = fn_82F678C8(**(unsigned int **)(param_2 + 0x388),0x20,*(unsigned int *)(param_2 + 0xa0),
                       param_1);
  if (uVar3 < *(unsigned int *)(param_2 + 0xa0)) {
    lVar1 = __iob_func();
    fprintf(lVar1 + 0x40,"sectionDb Error: Symbol file symbol data did not read correctly\n");
    uVar2 = 5;
  }
  else {
    uVar2 = 0;
    *(unsigned char *)(param_2 + 0x3f6) = 1;
  }
  return uVar2;
}

