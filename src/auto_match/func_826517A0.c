extern unsigned int *auStack_6c;
extern int fn_82645110();
extern int fn_826453A0();
extern int fn_82651080();
extern int memset();
extern int VdQueryVideoMode();


void fn_826517A0(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int in_stack_00000054;
  unsigned char auStack_6c [108];
  
  *(int *)(param_1 + 0x5588) = (int)param_5;
  *(int *)(param_1 + 0x558c) = (int)param_6;
  *(int *)(param_1 + 0x5590) = (int)param_7;
  *(int *)(param_1 + 0x5594) = (int)param_4;
  *(int *)(param_1 + 0x5598) = (int)param_8;
  *(unsigned int *)(param_1 + 0x559c) = in_stack_00000054;
  if ((param_2 & 8) != 0) {
    VdQueryVideoMode(param_1 + 0x55a0);
  }
  if ((*(unsigned int *)(param_1 + 0x54f8) & 0x40000000) != 0) {
    if ((param_3 != 0) || ((*(unsigned char *)(param_1 + 0x2abd) & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      memset(auStack_6c,0,0x18);
    }
    uVar1 = fn_82651080(param_1,param_4,param_5,param_6,param_7,param_8,in_stack_00000054);
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
    if (*(unsigned int *)(param_1 + 0x38) < uVar3) {
      uVar3 = fn_82645110(param_1);
    }
    uVar2 = fn_826453A0(param_1,uVar3,0,0xffffffff82650fe0,uVar1);
    *(unsigned int *)(param_1 + 0x30) = uVar2;
  }
  return;
}

