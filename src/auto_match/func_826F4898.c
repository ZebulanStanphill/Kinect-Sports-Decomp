extern unsigned int *auStack_50;
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826F4540();
extern int fn_826F47F0();
extern unsigned int lbl_83155F28;
extern unsigned int uStack_44;


int fn_826F4898(int param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int auStack_50 [2];
  unsigned char **ppuStack_48;
  unsigned int uStack_44;
  
  (**(int (***)())(lbl_83155F28 + 4))(0xffffffff83155f28,param_4);
  auStack_50[0] = *param_3;
  ppuStack_48 = &lbl_83155F28;
  uStack_44 = (int)param_4;
  fn_826F47F0(param_1,param_2,auStack_50,&ppuStack_48);
  puVar2 = (unsigned int *)fn_826F4540(*(unsigned int *)(param_2 + 0x20));
  if (puVar2 != (unsigned int *)0x0) {
    iVar1 = *(int *)(param_2 + 0x20);
    *puVar2 = *param_3;
    if ((param_4 & 0xffffffff) != 0) {
      fn_8267C4C8(param_4);
    }
    if (puVar2[1] != 0) {
      fn_8267C4F0();
    }
    puVar2[1] = (int)param_4;
    puVar2[2] = *(unsigned int *)(param_1 + 4);
    if (*(int *)(param_2 + 0x2e0) == 0) {
      *(unsigned int **)(param_2 + 0x2e0) = puVar2;
    }
    sync(1);
    if (*(int *)(iVar1 + 0x98) == 0) {
      sync(1);
      *(unsigned int **)(iVar1 + 0x98) = puVar2;
    }
    else {
      sync(1);
      *(unsigned int **)(*(int *)(iVar1 + 0x9c) + 0xc) = puVar2;
    }
    *(unsigned int **)(iVar1 + 0x9c) = puVar2;
    *(int *)(param_2 + 0x2cc) = *(int *)(param_2 + 0x2cc) + 1;
  }
  (**(int (***)())(lbl_83155F28 + 8))(0xffffffff83155f28,param_4);
  return param_1;
}

