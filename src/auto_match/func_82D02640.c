extern int fn_82CE5410();
extern unsigned int lbl_8323B51C;


void fn_82D02640(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lbl_8323B51C;
  if (lbl_8323B51C != 0) {
    iVar2 = fn_82CE5410();
    (*(int (**)())(**(int **)(iVar2 + 0x10) + 8))(*(int **)(iVar2 + 0x10),iVar1,0x3c);
  }
  lbl_8323B51C = 0;
  return;
}

