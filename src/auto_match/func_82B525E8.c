#define true 1
extern unsigned int *auStack_60;
extern int fn_82AA66A8();
extern int fn_82ABE870();
extern int fn_82AD1978();
extern int fn_82AE60E8();
extern int fn_82B24700();
extern int fn_82B4B1D8();
extern int fn_82B4BAA8();
extern int fn_82B51E30();


void fn_82B525E8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int *param_5)

{
  int iVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned char auStack_60 [96];
  
  iVar9 = *(int *)(param_3 + 0x70);
  uVar7 = 0;
  if ((iVar9 == 0) || (*(int *)(iVar9 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  while( true ) {
    iVar4 = *(int *)(iVar9 + 8);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 3)) {
      if (*(int *)(iVar4 + 4) != 0xb) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x234) + 0x50);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(unsigned int *)(*(int *)(iVar4 + 0x10) * 4 + iVar1);
      }
      fn_82B51E30(param_1,param_2,*(unsigned int *)(iVar4 + 0x10),uVar5,0,1,0);
      uVar7 = uVar7 + 1;
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    if ((iVar9 != 0) && (*(int *)(iVar9 + 4) != 1)) break;
    if (iVar9 == 0) {
      piVar3 = (int *)fn_82AE60E8(param_1,(uVar7 + 2 & 0x3fffffff) << 2,0);
      *piVar3 = param_3;
      piVar3[1] = (int)uVar7;
      fn_82B24700(auStack_60,param_2);
      fn_82B4B1D8(auStack_60,uVar7);
      iVar9 = *(int *)(param_3 + 0x70);
      uVar8 = 0;
      if ((iVar9 == 0) || (*(int *)(iVar9 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      piVar6 = piVar3 + 1;
      while( true ) {
        iVar4 = *(int *)(iVar9 + 8);
        if ((iVar4 == 0) || (*(int *)(iVar4 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        if ((*(int *)(iVar4 + 0xc) != 0) && (*(int *)(*(int *)(iVar4 + 0xc) + 4) != 3)) {
          if ((uVar7 & 0xffffffff) <= (uVar8 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          uVar2 = fn_82ABE870(auStack_60);
          uVar2 = fn_82B4BAA8(param_1,uVar2);
          iVar4 = fn_82AD1978(param_4,uVar2);
          uVar8 = uVar8 + 1;
          piVar6 = piVar6 + 1;
          *piVar6 = iVar4;
        }
        iVar9 = *(int *)(iVar9 + 0xc);
        if ((iVar9 != 0) && (*(int *)(iVar9 + 4) != 1)) break;
        if (iVar9 == 0) {
          *param_5 = (int)piVar3;
          *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x100000;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

