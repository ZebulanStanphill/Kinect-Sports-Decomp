typedef struct { unsigned __int64 lo, hi; } V16;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82475A58();
extern int fn_82475C28();
extern int fn_8249ABC0();
extern int fn_8249B8C0();
extern int fn_8249D1C0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C6678;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82474EA8(int param_1)

{
  float *pfVar1;
  unsigned __int64 in_r0;
  int iVar2;
  unsigned int uVar3;
  
  iVar2 = fn_8249ABC0();
  pfVar1 = *(float **)(iVar2 + 0xec);
  uVar3 = fn_8249D1C0(pfVar1,CONCAT44(*pfVar1 - lbl_831C6678,pfVar1[1] - lbl_831C6678),
                            CONCAT44(lbl_831C6678 + pfVar1[2],lbl_831C6678 + pfVar1[3]));
  *(unsigned int *)(param_1 + 0x9c) = uVar3;
  if (*(int *)(param_1 + 0x94) == 0) {
    fn_8249ABC0();
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
    fn_82475C28(ZEXT48(&stack0x00000000) - 0x30,param_1);
    fn_82475A58(param_1,param_1 + 0x94,param_1 + 8);
  }
  iVar2 = fn_8249ABC0();
  fn_8249B8C0();
  uVar3 = ltcg_pool_0_0f;
  *(unsigned int *)(*(int *)(iVar2 + 0x110) + 0x28) = 1;
  *(unsigned int *)(param_1 + 0xa8) = uVar3;
  return;
}

