extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AC6860(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = (unsigned int)param_4 & 0xfffffffe;
    param_2 = param_2 & 0xfffffffe;
    puVar2 = (unsigned int *)(uVar1 + 0x24);
    *(unsigned int *)(param_2 + 0x24) = *puVar2;
    *(unsigned int *)(*puVar2 & 0xfffffffe) = param_2;
    *(unsigned int *)(param_2 + 0x28) = uVar1;
    *puVar2 = param_2 + 0x28;
    return;
  }
  if ((param_3 & 0xffffffff) != 1) {
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000038 = param_6;
    uStack00000040 = param_7;
    uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(param_1,0x12c0,&stack0x00000020);
  }
  uVar1 = (unsigned int)param_4 & 0xfffffffe;
  param_2 = param_2 & 0xfffffffe;
  *(unsigned int *)(param_2 + 0x28) = *(unsigned int *)(uVar1 + 0x28);
  *(unsigned int *)((*(unsigned int *)(uVar1 + 0x28) & 0xfffffffe) + 0x24) = param_2 + 0x28;
  *(unsigned int *)(param_2 + 0x24) = uVar1 + 0x28;
  *(unsigned int *)(uVar1 + 0x28) = param_2;
  return;
}

