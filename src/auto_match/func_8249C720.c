typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_21e;
extern int fn_822848B8();
extern int fn_82284B08();
extern int fn_82F691F0();
extern unsigned int lbl_8327F894;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8249C720(int param_1)

{
  int iVar1;
  bool bVar2;
  unsigned char auStack_21e [518];
  
  bVar2 = false;
  if (((*(int *)(param_1 + 0x70) != 0) &&
      (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x70) + 0x844) + 0x358), iVar1 != 0)) &&
     ((*(unsigned int *)(iVar1 + 0x118) & 0x40) != 0)) {
    bVar2 = true;
  }
  if (bVar2 != (*(int *)(param_1 + 0x9c) != 0)) {
    if (bVar2 != false) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_21e,0,0x1fe);
    }
    fn_822848B8();
    *(unsigned int *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    fn_82284B08((double)lbl_8327F894);
  }
  return;
}

