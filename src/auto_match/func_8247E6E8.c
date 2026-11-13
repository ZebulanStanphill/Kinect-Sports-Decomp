#define true 1
extern int fn_822315A0();
extern int fn_82248B90();
extern int fn_8225F160();
extern int fn_823AB158();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_8288F948();
extern int fn_828A12E8();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83297810;


unsigned char fn_8247E6E8(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned char bVar6;
  int iStack_2c;
  struct { int first; int second; } stack_pair_28;

  
  uVar5 = (unsigned __int64)lbl_83297810;
  if (uVar5 == 0) {
    uVar5 = fn_82511928();
  }
  fn_825138E0(&stack_pair_28.first,uVar5,1);
  if (stack_pair_28.first == 0) {
    fn_8225F160();
    if (lbl_83265988 == 0) {
      bVar6 = 0;
    }
    else {
      iVar3 = *(int *)(lbl_83265988 + 0xf0);
LAB_8247e7e0:
      bVar6 = *(unsigned char *)(*(int *)(iVar3 + 8) + 8) >> 4 & 1;
    }
    if (stack_pair_28.second != 0) {
      fn_822315A0();
    }
  }
  else {
    uVar1 = *(unsigned int *)(stack_pair_28.first + 8);
    uVar2 = fn_828A12E8(uVar1);
    iVar3 = fn_8288F948(uVar2,1);
    iStack_2c = **(int **)(iVar3 + 4);
    while( true ) {
      iVar3 = iStack_2c;
      uVar2 = fn_828A12E8(uVar1);
      iVar4 = fn_8288F948(uVar2,1);
      if (iVar3 == *(int *)(iVar4 + 4)) break;
      iVar3 = *(int *)(iVar3 + 0x14);
      iVar4 = fn_823AB158(iVar3);
      if ((iVar4 == param_1) || (*(int *)(iVar3 + 0x864) == param_1)) {
        iVar3 = fn_823AB158(iVar3);
        iVar3 = *(int *)(iVar3 + 0xf0);
        goto LAB_8247e7e0;
      }
      fn_82248B90(&iStack_2c);
    }
    if (stack_pair_28.second != 0) {
      fn_822315A0();
    }
    bVar6 = 0;
  }
  return bVar6;
}

