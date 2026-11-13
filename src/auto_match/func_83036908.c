extern int fn_82FA5190();
extern int fn_830224E8();
extern int fn_83024470();
extern int fn_830245A0();
extern unsigned int lbl_831BC770;


unsigned __int64 fn_83036908(int *param_1,unsigned int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  if ((param_2 & 0xff) < (unsigned int)*(unsigned char *)(param_1 + 3)) {
    uVar2 = (unsigned int)*(unsigned char *)((int)param_1 + 0xd);
    uVar4 = 0;
    if (uVar2 != 0) {
      iVar3 = 0;
      iVar1 = *param_1;
      do {
        if (*(int *)(iVar1 + 8) == param_3) break;
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x10;
        iVar1 = iVar3 + *param_1;
      } while (uVar4 < uVar2);
    }
    if (uVar4 != uVar2) {
      puVar5 = (unsigned int *)(((unsigned int)*(unsigned char *)((int)param_1 + 0xd) * (param_2 & 0xff) + uVar4) * 0x10 +
                       *param_1);
      if (puVar5[1] != 0) {
        fn_830245A0();
        fn_83024470(puVar5[1]);
        fn_830224E8((unsigned __int64)puVar5[1] + 0x80);
        fn_82FA5190(lbl_831BC770,puVar5[1]);
        puVar5[1] = 0;
      }
      if (*puVar5 != 0) {
        fn_830245A0();
        fn_83024470(*puVar5);
        fn_830224E8((unsigned __int64)*puVar5 + 0x80);
        fn_82FA5190(lbl_831BC770,*puVar5);
        *puVar5 = 0;
      }
      return 1;
    }
  }
  return 2;
}

