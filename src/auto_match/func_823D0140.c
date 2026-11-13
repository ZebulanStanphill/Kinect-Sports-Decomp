extern int fn_822ABA88();
extern int fn_822C5180();
extern int fn_822C72E0();
extern int fn_82369668();
extern int fn_8236A6E8();
extern int fn_8236C428();
extern int fn_823DBB58();
extern int fn_823E69D0();
extern int fn_824FE498();


void fn_823D0140(int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  ,unsigned __int64 param_6)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  fn_8236C428();
  fn_824FE498(param_1[900]);
  iVar5 = param_1[900];
  puVar3 = (unsigned int *)(iVar5 + 0xc30U & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  puVar3 = (unsigned int *)(iVar5 + 0xbd0U & 0xfffffff0);
  *puVar3 = in_register_00010020;
  puVar3[1] = in_register_00010024;
  puVar3[2] = in_register_00010028;
  puVar3[3] = in_vr2;
  piVar2 = *(int **)(*(int *)param_1[2] + param_3 * 4);
  iVar5 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),param_2);
  uVar1 = *(unsigned int *)(*(int *)(iVar5 + 0x114) + 0x20);
  uVar4 = fn_822C5180(param_4,param_5);
  fn_822C72E0(uVar1,uVar4);
  fn_82369668(param_1,param_3,param_2);
  fn_8236A6E8(param_1,4);
  if (param_1[0x130] == 0) {
    fn_823E69D0(param_1,param_6);
  }
  iVar5 = (**(int (***)())(*param_1 + 200))(param_1);
  if (iVar5 == 0) {
    fn_823DBB58(param_1[300]);
  }
  return;
}

