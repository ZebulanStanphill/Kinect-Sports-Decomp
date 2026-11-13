extern int fn_82CE44A8();
extern int fn_82CE4530();
extern int fn_82CE5410();
extern unsigned int lbl_8323A960;


void fn_82CE3EF0(unsigned int param_1)

{
  int iVar1;
  
  if (lbl_8323A960 == 0) {
    iVar1 = fn_82CE5410();
    iVar1 = (*(int (**)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x34);
    *(unsigned short *)(iVar1 + 4) = 0x34;
    iVar1 = fn_82CE4530();
    *(unsigned int *)(iVar1 + 8) = param_1;
    fn_82CE44A8();
    return;
  }
  *(unsigned int *)(lbl_8323A960 + 8) = param_1;
  return;
}

