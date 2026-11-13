#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern int fn_82FA9C60();
extern int fn_82FAD0A8();
extern unsigned int uStack_40;
extern unsigned int uStack_48;


void fn_82FAA228(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  
  uVar1 = (*(int **)(param_1 + 8))[5];
  if ((uVar1 & 0xff00) != 0) {
    uStack_48 = ((((unsigned __int64)(uStack_48)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((**(int (***)())(**(int **)(param_1 + 8) + 0x18))())) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    if ((((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82FAD0A8();
    }
    uStack_48 = uVar2 & 0xffffffff;
    uVar4 = 0x400;
    if ((uVar2 & 0xffffffff) != 0) {
      while( true ) {
        uStack_40 = uStack_48;
        uVar3 = (**(int (***)())(*(int *)uVar2 + 0xc))
                          (uVar2,*(unsigned int *)(param_1 + 8),&uStack_40,&auStack_50);
        uStack_40 = CONCAT44((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF),uVar3);
        uVar5 = (unsigned __int64)auStack_50;
        if ((int)uVar4 < (int)auStack_50) {
          uVar5 = uVar4;
        }
        if ((((int *)uVar2)[0x10] != 0) && ((uVar5 & 0xffffffff) != 0)) {
          fn_82FA9C60(uVar2,uVar5,uVar1 & 0xff00,*(unsigned int *)(param_1 + 0x20));
        }
        uVar4 = uVar4 - uVar5;
        if (uVar4 == 0) break;
        uStack_48 = uStack_40;
        if ((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) == 0) {
          return;
        }
        uVar2 = uStack_40 & 0xffffffff;
      }
    }
  }
  return;
}

