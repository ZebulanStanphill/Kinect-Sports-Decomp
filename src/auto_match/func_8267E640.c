typedef unsigned char bool;
#define false 0
extern int fn_8267C8D8();
extern int fn_8267D9C0();


/* WARNING: Removing unreachable block (ram,0x8267e50c) */
/* WARNING: Removing unreachable block (ram,0x8267e488) */
/* WARNING: Removing unreachable block (ram,0x8267e4cc) */
/* WARNING: Removing unreachable block (ram,0x8267e510) */
/* WARNING: Removing unreachable block (ram,0x8267e524) */
/* WARNING: Removing unreachable block (ram,0x8267e4e0) */
/* WARNING: Removing unreachable block (ram,0x8267e4f4) */
/* WARNING: Removing unreachable block (ram,0x8267e490) */
/* WARNING: Removing unreachable block (ram,0x8267e4a0) */
/* WARNING: Removing unreachable block (ram,0x8267e4a4) */
/* WARNING: Removing unreachable block (ram,0x8267e4c8) */

bool fn_8267E640(int param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 4) < 1) {
    bVar1 = false;
  }
  else {
    fn_8267C8D8(param_1 + 0xc);
    bVar1 = *(int *)(param_1 + 8) + 1 <= *(int *)(param_1 + 4);
    if (bVar1) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    fn_8267D9C0(param_1 + 0xc);
  }
  return bVar1;
}

