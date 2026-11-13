#define CONCAT26(h,l) ((unsigned __int64)((((unsigned short)(h)) << 48) | ((unsigned __int64)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82E73080();
extern int fn_82E73380();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82E73A90(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  iVar1 = (**(int (***)())(**(int **)(param_1 + 0x1d8) + 0x28))(*(int **)(param_1 + 0x1d8),&uStack_40);
  if (-1 < iVar1) {
    uVar3 = *(unsigned __int64 *)(param_1 + 0x1e0);
    uVar2 = uVar3 / 10000;
    uStack_40 = CONCAT44((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF),(int)uVar2);
    uStack_38 = CONCAT26((short)(param_2 / 10000),(((unsigned __int64)(uStack_38) >> 16) & 0xFFFFFFFFFFFF));
    iVar1 = (**(int (***)())(**(int **)(param_1 + 0x1d8) + 0x14))(*(int **)(param_1 + 0x1d8),&uStack_40)
    ;
    if (-1 < iVar1) {
      iVar1 = fn_82E73380(param_1,param_2,uVar3);
      if (-1 < iVar1) {
        *(unsigned __int64 *)(param_1 + 0x1f8) = uVar2;
        *(unsigned __int64 *)(param_1 + 0x208) = param_2 / 10000;
        *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
        *(unsigned __int64 *)(param_1 + 0x1e8) =
             (unsigned __int64)*(unsigned int *)(param_1 + 4) + *(__int64 *)(param_1 + 0x1e8);
        fn_82E73080(param_1);
      }
    }
  }
  return;
}

