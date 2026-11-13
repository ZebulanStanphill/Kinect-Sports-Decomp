typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82AD3EA8();


void fn_82AD6118(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  
  uVar1 = *(unsigned int *)(param_2 + 0x24);
  while( true ) {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    if ((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 0x2980) break;
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28);
  }
  iVar2 = *(int *)(param_2 + 8);
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar6 = *(int *)(iVar2 + 4);
    while (cVar5 = fn_82AD3EA8(param_1,iVar6,param_2,uVar1,0), cVar5 == '\0') {
      iVar3 = *(int *)(iVar6 + 8);
      if ((iVar3 == 0) || (bVar4 = true, *(int *)(iVar3 + 0xc) == 0)) {
        bVar4 = false;
      }
      if (bVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      iVar6 = 0;
      if (iVar3 != 0) {
        iVar6 = *(int *)(iVar3 + 4);
      }
    }
    iVar2 = *(int *)(iVar2 + 0xc);
  } while( true );
}

