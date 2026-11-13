extern int fn_82AA64F8();
extern int fn_82AA66A8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64
fn_82B457D8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int in_r11;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  while (in_r11 == 1) {
    if (*(int *)(param_2 + 0xc) != 0) {
      return 0;
    }
    param_2 = *(int *)(param_2 + 8);
    in_r11 = *(int *)(param_2 + 4);
  }
  puVar2 = (unsigned int *)param_3;
  if (*(int *)(param_2 + 4) == 0xe) {
    *puVar2 = *(unsigned int *)(param_2 + 0x14);
    uVar3 = *(unsigned int *)(param_2 + 0x18);
  }
  else {
    if (*(int *)(param_2 + 4) != 0xf) {
      return 0;
    }
    if (*(unsigned int *)(param_2 + 0x10) < 4) {
      uVar3 = 1;
    }
    else {
      if (*(unsigned int *)(param_2 + 0x10) != 6) {
        return 0;
      }
      uVar3 = 0;
      if (*(int *)(param_2 + 0x1c) != 0) {
        uStack00000048 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
        for (iVar1 = *(int *)(*(int *)(param_2 + 0x18) * 0x28 + *(unsigned int *)(param_1 + 0xc) + 0x14);
            *(int *)(iVar1 + 4) == 1; iVar1 = *(int *)(iVar1 + 0x30)) {
          if (*(int *)(iVar1 + 0xc) != 0) {
            return 0;
          }
          iVar1 = *(int *)(iVar1 + 8);
          if ((((iVar1 == 0) ||
               (uStack00000048 = (unsigned __int64)*(unsigned int *)(iVar1 + 4), *(unsigned int *)(iVar1 + 4) != 6)) ||
              (uStack00000048 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x10), *(unsigned int *)(iVar1 + 0x10) != 1))
             || ((iVar1 = *(int *)(iVar1 + 0x18), iVar1 == 0 ||
                 (uStack00000048 = (unsigned __int64)*(unsigned int *)(iVar1 + 4), *(unsigned int *)(iVar1 + 4) != 0xb))))
          goto fn_82AA66A8;
        }
        if (*(int *)(iVar1 + 4) == 9) {
          *puVar2 = *(unsigned int *)(iVar1 + 0x1c);
          *(unsigned int *)param_4 = *(unsigned int *)(iVar1 + 0x20);
          return 1;
        }
fn_82AA66A8:
        uStack00000020 = param_3;
        uStack00000028 = param_4;
        uStack00000030 = param_5;
        uStack00000038 = param_6;
        uStack00000040 = param_7;
                    /* WARNING: Subroutine does not return */
        fn_82AA64F8(param_1,0x12c1,&stack0x00000020);
      }
    }
    *puVar2 = uVar3;
  }
  *(unsigned int *)param_4 = uVar3;
  return 1;
}

