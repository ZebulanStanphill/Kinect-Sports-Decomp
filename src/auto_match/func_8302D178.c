extern int fn_8302B6E0();


void fn_8302D178(int param_1,int param_2,unsigned __int64 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  if ((*(unsigned char *)(param_1 + 0x11f) & 1) == 0) {
    iVar2 = fn_8302B6E0(param_1 + 0x8c,param_3);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10c);
  }
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(iVar2 + 0xc) = cVar1;
  sVar4 = *(short *)(param_2 + 0xe) + -1;
  if (cVar1 == '\0') {
    sVar4 = *(short *)(param_2 + 0xe) + 1;
  }
  *(short *)(iVar2 + 0xe) = sVar4;
  iVar3 = (**(int (***)())(**(int **)(param_1 + 0x88) + 0xc))();
  if ((sVar4 + 1 == iVar3) && ((*(unsigned char *)(param_1 + 0x11f) & 4) == 0)) {
    *(unsigned short *)(iVar2 + 0xe) = 0xffff;
  }
  else if ((sVar4 == 0) && (*(char *)(iVar2 + 0xc) == '\0')) {
    *(unsigned char *)(iVar2 + 0xc) = 1;
  }
  return;
}

