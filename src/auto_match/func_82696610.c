extern int fn_826828D8();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_826ADE60();
extern unsigned int lbl_8200579C;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


unsigned __int64 fn_82696610(char *param_1,int *param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int iVar1;
  char cVar2;
  unsigned char abStack_50 [16];
  unsigned char **ppuStack_40;
  unsigned char *pbStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned char uStack_2c;
  int *piStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  if ((*param_1 == '\t') && (param_2 != (int *)0x0)) {
    iVar1 = *(int *)(param_1 + 4);
    if (*(int *)(iVar1 + 0x10) != 0) {
      pbStack_3c = abStack_50;
      abStack_50[0] = 0;
      uStack_2c = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      ppuStack_40 = &lbl_8200579C;
      uStack_38 = param_3;
      piStack_28 = param_2;
      (**(int (***)())(**(int **)(iVar1 + 0x10) + 0x28))
                (*(int **)(iVar1 + 0x10),&ppuStack_40,*(unsigned int *)(iVar1 + 0x14),0);
      fn_826828D8(&ppuStack_40);
      fn_82695FA0(param_4,abStack_50);
      if (4 < abStack_50[0]) {
        fn_826959C8(abStack_50);
      }
      return 1;
    }
    cVar2 = (**(int (***)())(*param_2 + 4))(param_2);
    if (cVar2 != '\0') {
      fn_826ADE60(param_2,0xffffffff82006184);
    }
  }
  return 0;
}

