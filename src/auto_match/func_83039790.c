extern unsigned int *auStack_3c;
extern int fn_82FF4A38();
extern int fn_83014548();
extern int fn_83038730();
extern int fn_83039600();
extern unsigned int lbl_83264304;
extern unsigned int uStack_40;


void fn_83039790(int param_1,unsigned char param_2)

{
  unsigned int uVar1;
  unsigned uVar2;
  int iVar3;
  unsigned int uStack_40;
  unsigned int auStack_3c;
  
  fn_83038730(param_1);
  if (((*(unsigned char *)(param_1 + 0x1e4) & 0x20) != 0) && ((*(unsigned char *)(param_1 + 0xd9) & 2) == 0)) {
    if (*(unsigned *)(param_1+0x1dc) != 0) { *(unsigned char *)(param_1+0x1e8)=0; return; }
    {
      if ((*(char *)(param_1 + 0x1e8) != '\0') &&
         ((param_2 == '\0' || (*(int *)(param_1 + 0x1ec) == 0)))) {
        uVar1 = *(unsigned int *)(param_1 + 0x1d4);
        *(unsigned char *)(param_1 + 0x1e8) = 0;
        uStack_40 = 0;
        auStack_3c = 0;
        uVar2 = fn_83014548(uVar1,&auStack_3c,&uStack_40);
        while (((uVar2 & 0xffffffff) != 0 &&
               (iVar3 = fn_83039600(param_1,uVar2,auStack_3c), iVar3 != 1))) {
          fn_82FF4A38(lbl_83264304,*(unsigned int *)(param_1 + 0x50),uVar2,uStack_40);
          uStack_40 = 0;
          auStack_3c = 0;
          uVar2 = fn_83014548(uVar1,&auStack_3c,&uStack_40);
        }
      }
    }

  }
  return;
}

