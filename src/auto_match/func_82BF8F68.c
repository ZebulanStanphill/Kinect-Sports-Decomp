extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern unsigned int lbl_821AAD20;


void fn_82BF8F68(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  uVar1 = lbl_821AAD20;
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x34);
  *(unsigned int *)(param_1 + 0x48) = uVar1;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x40) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x70) = 0;
  *(unsigned __int64 *)(param_1 + 0x68) = 0;
  *(unsigned __int64 *)(param_1 + 0x60) = 0;
  *(unsigned short *)(param_1 + 0x4c) = 0;
  *(unsigned short *)(param_1 + 0x78) = 0;
  *(unsigned short *)(param_1 + 0x44) = 0;
  *(unsigned short *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0xa8) = uVar1;
  *(unsigned int *)(param_1 + 0xa0) = uVar1;
  *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(param_1 + 0x94);
  *(unsigned int *)(param_1 + 0xb4) = 0;
  *(unsigned int *)(param_1 + 0xb0) = 0;
  *(unsigned int *)(param_1 + 0x98) = 0;
  *(unsigned __int64 *)(param_1 + 0xd0) = 0;
  *(unsigned __int64 *)(param_1 + 200) = 0;
  *(unsigned __int64 *)(param_1 + 0xc0) = 0;
  *(unsigned short *)(param_1 + 0xac) = 0;
  *(unsigned short *)(param_1 + 0xd8) = 0;
  *(unsigned short *)(param_1 + 0xa4) = 0;
  *(unsigned short *)(param_1 + 0x9c) = 0;
  iVar3 = param_1 + 0xe4;
  fn_82BE5340(iVar3);
  while (*(int *)(param_1 + 0xec) != 0) {
    puVar2 = (unsigned int *)fn_82BE5378(iVar3);
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
    fn_82BE5350(iVar3);
  }
  fn_82BE5478();
  return;
}

