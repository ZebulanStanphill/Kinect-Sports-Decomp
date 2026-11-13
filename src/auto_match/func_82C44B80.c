extern int fn_82A1E968();


void fn_82C44B80(unsigned int param_1)

{
  __int64 alStack_20 [2];
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x4ffc) == 0)) {
    fn_82A1E968(alStack_20);
    *(unsigned int *)(param_1 + 0x4ffc) = 1;
    *(__int64 *)(param_1 + 0x4fe8) = -alStack_20[0];
    *(__int64 *)(param_1 + 0x4ff0) = alStack_20[0];
  }
  return;
}

