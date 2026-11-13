extern int fn_822315A0();
extern int fn_82263430();
extern unsigned int lbl_831DCCF0;


void fn_82387EE8(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0xffffffff821b42c0;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0x5c0);
  if (iVar2 == 1) {
    uVar5 = 0xffffffff821b42c8;
  }
  else if (iVar2 == 2) {
    uVar5 = 0xffffffff821b42d0;
  }
  else if (iVar2 == 4) {
    uVar5 = 0xffffffff821b42d8;
  }
  piVar3 = (int *)**(int **)(*(int *)(param_1 + 4) + 8);
  piVar4 = (int *)piVar3[1];
  piVar3 = (int *)*piVar3;
  fn_82263430((double)*(float *)(iVar1 + 0x5c4),*(unsigned int *)(iVar1 + 0x5e0),
                    *(unsigned int *)(iVar1 + 0x5e4),param_2,
                    *(unsigned int *)(*(int *)(param_1 + 4) + 0x1fc),
                    (int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20),
                    (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20),
                    (&lbl_831DCCF0)[*(int *)(iVar1 + 0x570)],uVar5);
  if (*(int *)(param_3 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

