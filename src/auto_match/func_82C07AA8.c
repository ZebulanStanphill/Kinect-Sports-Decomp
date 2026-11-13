extern int fn_82C06948();
extern int fn_82C10A28();
extern int fn_82C10B28();
extern int fn_82C10B70();
extern int fn_82C12A00();


unsigned __int64 fn_82C07AA8(int *param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  void *aiStack_20 [2];
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    aiStack_20[0] = *(void **)(iVar1 + 0x224);
    fn_82C10A28(*(unsigned int *)(iVar1 + 0x260));
    uVar2 = *(unsigned int *)(iVar1 + 0x260);
    fn_82C06948(iVar1);
    if (aiStack_20[0] != 0) {
      fn_82C12A00(aiStack_20[0]);
      fn_82C10B28(uVar2,8,aiStack_20);
    }
    *param_1 = 0;
    fn_82C10B70(uVar2);
    return 0;
  }
  return 4;
}

