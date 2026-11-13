typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_82A1E300();
extern int fn_82BFE530();
extern unsigned int *lbl_831E7B40;


unsigned __int64 fn_82670288(void)

{
  int *piVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_40 [16];
  
  bVar2 = false;
  if (lbl_831E7B40 != (unsigned int *)0x0) {
    uVar5 = 0;
    do {
      if (uVar5 == 0) {
        auStack_40[0] = 0;
        uVar5 = fn_82BFE530(*lbl_831E7B40,auStack_40);
        uVar5 = ((uVar5 & 0xffffffff) >> 0x1f) - 1 & (unsigned __int64)auStack_40[0];
      }
      piVar1 = (int *)uVar5;
      if (*(char *)(piVar1 + 4) == '\0') {
LAB_82670310:
        uVar4 = 0;
      }
      else if (piVar1[1] == 0) {
        uVar4 = (unsigned __int64)(unsigned int)piVar1[3] + 0x108;
        if ((unsigned __int64)(unsigned int)piVar1[3] == 0) goto LAB_82670310;
      }
      else {
        uVar4 = (unsigned __int64)(unsigned int)piVar1[1] + 0x108;
      }
      if ((uVar4 & 0xffffffff) != 0) {
        RtlEnterCriticalSection(uVar4);
      }
      uVar3 = (**(int (***)())(*piVar1 + 4))(uVar5);
      if ((uVar4 & 0xffffffff) != 0) {
        RtlLeaveCriticalSection(uVar4);
      }
      if (uVar3 == 0) {
LAB_82670370:
        (**(int (***)())*piVar1)(uVar5,1);
        uVar5 = 0;
      }
      else if (uVar3 == 1) {
        fn_82A1E300();
      }
      else {
        if (uVar3 < 3) goto LAB_82670370;
        bVar2 = true;
      }
    } while (!bVar2);
  }
  return 0;
}

