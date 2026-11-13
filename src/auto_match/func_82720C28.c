extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82697700();
extern int fn_826A7398();
extern int fn_826ADF90();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82720C28(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uStack_40;
  unsigned char uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  iVar4 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
  if (*(int *)(iVar4 + 0x10c) == 0) {
    fn_826ADF90(*(unsigned int *)(param_1 + 0x18),0xffffffff820104c8);
  }
  else {
    uStack_34 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      uStack_34 = fn_82697700(uVar3,uVar2);
    }
    uStack_3c = 0;
    uStack_40 = 0xb;
    uStack_38 = 0;
    (**(int (***)())(**(int **)(iVar4 + 0x10c) + 4))(*(int **)(iVar4 + 0x10c),iVar4,&uStack_40);
  }
  return;
}

