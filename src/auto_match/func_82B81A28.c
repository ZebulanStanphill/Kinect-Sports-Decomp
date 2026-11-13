#define true 1
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

unsigned int
fn_82B81A28(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  puVar1 = (unsigned int *)*param_1;
  do {
    if (puVar1 == (unsigned int *)0x0) {
      uVar3 = *(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94);
fn_82AA66A8:
      uStack00000020 = param_3;
      uStack00000028 = param_4;
      uStack00000030 = param_5;
      uStack00000038 = param_6;
      uStack00000040 = param_7;
      uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
      fn_82AA64F8(uVar3,0x12c0,&stack0x00000020);
    }
    uVar2 = *puVar1;
    param_8 = (unsigned __int64)uVar2;
    param_7 = (unsigned __int64)uVar2 & 0xe000000;
    if ((uVar2 & 0xe000000) != 0) {
      param_8 = (unsigned __int64)uVar2 & 8;
      if ((uVar2 & 8) != 0) {
        param_8 = (unsigned __int64)*(unsigned int *)(puVar1[3] + 8) & 0x3f80;
        if (param_8 == 0x3b00) {
          return *(unsigned int *)(*(int *)(puVar1[3] + 0x30) + 0xc);
        }
        uVar3 = *(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94);
        goto fn_82AA66A8;
      }
    }
    puVar1 = (unsigned int *)puVar1[1];
  } while( true );
}

