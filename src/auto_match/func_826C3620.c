extern int fn_826828D8();
extern int fn_82682A48();
extern unsigned int iStack_48;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;


void fn_826C3620(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned char uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    piVar1 = *(int **)(param_2 + 8);
    if ((piVar1 != (int *)0x0) && (cVar2 = (**(int (***)())(*piVar1 + 0x3c))(piVar1), cVar2 != '\0')) {
      iStack_48 = piVar1[10];
      uStack_30 = *(unsigned int *)(param_2 + 0x20);
      uStack_34 = *(unsigned int *)(param_2 + 0x1c);
      uStack_38 = *(unsigned int *)(param_2 + 0x18);
      uStack_4c = *(unsigned int *)(param_2 + 4);
      uStack_3c = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      ppuStack_50 = &lbl_8200579C;
      (**(int (***)())(param_1 + 0x30))(&ppuStack_50);
      fn_82682A48(piVar1 + -4);
      fn_826828D8(&ppuStack_50);
      return;
    }
    (**(int (***)())(param_1 + 0x30))(param_2);
  }
  return;
}

