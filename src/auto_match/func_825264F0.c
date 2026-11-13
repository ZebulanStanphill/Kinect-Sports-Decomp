#define true 1
extern int fn_828EA608();
extern int fn_828EB518();
extern int fn_82A1BE48();
extern int fn_82A1BEE0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_83296204;


void fn_825264F0(unsigned int param_1)

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
  iVar4 = param_1 * 0x170;
  iVar6 = 0;
  iVar3 = 0;
  do {
    iVar5 = iVar3 + iVar4;
    if (*(int *)(iVar5 + -0x7cd69df0) != 0) {
      if ((((uVar2 & 0xffffffff) != 0) && (cVar1 = fn_828EA608(uVar2), cVar1 != '\0')) &&
         ((unsigned __int64)*(unsigned int *)(&lbl_83296204 + iVar5) == (uVar2 & 0xffffffff))) {
        iVar6 = iVar6 * 0x14 + iVar4;
        if (*(char *)(iVar6 + -0x7cd69dec) == '\0') {
          fn_82A1BE48(param_1,*(unsigned int *)(iVar6 + -0x7cd69df8),
                            *(unsigned int *)(iVar6 + -0x7cd69df4),iVar4 + -0x7cd69cd0);
        }
        else {
          fn_82A1BEE0(param_1,*(unsigned int *)(iVar6 + -0x7cd69df8),4,iVar6 + -0x7cd69df4,
                            iVar4 + -0x7cd69cd0);
        }
        *(unsigned int *)(iVar6 + -0x7cd69df0) = 0;
        *(unsigned int *)(iVar4 + -0x7cd69cb4) = 1;
        return;
      }
      *(unsigned int *)(iVar5 + -0x7cd69df0) = 0;
    }
    iVar3 = iVar3 + 0x14;
    iVar6 = iVar6 + 1;
    if (299 < iVar3) {
      *(unsigned int *)(iVar4 + -0x7cd69cb4) = 0;
      return;
    }
  } while( true );
}

