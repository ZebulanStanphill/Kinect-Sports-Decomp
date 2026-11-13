#define true 1
extern int fn_82FFCAC8();
extern unsigned int lbl_832642E0;


void fn_82FFCF20(unsigned __int64 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  
  iVar2 = lbl_832642E0;
  iVar3 = lbl_832642E0 + 0x674;
  RtlEnterCriticalSection(0xffffffff8326434c);
  RtlEnterCriticalSection(iVar3);
  iVar4 = iVar2 + 0x690;
  uVar5 = 0;
  piVar6 = *(int **)(iVar2 + 0x690);
  while (piVar6 == (int *)0x0) {
    uVar5 = uVar5 + 1;
    if (0xc0 < uVar5) goto joined_r0x82ffcf8c;
    piVar6 = *(int **)(uVar5 * 4 + iVar4);
  }
  do {
    while (piVar6[7] != 0) {
      (**(int (***)())(*piVar6 + 4))(piVar6);
      fn_82FFCAC8(param_1,piVar6,1);
      piVar1 = (int *)piVar6[2];
      while ((piVar1 == (int *)0x0 && (uVar5 = uVar5 + 1, uVar5 < 0xc1))) {
        piVar1 = *(int **)(uVar5 * 4 + iVar4);
      }
      (**(int (***)())(*piVar6 + 8))(piVar6);
      piVar6 = piVar1;
joined_r0x82ffcf8c:
      if (piVar6 == (int *)0x0) {
        RtlLeaveCriticalSection(iVar3);
        RtlLeaveCriticalSection(0xffffffff8326434c);
        return;
      }
    }
    piVar6 = (int *)piVar6[2];
    while (piVar6 == (int *)0x0) {
      uVar5 = uVar5 + 1;
      if (0xc0 < uVar5) goto joined_r0x82ffcf8c;
      piVar6 = *(int **)(uVar5 * 4 + iVar4);
    }
  } while( true );
}

