#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int fStack_18;
extern int fn_8254A870();
extern int fn_82552F88();
extern int fn_82569980();
extern unsigned int uStack_14;
extern unsigned int uStack_20;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8260ECA8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uStack_20;
  float fStack_18;
  unsigned int uStack_14;
  
  iVar1 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x14));
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xd8) + iVar1 * 0x30 + 0x10);
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x8c0);
    if (iVar1 != 0) {
      fn_82552F88(*(unsigned int *)(param_3 + 0x10),&uStack_20);
      *(unsigned __int64 *)(iVar1 + 0x40) = uStack_20;
      *(unsigned __int64 *)(iVar1 + 0x48) = CONCAT44(fStack_18,uStack_14);
      fn_8254A870((double)(((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF),(double)(((unsigned __int64)(uStack_20) >> 32) & 0xFFFFFFFF),(double)fStack_18);
    }
  }
  return;
}

