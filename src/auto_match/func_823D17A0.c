extern int fn_8225F160();
extern int fn_822AF138();
extern int fn_82359698();
extern int fn_823CC298();
extern int fn_823DBB58();
extern int fn_82508078();
extern unsigned int lbl_8218E8E8;


void fn_823D17A0(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  *(unsigned int *)(param_1 + 0x1028) = 3;
  *(unsigned int *)(param_1 + 0x1024) = lbl_8218E8E8;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_82508078(*(unsigned int *)(param_1 + 0xa4),0xffffffff821b61e8,0);
  }
  fn_823DBB58(*(unsigned int *)(param_1 + 0x4b0));
  iVar1 = fn_8225F160();
  if ((*(unsigned int *)(*(int *)(param_1 + 0x4bc) + 0x90) <= *(unsigned int *)(*(int *)(param_1 + 0x4bc) + 0xc)) ||
     (uVar2 = 0x19, *(int *)(iVar1 + 8) == 1)) {
    uVar2 = 0x18;
  }
  fn_823CC298(*(unsigned int *)(param_1 + 0x4b8),uVar2);
  *(unsigned int *)(param_1 + 0xe44) = 0;
  fn_82359698(param_1,0x11);
                    /* WARNING: Subroutine does not return */
  fn_822AF138(**(unsigned int **)(param_1 + 0xc),5);
}

