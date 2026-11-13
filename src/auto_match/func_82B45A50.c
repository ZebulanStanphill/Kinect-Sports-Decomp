extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64
fn_82B45A50(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  if ((param_2 != 0) &&
     ((((*(int *)(param_2 + 4) == 0xe || (*(int *)(param_2 + 0x1c) == 0)) &&
       (*(int *)(param_2 + 0x14) == 1)) && (*(int *)(param_2 + 0x18) == 1)))) {
    iVar1 = *(int *)(param_2 + 0x10);
    if ((iVar1 == 0) || (param_8 = (unsigned __int64)*(unsigned int *)(iVar1 + 4), *(unsigned int *)(iVar1 + 4) != 9)) {
      uStack00000020 = param_3;
      uStack00000028 = param_4;
      uStack00000030 = param_5;
      uStack00000038 = param_6;
      uStack00000040 = param_7;
      uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
      fn_82AA64F8(param_1,0x12c1,&stack0x00000020);
    }
    if (((*(int *)(iVar1 + 0x14) == 0) &&
        (iVar1 = *(int *)(param_2 + 0x20), *(int *)(iVar1 + 4) == 1)) &&
       ((*(int *)(iVar1 + 0xc) == 0 &&
        ((iVar1 = *(int *)(iVar1 + 8), *(int *)(iVar1 + 4) == 0xf && (*(int *)(iVar1 + 0x10) == 0)))
        ))) {
      *(char *)param_3 = '\x01' - (*(int *)(iVar1 + 0x18) == 0);
      return 1;
    }
  }
  return 0;
}

