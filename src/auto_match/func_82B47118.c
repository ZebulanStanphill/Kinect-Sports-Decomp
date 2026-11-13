extern int fn_82ABDD90();
extern int fn_82AD19D8();
extern int fn_82B841E8();


void fn_82B47118(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  
  if (*(unsigned int *)(param_1 + 0x2e8) != 0) {
    iVar1 = fn_82B841E8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                              (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,0x75,0,0);
    iVar2 = fn_82B841E8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                              (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,0x75,0,0);
    *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 8) | 0x2000000;
    *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar2 + 8) | 0x2000000;
    fn_82AD19D8(iVar2,iVar1,param_1);
    fn_82AD19D8(param_2,iVar2,param_1);
    iVar2 = fn_82ABDD90(param_1,0x75,0,0);
    puVar3 = (unsigned int *)(iVar2 + iVar1 + -0x10);
    puVar3[1] = param_3;
    *puVar3 = *puVar3 & 0xfffffff8 | 2;
  }
  return;
}

