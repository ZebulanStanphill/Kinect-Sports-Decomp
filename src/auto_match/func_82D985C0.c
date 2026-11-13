extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82D890C8();
extern int fn_830A21E8();
extern int fn_830A2398();
extern int fn_830A4688();
extern unsigned int uStack_2c;


void fn_82D985C0(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  short *psStack_30;
  unsigned int uStack_2c;
  
  pcVar3 = (char *)((unsigned int)*(unsigned short *)(param_1 + 0x1c) + *(int *)(param_2 + 0x4c));
  if (*pcVar3 == '\0') {
    iVar1 = *(int *)(param_2 + 0x30);
    iVar2 = *(int *)(param_2 + 0x34);
    *(unsigned int *)(pcVar3 + 4) = *(unsigned int *)(iVar1 + 0x10);
    *(unsigned int *)(pcVar3 + 8) = *(unsigned int *)(iVar1 + 0x14);
    *(unsigned int *)(pcVar3 + 0xc) = *(unsigned int *)(iVar1 + 0x18);
    *(unsigned int *)(pcVar3 + 0x10) = *(unsigned int *)(iVar2 + 0x10);
    *(unsigned int *)(pcVar3 + 0x14) = *(unsigned int *)(iVar2 + 0x14);
    *(unsigned int *)(pcVar3 + 0x18) = *(unsigned int *)(iVar2 + 0x18);
    *(unsigned int *)(pcVar3 + 0x1c) = *(unsigned int *)(iVar1 + 0x20);
    *(unsigned int *)(pcVar3 + 0x20) = *(unsigned int *)(iVar1 + 0x24);
    *(unsigned int *)(pcVar3 + 0x24) = *(unsigned int *)(iVar1 + 0x28);
    *(unsigned int *)(pcVar3 + 0x28) = *(unsigned int *)(iVar2 + 0x20);
    *(unsigned int *)(pcVar3 + 0x2c) = *(unsigned int *)(iVar2 + 0x24);
    *(unsigned int *)(pcVar3 + 0x30) = *(unsigned int *)(iVar2 + 0x28);
    (**(int (***)())(**(int **)(param_1 + 0x18) + 0x3c))(*(int **)(param_1 + 0x18),auStack_40);
    if (*psStack_30 == 0x16) {
      fn_830A4688(psStack_30,param_2,1);
    }
    else {
      fn_830A2398(psStack_30,uStack_2c,param_2,param_3);
    }
  }
  else {
    fn_830A21E8(param_2,param_3,0,8);
    if (*(char *)(param_1 + 0x24) != '\0') {
      fn_82D890C8(auStack_50,*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x48) + 0x14) + 8),
                        *(int *)(param_2 + 0x48));
    }
  }
  return;
}

