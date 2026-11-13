extern int fn_82C279A8();
extern int fn_82C27D50();
extern int fn_82C27E48();


void fn_82C281E0(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = *(unsigned int **)(param_1 + 0x2c);
  iVar2 = fn_82C279A8();
  if (((iVar2 >= 0) && (iVar2 = fn_82C27E48(param_1), iVar2 >= 0)) &&
     (iVar2 = fn_82C27D50(param_1,1), iVar2 >= 0)) {
    *(unsigned __int64 *)(puVar1 + 0x14) = 0;
    *puVar1 = 1;
    puVar1[0x16] = 0;
    *(unsigned __int64 *)(puVar1 + 8) = 0;
    *(unsigned __int64 *)(puVar1 + 10) = 0;
    *(unsigned __int64 *)(puVar1 + 0xc) = 0;
    *(unsigned __int64 *)(puVar1 + 0x10) = 0;
    puVar1[0x17] = 0;
    *(unsigned __int64 *)(puVar1 + 0x18) = 0;
    puVar1[0x24] = 0;
    puVar1[5] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[0x25] = 0;
  }
  return;
}

