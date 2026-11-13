extern int fn_82CE5410();
extern unsigned int lbl_8323B46C;


void fn_82CEFB68(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lbl_8323B46C;
  if (lbl_8323B46C != 0) {
    iVar2 = fn_82CE5410();
    (*(int (**)())(**(int **)(iVar2 + 0x10) + 8))(*(int **)(iVar2 + 0x10),iVar1,0x1c);
    lbl_8323B46C = 0;
  }
  return;
}

