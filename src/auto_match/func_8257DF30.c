#define true 1


void fn_8257DF30(int param_1,int param_2,int param_3,unsigned param_4)

{
  int iVar1;
  unsigned iVar2;
  int bVar3;
  int *piVar4;
  
  iVar2 = *(unsigned *)(*(unsigned *)(param_1+4)+0x11c);
  iVar1 = *(unsigned *)(param_2+0xc); bVar3=0;
  if (iVar2 != 0) {
    do {
      piVar4=iVar2!=0 ? (int *)(iVar2-16) : 0;
      if ((piVar4[iVar1 + 0xc] != 0) && (*(char *)((int)piVar4 + param_3 + 0x48) != '\0')) {
        if (!bVar3) {
          (*(int (**)())(*piVar4 + 0xc))(piVar4,param_2,param_4);
          bVar3 = true;
        }
        (*(int (**)())(*piVar4 + 0x10))(piVar4,param_2,param_3);
      }
      iVar2 = *(unsigned int *)(iVar2 + 4);
    } while (iVar2 != 0);
  }
  return;
}

