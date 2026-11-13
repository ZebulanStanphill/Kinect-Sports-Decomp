extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82240D08();
extern int fn_8240D928();
extern int fn_8288BB90();
extern int fn_82897BA8();
extern int fn_82898308();
extern int fn_82898A38();
extern int fn_828A1318();


void fn_8289A470(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar1;
  char cVar4;
  unsigned int *puVar5;
  int iVar6;
  __int64 lVar7;
  unsigned char auStack_70 [1];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))(), iVar2 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x10))(), iVar2 == 0)) {
      if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
         (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))(), iVar2 != 0)) {
        if (*(int **)(param_1 + 0x20) == (int *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))();
        }
        uVar1 = fn_8240D928(param_2);
        iVar2 = param_3 + 0xc;
        if (param_3 == 0) {
          iVar2 = param_1 + 4;
        }
        fn_8288BB90(auStack_70,iVar2);
        fn_82898308(lVar7 + 0x28,uVar1,auStack_70,0);
        fn_82898308(lVar7 + 0xc,uVar1,auStack_70,0);
        fn_82240D08(auStack_70);
      }
    }
    else {
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x10))();
      }
      uVar1 = fn_8240D928(param_2);
      iVar2 = param_3 + 0xc;
      if (param_3 == 0) {
        iVar2 = param_1 + 4;
      }
      fn_8288BB90(auStack_50,iVar2);
      fn_82898308(lVar7 + 8,uVar1,auStack_50,0);
      fn_82240D08(auStack_50);
    }
  }
  else {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(**(int (***)())(**(int **)(param_1 + 0x20) + 4))();
    }
    uVar1 = fn_8240D928(param_2);
    iVar2 = param_3 + 0xc;
    if (param_3 == 0) {
      iVar2 = param_1 + 4;
    }
    fn_8288BB90(auStack_60,iVar2);
    (**(int (***)())(*piVar3 + 0x28))(piVar3,uVar1,auStack_60);
    cVar4 = (**(int (***)())(*piVar3 + 0x5c))(piVar3,uVar1,param_1 + 4);
    if (cVar4 == '\0') {
      cVar4 = fn_82897BA8(*(unsigned int *)(param_1 + 0x18));
      if (cVar4 == '\0') {
        fn_828A1318(*(unsigned int *)(param_1 + 0x28),param_1);
        fn_82240D08(auStack_60);
        return;
      }
      uVar1 = fn_8240D928(param_2);
      iVar2 = *(int *)(param_1 + 0x1c);
      iVar6 = 0;
      puVar5 = (unsigned int *)(iVar2 + 0x10);
      lVar7 = 4;
      do {
        puVar5 = puVar5 + 1;
        *puVar5 = 0;
        *(unsigned char *)(iVar2 + 0x34 + iVar6) = 1;
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      fn_82898A38(param_1,uVar1);
    }
    fn_82240D08(auStack_60);
  }
  return;
}

