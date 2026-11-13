extern int fn_82F67CF8();
extern int __iob_func();
extern int fprintf();


void fn_828318B0(int param_1,int param_2)

{
  unsigned int iVar2;
  int lVar1;
  
  if ((*(unsigned int *)(param_2 + 0x14) != 0) &&
     (iVar2 = fn_82F67CF8(param_2 + 0x18,4,1,*(unsigned int *)(param_1 + 0x3c0)), iVar2 != 1)) {
    lVar1 = __iob_func();
    fprintf(lVar1 + 0x40,"sectionDb error while writing non-relocation entry\n");
  }
  return;
}

