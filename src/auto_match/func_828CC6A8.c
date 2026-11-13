extern int fn_82897CE0();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828CC6A8(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  fn_82897CE0(*(unsigned int *)(param_1 + 0x6c),param_2,param_1 + 0x98,
                    (unsigned int *)(param_1 + 0x80));
  iVar2 = fn_828E9DA8(param_2);
  iVar3 = fn_828E9D90(param_2);
  if (iVar2 - iVar3 >= 8) {
    uVar4 = fn_828E9FF8(param_2,8);
  } else {
    uVar4 = 0;
  }
  piVar1 = *(int **)(param_1 + 0x80);
  *(unsigned char *)(param_1 + 0xac) = uVar4;
  (*(int (**)())(*piVar1 + 8))(piVar1,*(unsigned int *)(param_1 + 0x6c),param_2,param_1 + 0x88);
  return;
}

