extern unsigned int *auStack_28;
extern int fn_82826568();
extern int fn_828295A8();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


void fn_8282AD28(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned int auStack_28;
  
  if (*(unsigned int *)(param_2 + 0x14) != 0) {
    fn_82826568(param_1,*(int *)(param_2 + 0x14),&uStack_2c);
    fn_82826568(param_1,*(unsigned int *)(param_2 + 0x18),&auStack_28);
    fn_828295A8(uStack_2c,&iStack_30);
    puVar1 = (unsigned int *)(*(int *)(param_2 + 0x1c) + iStack_30);
    *(unsigned int **)(param_2 + 0x10) = puVar1;
    *(unsigned int *)(param_2 + 0x20) = *puVar1;
    fn_828295A8(auStack_28,&iStack_30);
    **(int **)(param_2 + 0x10) = **(int **)(param_2 + 0x10) + iStack_30;
  }
  return;
}

