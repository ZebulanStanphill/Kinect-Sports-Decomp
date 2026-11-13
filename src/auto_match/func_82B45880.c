extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_82B45880(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                 unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  if (*(int *)(param_2 + 4) == 3) {
    return param_2;
  }
  if ((((*(int *)(param_2 + 4) == 1) && (*(int *)(param_2 + 0xc) == 0)) &&
      (iVar1 = *(int *)(param_2 + 8), iVar1 != 0)) &&
     (param_8 = (unsigned __int64)*(unsigned int *)(iVar1 + 4), *(unsigned int *)(iVar1 + 4) == 3)) {
    return iVar1;
  }
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
  fn_82AA64F8(param_1,0x12c1,&stack0x00000020);
}

