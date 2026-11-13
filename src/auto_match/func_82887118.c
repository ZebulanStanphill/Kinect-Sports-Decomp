extern int fn_82880BD8();
extern unsigned int lbl_83212A18;
extern unsigned int lbl_83212A20;
extern unsigned int lbl_83212A24;
extern int (*lbl_83212A28)();


unsigned __int64 fn_82887118(unsigned __int64 param_1,int param_2)

{
  int (**pcVar1)();
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  
  iVar3 = (*lbl_83212A28)();
  if ((((iVar3 < 0) || (lbl_83212A24 <= iVar3)) ||
      ((iVar4 = fn_82880BD8(), param_2 == iVar4 && (*(char *)(lbl_83212A20 + iVar3) == '\0')))
      ) || (pcVar1 = *(int (***)())(iVar3 * 4 + lbl_83212A18), pcVar1 == (int (**)())0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*pcVar1)(0);
  }
  return uVar2;
}

