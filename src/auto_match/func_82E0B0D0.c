extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82CE4118();
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82E0DF70();
extern int fn_82E162A8();


unsigned __int64 fn_82E0B0D0(int param_1,int *param_2,unsigned __int64 param_3)

{
  char *pcVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [64];
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    fn_82CE4118();
  }
  *(unsigned int *)(param_1 + 0x7c) = 0;
  fn_82E162A8(*(unsigned int *)(param_1 + 0x18),0);
  pcVar1 = (char *)(**(int (***)())(*param_2 + 0x24))(auStack_80,param_2);
  if (*pcVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(int (***)())(*param_2 + 0x2c))(param_2);
  }
  *(unsigned int *)(param_1 + 0x70) = uVar2;
  if ((param_3 & 0xffffffff) == 0) {
    iVar3 = fn_82CE5410();
    param_3 = fn_82CE52E0(*(unsigned int *)(iVar3 + 0x10),0x40);
    fn_82E0DF70(*(unsigned int *)(param_1 + 0x18),param_3);
  }
  iVar3 = (**(int (***)())(*param_2 + 0x10))(param_2,param_3,0x40);
  if (iVar3 == 0x40) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_82f691f0(auStack_70,0xffffffffffffffff,0x40);
  }
  *(unsigned int *)(param_1 + 0x1c) = 0;
  return 1;
}

