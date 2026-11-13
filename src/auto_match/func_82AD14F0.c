#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
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

void fn_82AD14F0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  puVar1 = *(unsigned int **)(param_2 + 4);
  do {
    uStack00000038 = ZEXT48(puVar1);
    if (uStack00000038 == 0) {
      return;
    }
    if ((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) {
      for (uVar2 = *(unsigned int *)(puVar1[4] + 4); uStack00000040 = (unsigned __int64)uVar2, uStack00000040 != 0;
          uVar2 = *(unsigned int *)(uVar2 + 8)) {
        uVar3 = *(unsigned int *)(uVar2 + 0x10);
        if (uVar3 != 0) {
          uVar4 = *(unsigned int *)(uVar3 + 8) >> 7 & 0x7f;
          if (uVar4 == 0x40) {
            uStack00000048 = (unsigned __int64)*(unsigned int *)param_4;
            if (uStack00000048 != 0) {
fn_82AA66A8:
              uStack00000020 = param_3;
              uStack00000028 = param_4;
              uStack00000030 = param_5;
                    /* WARNING: Subroutine does not return */
              fn_82AA64F8(param_1,0x12c0,&stack0x00000020);
            }
            *(unsigned int *)param_4 = uVar3;
          }
          else if (uVar4 == 0x3f) {
            uStack00000048 = (unsigned __int64)*(unsigned int *)param_3;
            if (uStack00000048 != 0) goto fn_82AA66A8;
            *(unsigned int *)param_3 = uVar3;
          }
        }
      }
    }
    puVar1 = (unsigned int *)puVar1[2];
  } while( true );
}

