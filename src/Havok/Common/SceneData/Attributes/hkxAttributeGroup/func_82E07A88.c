extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE128();
extern int fn_82CEE578();
extern int fn_82E07840();
extern unsigned int *lbl_8323B464;


unsigned __int64 fn_82E07A88(unsigned __int64 param_1,unsigned __int64 param_2,char param_3,int *param_4)

{
  unsigned char bVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned char auStack_240 [16];
  unsigned char auStack_230 [560];
  
  iVar3 = fn_82E07840(param_1,param_2,0xffffffff8323f89c);
  if (iVar3 == 0) {
    iVar3 = fn_82E07840(param_1,param_2,0xffffffff8323f86c);
    if (iVar3 != 0) {
      bVar1 = **(unsigned char **)(iVar3 + 8);
      *param_4 = (unsigned int)bVar1 + (-(unsigned int)(bVar1 == 0) - (bVar1 - 1));
      return 0;
    }
    iVar3 = fn_82E07840(param_1,param_2,0xffffffff8323f46c);
    if (iVar3 == 0) {
      if (param_3 == '\0') {
        return 1;
      }
      fn_82CEE578(auStack_240,auStack_230,0x200);
      uVar2 = fn_82CEDB38(auStack_240,0xffffffff82149ee8);
      uVar2 = fn_82CEDB38(uVar2,param_2);
      uVar2 = fn_82CEDB38(uVar2,0xffffffff82149ec8);
      uVar2 = fn_82CEE128(uVar2,param_1);
      fn_82CEDB38(uVar2,0xffffffff82149eb4);
      (**(int (***)())(*lbl_8323B464 + 0xc))
                (lbl_8323B464,1,0xffffffffabbaab81,auStack_230,0xffffffff82149e90,0x5a);
                    /* WARNING: Subroutine does not return */
      fn_82CED958(auStack_240);
    }
  }
  *param_4 = **(int **)(iVar3 + 8);
  return 0;
}

