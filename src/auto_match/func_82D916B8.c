extern unsigned int *auStack_94;
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D909F0();
extern int fn_82DAFB58();
extern unsigned int iStack_9c;
extern unsigned int uStack_98;


void fn_82D916B8(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned char *puStack_a0;
  int iStack_9c;
  unsigned int uStack_98;
  unsigned char auStack_94 [148];
  
  iVar3 = *(int *)(param_2 + 0xcc);
  puStack_a0 = auStack_94;
  iStack_9c = 0;
  uStack_98 = 0x80000010;
  iVar4 = 0;
  if (0 < param_3[1]) {
    iVar5 = 0;
    do {
      piVar1 = *(int **)(iVar5 + *param_3);
      if (iVar3 == *(int *)(param_1 + 0x20)) {
        fn_82DAFB58(*(int *)(param_1 + 0x20),piVar1);
        fn_82CE4118(piVar1);
      }
      else {
        fn_82DAFB58(iVar3,piVar1);
        fn_82CE4118(piVar1);
        iStack_9c = 0;
        (**(int (***)())(*piVar1 + 0x10))(piVar1,&puStack_a0);
        iVar6 = 0;
        if (0 < iStack_9c) {
          iVar7 = 0;
          do {
            iVar2 = *(int *)(puStack_a0 + iVar7);
            if ((((iVar2 != param_2) && (*(char *)(iVar2 + 0xe8) != '\x05')) &&
                (*(char *)(iVar2 + 0xe8) != '\x05')) &&
               ((*(char *)(param_2 + 0xe8) != '\x05' &&
                (*(int *)(iVar2 + 0xcc) != *(int *)(param_2 + 0xcc))))) {
              fn_82D909F0(*(unsigned int *)(iVar2 + 8),iVar2,param_2);
            }
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar6 < iStack_9c);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < param_3[1]);
  }
  iVar3 = fn_82CE5410();
  iStack_9c = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),puStack_a0,uStack_98 & 0x3fffffff,4);
  }
  return;
}

