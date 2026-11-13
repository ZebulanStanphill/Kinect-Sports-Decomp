extern int fn_825E4B68();
extern int fn_825E4C20();
extern int fn_825E4D88();


void fn_825F49C0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned char *puVar2;
  
  fn_825E4B68();
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x800)) {
    puVar2 = (unsigned char *)(param_1 + 0x1c);
    do {
      fn_825E4D88((double)*(float *)(puVar2 + -8),
                        *(unsigned int *)(*(int *)(puVar2 + -0x1c) + 0x14),puVar2 + -0x18,
                        puVar2 + -0x10,param_4,*(unsigned int *)(puVar2 + -4),*puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x20;
    } while (iVar1 < *(int *)(param_1 + 0x800));
  }
  fn_825E4C20();
  return;
}

