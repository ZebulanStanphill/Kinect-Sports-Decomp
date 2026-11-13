#define true 1
extern int fn_828EA608();
extern int fn_828EB518();
extern int fn_82F691F0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832809F8;
extern unsigned int lbl_832809FC;
extern unsigned int lbl_83280A00;
extern unsigned int lbl_83280A50;


void fn_8255B938(unsigned int param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  param_1 = param_1 & 0xff;
  if (param_1 == 0xff) {
    uVar2 = (unsigned __int64)lbl_83265988;
  }
  else {
    uVar2 = fn_828EB518(param_1);
  }
  iVar6 = param_1 * 100;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + iVar6;
    if (*(int *)(&lbl_83280A00 + iVar5) != 0) {
      if ((uVar2 & 0xffffffff) != 0) {
        cVar1 = fn_828EA608(uVar2);
        if ((cVar1 != '\0') && ((unsigned __int64)*(unsigned int *)(&lbl_832809F8 + iVar5) == (uVar2 & 0xffffffff))
           ) {
          *(unsigned int *)(iVar6 + -0x7cd7f5ac) = param_1;
          *(unsigned int *)(iVar6 + -0x7cd7f5a8) =
               *(unsigned int *)(&lbl_832809FC + iVar3 * 0xc + iVar6);
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar6 + -0x7cd7f5cc,0,0x1c);
        }
      }
      *(unsigned int *)(&lbl_83280A00 + iVar5) = 0;
    }
    iVar4 = iVar4 + 0xc;
    iVar3 = iVar3 + 1;
    if (0x3b < iVar4) {
      *(unsigned int *)(&lbl_83280A50 + iVar6) = 0;
      return;
    }
  } while( true );
}

