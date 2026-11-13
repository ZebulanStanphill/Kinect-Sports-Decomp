extern int fn_82CE3E28();
extern int fn_82CE3E48();
extern int fn_82D00DD8();
extern unsigned int lbl_8323B50C;


void fn_82CF7CE0(int param_1,unsigned int param_2,int *param_3,unsigned int param_4,unsigned int param_5
                  )

{
  int iVar1;
  unsigned int *puVar2;
  
  *(unsigned int *)(param_1 + 0x34) = param_2;
  *(int **)(param_1 + 0x38) = param_3;
  *(unsigned int *)(param_1 + 0x3c) = param_4;
  *(unsigned int *)(param_1 + 0x40) = param_5;
  *(unsigned int *)(param_1 + 0x48) = 0;
  iVar1 = lbl_8323B50C;
  if ((lbl_8323B50C == 0) && (iVar1 = fn_82D00DD8(), lbl_8323B50C != 0)) {
    fn_82CE3E48(lbl_8323B50C);
  }
  lbl_8323B50C = iVar1;
  iVar1 = lbl_8323B50C;
  *(int *)(param_1 + 4) = lbl_8323B50C;
  fn_82CE3E28(iVar1);
  puVar2 = (unsigned int *)(**(int (***)())(*param_3 + 4))(param_3,0xc);
  if (puVar2 == (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x44) = 0;
    *(int **)(param_1 + 0x14) = param_3;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0xffffffff;
    *(unsigned int **)(param_1 + 0x44) = puVar2;
    *(int **)(param_1 + 0x14) = param_3;
  }
  return;
}

