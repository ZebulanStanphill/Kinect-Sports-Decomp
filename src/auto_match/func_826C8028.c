extern unsigned int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_826BD928();
extern int fn_826C59F8();
extern int fn_826C78F0();


void fn_826C8028(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int lVar3;
  char *pcVar5;
  unsigned int uVar4;
  int uVar6;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  lVar3 = fn_826C59F8(param_1);
  if ((lVar3 != 0) && (1 <= *(int *)(param_1 + 0x1c))) {
    pcVar5 = (char *)fn_826957D0(param_1,0);
    uVar6 = 0;
    if (*pcVar5 != '\x01') {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar6 = fn_826957D0(param_1,0);
      uVar4 = fn_82695370(uVar6,uVar2);
      uVar6 = uVar4 != 0 ? fn_826BD928(uVar4 + 0x68) : 0;
    }
    fn_826C78F0(lVar3,uVar6);
  }
  return;
}

