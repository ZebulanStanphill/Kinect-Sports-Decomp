typedef unsigned char bool;
#define false 0
extern int fn_82536590();
extern int fn_8255B0D8();
extern unsigned int lbl_83265988;


void fn_823578F8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x318);
  if (uVar1 != 0) {
    iVar2 = *(int *)(*(int *)(lbl_83265988 + 0xf0) + 8);
    *(unsigned char *)(iVar2 + (uVar1 >> 3)) = (unsigned char)(1 << (uVar1 & 7)) | *(unsigned char *)(iVar2 + (uVar1 >> 3));
  }
  iVar2 = *(int *)(param_1 + 4);
  fn_8255B0D8(*(unsigned int *)(*(int *)(iVar2 + 0x14) + 0x844));
  piVar3 = (int *)(iVar2 + 0x314);
  if (piVar3 == (int *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = *piVar3 != 0;
  }
  if (bVar4) {
    fn_82536590(piVar3,0);
  }
  return;
}

