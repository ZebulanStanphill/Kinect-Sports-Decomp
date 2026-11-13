typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int fn_82AD12C8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  puVar1 = (unsigned int *)*param_1;
  do {
    if (puVar1 == (unsigned int *)0x0) {
      uStack00000020 = param_3;
      uStack00000028 = param_4;
      uStack00000030 = param_5;
      uStack00000038 = param_6;
      uStack00000040 = param_7;
      uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
      fn_82AA64F8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c0,
                        &stack0x00000020);
    }
    uVar2 = *puVar1;
    param_7 = (unsigned __int64)uVar2;
    if ((uVar2 & 0x40000000) == 0) {
LAB_82ad12ec:
      bVar3 = false;
    }
    else {
      bVar3 = true;
      if ((uVar2 & 0xe000000) != 0) goto LAB_82ad12ec;
    }
    param_8 = 0;
    if (bVar3) {
      param_8 = (unsigned __int64)uVar2 & 0x1ffe000;
      if ((uVar2 & 0x1ffe000) == 0) {
        return puVar1[3];
      }
    }
    puVar1 = (unsigned int *)puVar1[1];
  } while( true );
}

