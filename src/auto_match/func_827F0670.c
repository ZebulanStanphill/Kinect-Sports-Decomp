extern int fn_827F3C20();
extern int fn_827F4058();
extern int fn_827F4068();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;


void fn_827F0670(unsigned __int64 param_1,__int64 param_2)

{
  int *piVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  piVar1 = (int *)param_2;
  if (*(char *)(piVar1 + 0x62) == '\0') {
    (**(int (***)())(*piVar1 + 4))((double)lbl_821AAD20);
  }
  lVar3 = (unsigned __int64)*(unsigned short *)((int)piVar1 + 0xe2) - 1;
  if (-1 < lVar3) {
    lVar2 = ((unsigned __int64)*(unsigned short *)((int)piVar1 + 0xe2) + 8) * 4 + param_2;
    do {
      lVar2 = lVar2 + -4;
      (**(int (***)())(*(int *)piVar1[*(unsigned short *)lVar2 + 0x28] + 8))(param_1);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  if (piVar1[0x3c] == 0xffff) {
    fn_827F4058();
  }
  else {
    lVar3 = fn_827F3C20(param_2);
    lVar2 = fn_827F3C20(piVar1[piVar1[0x3c] + 0x28]);
    fn_82F68CC0(lVar3 + 0x34,lVar2 + 0x34,0x20);
    fn_827F4068(param_2);
  }
  return;
}

