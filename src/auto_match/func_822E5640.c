typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


/* WARNING: Removing unreachable block (ram,0x822e569c) */
/* WARNING: Removing unreachable block (ram,0x822e56b4) */
/* WARNING: Removing unreachable block (ram,0x822e56f4) */
/* WARNING: Removing unreachable block (ram,0x822e56c4) */
/* WARNING: Removing unreachable block (ram,0x822e56e0) */
/* WARNING: Removing unreachable block (ram,0x822e56d8) */
/* WARNING: Removing unreachable block (ram,0x822e56e4) */

void fn_822E5640(int param_1)

{
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  
  if (*(int *)(param_1 + 0x2a4) == 0) {
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    loadVectorLeftIndexed128(0xffffffff821911c8,0x30);
    vectorRotateLeftImmediateMaskInsert128
              (*(unsigned char (*) [16])(in_r0 + param_1 + 0x290 & 0xfffffff0),
               *(unsigned char (*) [16])(in_r0 + param_1 + 0x80 & 0xfffffff0),1,0);
    *(unsigned int *)(param_1 + 0x2a4) = 1;
  }
  return;
}

