extern int fn_82C290D8();
extern int fn_82C294A8();


void fn_82C298F0(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = *(unsigned int **)(param_1 + 0x2c);
  iVar2 = fn_82C290D8();
  if ((iVar2 >= 0) && (iVar2 = fn_82C294A8(param_1), iVar2 >= 0)) {
    *(unsigned __int64 *)(puVar1 + 0xe) = 0;
    *puVar1 = 1;
    puVar1[0x10] = 0;
    *(unsigned __int64 *)(puVar1 + 8) = 0;
    *(unsigned __int64 *)(puVar1 + 10) = 0;
    *(unsigned __int64 *)(puVar1 + 0x20) = 0;
    puVar1[0x11] = 0;
    *(unsigned __int64 *)(puVar1 + 0x12) = 0;
    puVar1[0x1e] = 0;
    puVar1[5] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}

