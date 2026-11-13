extern unsigned int *auStack_48;
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CFC050();
extern int fn_82DF6CD0();
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_82DF6F28(char *param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  char cVar1;
  unsigned short uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 *puVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned __int64 *puVar10;
  unsigned int uVar11;
  __int64 lVar12;
  unsigned int uStack_50;
  int iStack_4c;
  unsigned char auStack_48 [8];
  
  iVar3 = (**(int (***)())(**(int **)(param_2 + 8) + 0x34))();
  if ((iVar3 == 0) && (*(short *)(*(int *)(*(int *)(param_2 + 8) + 0x3c) + 4) != 0)) {
    uStack_50 = 0;
    iStack_4c = -1;
    iVar3 = fn_82DF6CD0(param_2,1,param_3,&iStack_4c,&uStack_50,auStack_48,param_4 + 0xf4);
    if (iVar3 == 0) {
      *(char *)(param_4 + 0x19) = (char)uStack_50;
      if (iStack_4c != 0) {
        fn_82CFC050(param_4 + 0x74,param_2);
      }
      iVar3 = *(int *)(param_2 + 8);
      iVar8 = *(int *)(iVar3 + 0x24);
      iVar4 = fn_82CE5410();
      if ((int)(*(unsigned int *)(param_4 + 0x70) & 0x3fffffff) < iVar8) {
        iVar7 = (*(unsigned int *)(param_4 + 0x70) & 0x3fffffff) << 1;
        if (iVar7 <= iVar8) {
          iVar7 = iVar8;
        }
        fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),(int *)(param_4 + 0x68),iVar7,1);
      }
      *(int *)(param_4 + 0x6c) = iVar8;
      iVar8 = 0;
      if (0 < *(int *)(param_4 + 0x6c)) {
        do {
          *(unsigned char *)(*(int *)(param_4 + 0x68) + iVar8) =
               *(unsigned char *)(*(int *)(iVar3 + 0x20) + iVar8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_4 + 0x6c));
      }
      iVar8 = *(int *)(iVar3 + 0x3c);
      uVar11 = (unsigned int)*(unsigned char *)(iVar8 + 10) * (unsigned int)*(unsigned short *)(iVar8 + 4);
      iVar4 = fn_82CE5410();
      if ((*(unsigned int *)(param_4 + 0x58) & 0x3fffffff) < uVar11) {
        uVar9 = (*(unsigned int *)(param_4 + 0x58) & 0x3fffffff) << 1;
        if (uVar9 <= uVar11) {
          uVar9 = uVar11;
        }
        fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),(unsigned int *)(param_4 + 0x50),uVar9,1);
      }
      *(unsigned int *)(param_4 + 0x54) = uVar11;
      fn_82CFC050(*(unsigned int *)(param_4 + 0x50),
                   (unsigned int)*(unsigned short *)(iVar8 + 6) * 0x20 + iVar8 + 0x30,
                   (__int64)(int)(unsigned int)*(unsigned char *)(iVar8 + 10) *
                   (__int64)(int)(unsigned int)*(unsigned short *)(iVar8 + 4));
      uVar2 = *(unsigned short *)(iVar8 + 4);
      iVar4 = fn_82CE5410();
      if ((*(unsigned int *)(param_4 + 100) & 0x3fffffff) < (unsigned int)uVar2) {
        uVar11 = (*(unsigned int *)(param_4 + 100) & 0x3fffffff) << 1;
        if (uVar11 <= uVar2) {
          uVar11 = (unsigned int)uVar2;
        }
        fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),(unsigned int *)(param_4 + 0x5c),uVar11,0x20);
      }
      *(unsigned int *)(param_4 + 0x60) = (unsigned int)uVar2;
      fn_82CFC050(*(unsigned int *)(param_4 + 0x5c),iVar8 + 0x30,
                   (unsigned __int64)*(unsigned short *)(iVar8 + 4) << 5);
      puVar6 = (unsigned __int64 *)(param_4 + 0x18);
      lVar12 = 6;
      puVar10 = (unsigned __int64 *)(*(int *)(iVar3 + 0x3c) + -8);
      do {
        puVar10 = puVar10 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = *puVar10;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      iVar3 = *(int *)(param_2 + 0x10);
      if (*(char *)(iVar3 + 0x18) == '\x01') {
        iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
      }
      else {
        iVar3 = 0;
      }
      iVar8 = *(int *)(param_2 + 0x14);
      if (*(char *)(iVar8 + 0x18) == '\x01') {
        iVar8 = *(char *)(iVar8 + 0x10) + iVar8;
      }
      else {
        iVar8 = 0;
      }
      cVar1 = *param_1;
      *(char *)(param_4 + 0x18) = cVar1;
      if (cVar1 != '\0') {
        uVar5 = (**(int (***)())(param_1 + 4))();
        *(unsigned int *)(param_4 + 0x10) = uVar5;
        uVar5 = (**(int (***)())(param_1 + 4))(iVar8);
        *(unsigned int *)(param_4 + 0x14) = uVar5;
        return 0;
      }
      *(int *)(param_4 + 8) = iVar3;
      *(int *)(param_4 + 0xc) = iVar8;
      fn_82CE4040();
      fn_82CE4040(*(unsigned int *)(param_4 + 0xc));
      return 0;
    }
  }
  return 1;
}

