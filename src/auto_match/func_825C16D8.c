extern int fn_82575DF0();
extern int iRam83282260;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83282264;
extern unsigned int uRam8328226c;


void fn_825C16D8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  uRam8328226c = 1;
  if (*param_1 != 0) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + *param_1 + 0x10) != 0) {
        fn_82575DF0(*(unsigned int *)(param_2 + 0x93c));
        iRam83282260 = iRam83282260 + -1;
        *(unsigned int *)(iVar2 + *param_1 + 0x10) = 0;
      }
      if (*(int *)(iVar2 + *param_1 + 0x14) != 0) {
        fn_82575DF0(*(unsigned int *)(param_2 + 0x93c));
        iRam83282260 = iRam83282260 + -1;
        *(unsigned int *)(iVar2 + *param_1 + 0x14) = 0;
      }
      iVar2 = iVar2 + 0x20;
    } while (iVar2 < 0x140);
  }
  if (param_1[1] != 0) {
    iVar2 = 0;
    dVar3 = (double)ltcg_pool_0_0f;
    do {
      if (*(int *)(iVar2 + param_1[1] + 0x18) != 0) {
        fn_82575DF0(*(unsigned int *)(param_2 + 0x93c));
        lbl_83282264 = lbl_83282264 + -1;
        *(unsigned int *)(iVar2 + param_1[1] + 0x18) = 0;
      }
      if (*(int *)(iVar2 + param_1[1] + 0x1c) != 0) {
        fn_82575DF0(*(unsigned int *)(param_2 + 0x93c));
        lbl_83282264 = lbl_83282264 + -1;
        *(unsigned int *)(iVar2 + param_1[1] + 0x1c) = 0;
      }
      *(float *)(iVar2 + param_1[1] + 0x14) = (float)dVar3;
      iVar1 = iVar2 + param_1[1];
      iVar2 = iVar2 + 0x30;
      *(unsigned int *)(iVar1 + 0x10) = 0;
    } while (iVar2 < 0xf0);
  }
  uRam8328226c = 0;
  return;
}

