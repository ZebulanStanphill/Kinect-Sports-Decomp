extern int fn_82F67CF8();
extern int __iob_func();
extern int fprintf();


void fn_82831868(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int iVar2;
  int lVar1;
  
  iVar2 = fn_82F67CF8(param_1,8,1,param_2);
  if (iVar2 != 1) {
    lVar1 = __iob_func();
    fprintf(lVar1 + 0x40,"sectionDb error while writing non-relocation group\n");
  }
  return;
}

