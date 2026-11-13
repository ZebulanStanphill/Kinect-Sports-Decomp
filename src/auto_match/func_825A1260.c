extern int fn_8251E4D0();
extern int fn_82522D98();
extern int fn_825A1388();
extern int fn_825A1440();
extern int fn_82A1EFC0();
extern unsigned int lbl_83297910;
extern unsigned int lbl_83297920;


int * fn_825A1260(unsigned __int64 param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  unsigned int *puVar1;
  int in_r0;
  int *piVar2;
  int *piVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  piVar2 = (int *)fn_82522D98(0x140);
  iVar4 = 1;
  if (*(int *)(param_2 + 0xb28) != 0) {
    iVar4 = *(int *)(param_2 + 0xb28);
  }
  fn_82A1EFC0(piVar2,0,0x140);
  *piVar2 = param_2;
  piVar2[1] = param_3;
  piVar2[4] = 0;
  piVar2[3] = param_4;
  piVar2[0x4c] = 0;
  piVar2[5] = iVar4;
  fn_82A1EFC0(piVar2 + 8,0,0xc0);
  piVar3 = piVar2 + 0x14;
  lVar5 = 0x20;
  do {
    piVar3 = piVar3 + 1;
    *piVar3 = -1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  piVar2[0x12] = (int)piVar2;
  piVar2[0x10] = -1;
  piVar2[0x11] = -1;
  piVar2[0x13] = piVar2[0x13] | 0x10;
  piVar3 = (int *)fn_8251E4D0(param_1);
  *piVar3 = (int)piVar2;
  piVar3[1] = param_3;
  if (*(int *)(param_2 + 0xb10) != 0) {
    fn_825A1388((unsigned __int64)*(unsigned int *)(param_2 + 0x4c) + 0x7e8);
    *(unsigned int *)(param_2 + 0xb10) = 0;
  }
  *(int **)(param_2 + 0xb10) = piVar2;
  if ((lbl_83297920 & 1) == 0) {
    lbl_83297920 = lbl_83297920 | 1;
    puVar1 = (unsigned int *)((int)&lbl_83297910 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  fn_825A1440(piVar2,param_5);
  return piVar2;
}

