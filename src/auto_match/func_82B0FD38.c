typedef unsigned char bool;
#define true 1
#define false 0
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

void fn_82B0FD38(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  uVar6 = *(unsigned int *)(param_2 + 8);
  uStack00000048 = (unsigned __int64)uVar6;
  uVar2 = uVar6 >> 7 & 0x7f;
  if (uVar2 < 0x6e) {
    if (0x6b < uVar2) {
LAB_82b0fdb4:
      if (2 < (uVar6 & 0x1e)) {
        uVar3 = 0x12c0;
        goto fn_82AA66A8;
      }
      uVar6 = *(unsigned int *)(param_2 + 0x10) & 0xfff8ffff | 0x10000;
      goto LAB_82b0fd8c;
    }
    if (0x14 < uVar2) {
      if (uVar2 < 0x19) goto LAB_82b0fdb4;
      if (0x3e < uVar2) {
        if (uVar2 < 0x43) goto LAB_82b0fdb4;
        if ((0x5f < uVar2) && (uVar2 < 0x62)) goto LAB_82b0fd80;
      }
    }
LAB_82b0fdf0:
    if ((uVar2 < 0x20) || (bVar1 = true, 0x52 < uVar2)) {
      bVar1 = false;
    }
    if (bVar1) goto LAB_82b0fd80;
    uVar6 = uVar6 >> 1 & 0xf;
    if (uVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x20 - LZCOUNT(uVar6);
    }
    *(unsigned int *)(param_2 + 0x10) =
         (unsigned int)((uVar5 & 0xffffffff) << 0x10) & 0x70000 | *(unsigned int *)(param_2 + 0x10) & 0xfff8ffff;
  }
  else {
    if (uVar2 != 0x6e) {
      if ((uVar2 == 0x71) || (uVar2 == 0x7c)) {
        uVar3 = 0x12c0;
        goto fn_82AA66A8;
      }
      goto LAB_82b0fdf0;
    }
LAB_82b0fd80:
    uVar6 = *(unsigned int *)(param_2 + 0x10) & 0xfff8ffff | 0x40000;
LAB_82b0fd8c:
    *(unsigned int *)(param_2 + 0x10) = uVar6;
  }
  lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x74) + 1;
  uStack00000048 = ((unsigned __int64)*(unsigned short *)(param_2 + 0x10) & 7) + lVar4;
  if ((uStack00000048 & 0xffffffff) < 0x10000) {
    *(int *)(param_1 + 0x74) = (int)uStack00000048 + -1;
    *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_2 + 8) | 0x800000;
    *(short *)(param_2 + 0x12) = (short)lVar4;
    return;
  }
  uVar3 = 0xdc8;
fn_82AA66A8:
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
                    /* WARNING: Subroutine does not return */
  fn_82AA64F8(param_1,uVar3,&stack0x00000020);
}

