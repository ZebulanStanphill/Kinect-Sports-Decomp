extern unsigned int *auStack_3c;
extern int fn_8284D780();
extern int fn_82850A78();
extern int fn_82850D08();
extern int fn_8285A7F8();
extern int memcpy();


void fn_8284F908(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int *puStack_40;
  unsigned int auStack_3c;
  
  fn_8284D780(param_3,&puStack_40);
  iVar2 = 0;
  if (*(short *)(param_1 + 0x44) != 0) {
    iVar3 = 0;
    do {
      puVar1 = (unsigned int *)fn_8285A7F8(*(unsigned int *)(*(int *)(param_1 + 0x40) + iVar3),param_2);
      if (*puVar1 < *puStack_40) {
        fn_82850A78(puStack_40,*puVar1,&auStack_3c);
        fn_82850D08(auStack_3c,0,param_4,0);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x44));
  }
  memcpy(*(unsigned int *)(param_4 + 0x18),param_4 + 8,*(unsigned int *)(param_3 + 0x34));
  return;
}

