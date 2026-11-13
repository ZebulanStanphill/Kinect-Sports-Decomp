extern unsigned int lbl_82162F7C;
extern unsigned int lbl_82162FA8;
extern unsigned int lbl_82162FFC;


void fn_82F40718(unsigned int *param_1)

{
  *param_1 = &lbl_82162FFC;
  *(unsigned char ***)((int)param_1 + *(int *)(param_1[1] + 4) + 4) = &lbl_82162FA8;
  *(unsigned char ***)((int)param_1 + *(int *)(param_1[1] + 8) + 4) = &lbl_82162F7C;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0xc;
  *(int *)(*(int *)(param_1[1] + 8) + (int)param_1) = *(int *)(param_1[1] + 8) + -0x18;
  return;
}

