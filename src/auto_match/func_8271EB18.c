extern int fn_8267C498();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82697610();
extern int fn_826A7398();
extern int fn_82711FA8();


void fn_8271EB18(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *apiStack_30 [12];
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  uVar5 = 0;
  *puVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = fn_826A7398();
    fn_82711FA8(apiStack_30,uVar3);
    if (apiStack_30[0] != (int *)0x0) {
      iVar4 = (**(int (***)())(*apiStack_30[0] + 0x9c))(apiStack_30[0]);
      if (iVar4 == 4) {
        uVar3 = 0x7fffffff;
        if (1 < *(int *)(param_1 + 0x1c)) {
          uVar2 = *(unsigned int *)(param_1 + 0x18);
          uVar5 = fn_826957D0(param_1,0,0x7fffffff);
          uVar5 = fn_82697610(uVar5,uVar2);
          uVar2 = *(unsigned int *)(param_1 + 0x18);
          uVar3 = fn_826957D0(param_1,1);
          uVar3 = fn_82697610(uVar3,uVar2);
        }
        (**(int (***)())(*apiStack_30[0] + 0x154))(apiStack_30[0],uVar5,uVar3);
      }
      fn_8267C498(apiStack_30[0]);
    }
  }
  return;
}

