extern unsigned int *auStack_120;
extern int fn_82AA62B8();
extern int longjmp();


void fn_82AA64F8(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char auStack_120 [248];
  
  fn_82AA62B8(param_1,auStack_120,0x100,param_2,param_3);
  iVar2 = (int)param_2;
  if ((*(int (***)())(param_1 + 0x9bc) != (int (**)())0x0) && (iVar2 != 0xdd1)) {
    (**(int (***)())(param_1 + 0x9bc))
              (*(unsigned int *)(param_1 + 0x9b8),1,0,param_2 + -0x44c,auStack_120);
  }
  if (iVar2 == 0xdbd) {
    uVar1 = 0x8007000e;
  }
  else {
    if (iVar2 == 0xdc5) goto LAB_82aa65a0;
    if (iVar2 == 0xdc7) {
      uVar1 = 0x80004004;
    }
    else if (iVar2 == 0xdd1) {
      uVar1 = 0x80004001;
    }
    else {
      uVar1 = 0x80004005;
    }
  }
  *(unsigned int *)(param_1 + 0x9b0) = uVar1;
LAB_82aa65a0:
                    /* WARNING: Subroutine does not return */
  longjmp(param_1 + 0x470,param_2);
}

