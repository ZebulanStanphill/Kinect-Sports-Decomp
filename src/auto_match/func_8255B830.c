#define true 1
extern int fn_828EA608();
extern int fn_828EB518();
extern int fn_82F691F0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_8327FFFC;
extern unsigned int lbl_83280000;
extern unsigned int lbl_8328026C;


void fn_8255B830(unsigned int param_1)

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
  iVar6 = param_1 * 0x280;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + iVar6;
    if (*(int *)(&lbl_83280000 + iVar5) != 0) {
      if ((uVar2 & 0xffffffff) != 0) {
        cVar1 = fn_828EA608(uVar2);
        if ((cVar1 != '\0') && ((unsigned __int64)*(unsigned int *)(iVar5 + -0x7cd80008) == (uVar2 & 0xffffffff)))
        {
          *(unsigned int *)(iVar6 + -0x7cd7fd90) = param_1;
          *(unsigned int *)(iVar6 + -0x7cd7fd8c) =
               *(unsigned int *)(&lbl_8327FFFC + iVar3 * 0xc + iVar6);
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar6 + -0x7cd7fdb0,0,0x1c);
        }
      }
      *(unsigned int *)(&lbl_83280000 + iVar5) = 0;
    }
    iVar4 = iVar4 + 0xc;
    iVar3 = iVar3 + 1;
    if (599 < iVar4) {
      *(unsigned int *)(&lbl_8328026C + iVar6) = 0;
      return;
    }
  } while( true );
}

