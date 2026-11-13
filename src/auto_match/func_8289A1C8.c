extern int fn_8236D750();
extern int fn_8240D928();
extern int fn_82898308();
extern int fn_82898C40();
extern int fn_828A1318();


void fn_8289A1C8(int param_1,unsigned __int64 param_2)

{
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char cVar6;
  unsigned int uVar5;
  int iVar7;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))(), iVar3 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x10))(), iVar3 == 0)) {
      if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
         (iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))(), iVar3 != 0)) {
        if (*(int **)(param_1 + 0x20) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))();
        }
        uVar5 = fn_8240D928(param_2);
        if (uVar5 < 4) {
          uVar2 = fn_8236D750(*(unsigned int *)(param_1 + 0x18));
          fn_82898308(iVar3 + 0xc,uVar5,uVar2,0);
          uVar2 = fn_8236D750(*(unsigned int *)(param_1 + 0x18));
          fn_82898308(iVar3 + 0x28,uVar5,uVar2,0);
          *(unsigned char *)(uVar5 + iVar3 + 5) = 0;
          iVar3 = ((int)uVar5 >> 3) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 7) != 0) + iVar3;
          *(unsigned char *)(iVar3 + 4) =
               *(unsigned char *)(iVar3 + 4) &
               ~(unsigned char)(1 << (uVar5 + (((int)uVar5 >> 3) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 7) != 0)
                                     ) * -8 & 0x3f));
        }
      }
    }
    else {
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x10))();
      }
      uVar5 = fn_8240D928(param_2);
      if (uVar5 < 4) {
        *(unsigned char *)(uVar5 + iVar3 + 4) = 0;
        uVar2 = fn_8236D750(*(unsigned int *)(param_1 + 0x18));
        fn_82898308(iVar3 + 8,uVar5,uVar2,0);
      }
    }
  }
  else {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(**(int (***)())(**(int **)(param_1 + 0x20) + 4))();
    }
    uVar1 = fn_8240D928(param_2);
    if ((uVar1 & 0xffffffff) < 4) {
      (**(int (***)())(*piVar4 + 0x20))(piVar4,uVar1);
      iVar3 = *piVar4;
      uVar2 = fn_8236D750(*(unsigned int *)(param_1 + 0x18));
      (**(int (***)())(iVar3 + 0x28))(piVar4,uVar1,uVar2);
      iVar7 = (int)uVar1;
      iVar3 = (iVar7 >> 3) + (unsigned int)(iVar7 < 0 && (uVar1 & 7) != 0);
      *(unsigned char *)((int)piVar4 + iVar3 + 4) =
           *(unsigned char *)((int)piVar4 + iVar3 + 4) &
           ~(unsigned char)(1 << (iVar7 + ((iVar7 >> 3) + (unsigned int)(iVar7 < 0 && (uVar1 & 7) != 0)) * -8 & 0x3f)
                  );
      uVar2 = fn_8236D750(*(unsigned int *)(param_1 + 0x18));
      cVar6 = fn_82898C40(param_1 + 4,0,uVar2,0);
      if (cVar6 == '\0') {
        fn_828A1318(*(unsigned int *)(param_1 + 0x28),param_1);
      }
    }
  }
  return;
}

