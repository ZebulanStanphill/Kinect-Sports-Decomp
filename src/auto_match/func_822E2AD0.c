extern int fn_822315A0();
extern int fn_822B7340();
extern int fn_82377388();
extern int fn_8237B150();
extern int fn_824D2AE8();
extern int fn_825275B0();
extern unsigned int iStack_3c;


void fn_822E2AD0(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puStack_40;
  int iStack_3c;
  
  if ((*(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x1c0) + 0x204) == 0) &&
     (*(int *)(*(int *)(param_2 + 0x14) + 0x78) != 0)) {
    fn_822B7340();
  }
  fn_824D2AE8(&puStack_40,param_2 + 0x58);
  puVar3 = puStack_40;
  fn_825275B0(*puStack_40);
  puVar3[0x27] = 0;
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  *(unsigned char *)(*(int *)(*(int *)(param_2 + 0x14) + 0x118) + 0x1d4) = 0;
  *(unsigned char *)(*(int *)(*(int *)(param_2 + 0x14) + 0x118) + 0x254) = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  fn_824D2AE8(&puStack_40,param_2 + 0x58);
  iVar2 = *(int *)(param_2 + 0x10);
  fn_8237B150(param_1,puStack_40,iVar1);
  fn_82377388((double)(float)puStack_40[0x46],param_1,iVar2);
  if (*(int *)(iVar1 + 0x24) != 0) {
    *(unsigned int *)(*(int *)(iVar2 + 0x7dc) + 0x14) = 1;
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

