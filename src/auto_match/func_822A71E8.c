extern char lbl_82190260[];
extern int fn_82270B70();
extern int fn_82532F98();
extern void fn_827EF828(int,float);
extern int fn_827EFFE8();
extern int fn_827F0180();


void fn_822A71E8(int param_1,float value)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  
  fn_827EF828(*(unsigned int *)(param_1 + 0x5bc),value);
  fn_827EFFE8(*(unsigned int *)(param_1 + 0x5bc));
  iVar3 = *(int *)(param_1 + 0x550) + 0x80;
  iVar2 = fn_82270B70();
  puVar1 = *(unsigned int **)(*(int *)(iVar2 + 100) * 4 + iVar3);
  iVar3 = (*(int (**)())(**(int **)(param_1 + 0x550) + 0xac))(*(int **)(param_1 + 0x550));
  if (iVar3 != 0) {
    fn_827F0180(*(unsigned int *)(param_1 + 0x5bc),puVar1[1],1,0,0);
    (*(int (**)())(**(int **)(*(int *)(param_1 + 0x550) + 0x1b4) + 0x18))(*(int **)(*(int *)(param_1 + 0x550) + 0x1b4));
    fn_82532F98(puVar1,lbl_82190260);
  } else {
    fn_827F0180(*(unsigned int *)(param_1 + 0x5bc),*puVar1,1,0,0);
  }
  return;
}

