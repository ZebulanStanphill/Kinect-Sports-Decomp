extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C5B18();
extern int fn_822FB198();
extern int fn_823000E0();


void fn_823048C0(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  (*(int (**)())(*param_1 + 0x1c))(param_1);
  fn_82230110(auStack_40,"idleset_kickoff");
  fn_822FB198(*(unsigned int *)(*(int *)(param_1[3] + 0x114) + 0xc0),auStack_40);
  fn_82230300(auStack_40,1,0);
  uVar1 = param_1[4];
  iVar2 = param_1[3];
  *(unsigned int *)(*(int *)(iVar2 + 0x1e8) + 0x578) = 0x800;
  uVar3 = fn_822C5B18(auStack_60,(unsigned int)uVar1 + 0x978);
  fn_823000E0(*(unsigned int *)(iVar2 + 0x1e8),uVar3);
  param_1[0x10] = 0;
  return;
}

