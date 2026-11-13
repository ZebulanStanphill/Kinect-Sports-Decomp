extern unsigned int *auStack_3c;
extern int fn_82FAAF98();
extern unsigned int lbl_83264234;
extern unsigned int uStack_40;


int fn_82FA73C8(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int iVar1;
  int lVar2;
  int lVar3;
  unsigned int uStack_40;
  unsigned int auStack_3c;
  
  lVar3 = 0;
  *param_2 = 0;
  for (iVar1 = lbl_83264234; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
    if (((*(unsigned char *)(iVar1 + 0x34) & 0x80) != 0) &&
       ((lVar2 = fn_82FAAF98(*(unsigned int *)(iVar1 + 0x38),param_1,&auStack_3c,&uStack_40),
        *param_2 == 0 || (lVar2 < lVar3)))) {
      *param_3 = uStack_40;
      *param_4 = auStack_3c;
      *param_2 = iVar1;
      lVar3 = lVar2;
    }
  }
  return lVar3 + -0x400;
}

