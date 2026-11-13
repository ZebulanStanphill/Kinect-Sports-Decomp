extern int fn_83065C28();
extern int fn_8306AB38();
extern unsigned int lbl_8217E690;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_83063A88(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned char *puStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  int aiStack_40 [4];
  unsigned int *puStack_30;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uStack_4c = *(unsigned int *)(param_1 + 0x2c);
    uVar2 = (unsigned __int64)uStack_4c;
    if (uVar2 != 0) {
      aiStack_40[0] = 0;
      puStack_50 = &lbl_8217E690;
      aiStack_40[1] = 0;
      aiStack_40[2] = 0;
      puStack_30 = (unsigned int *)0x0;
      uStack_48 = uStack_4c;
      do {
        fn_8306AB38(aiStack_40,uVar2);
        uVar2 = (**(int (***)())(puStack_50 + 4))(&puStack_50,uStack_48);
        uStack_48 = (unsigned int)uVar2;
      } while (uVar2 != 0);
      uStack_48 = 0;
      iVar1 = aiStack_40[0];
      while (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 4);
        fn_83065C28();
      }
      *(unsigned int *)(param_1 + 0x2c) = 0;
      for (; puStack_30 != (unsigned int *)0x0; puStack_30 = (unsigned int *)puStack_30[2]) {
        puStack_30[3] = 0;
        *puStack_30 = 0;
      }
    }
  }
  return;
}

