extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE128();
extern int fn_82CEE578();
extern int fn_82E07840();
extern unsigned int *lbl_8323B464;


unsigned __int64 fn_82E07DE0(unsigned __int64 param_1,unsigned __int64 param_2,char param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_240 [1];
  unsigned char auStack_230 [512];

  iVar4 = fn_82E07840(param_1,param_2,0xffffffff8323f34c);
  if (iVar4 == 0) {
    if (param_3 != '\0') {
      fn_82CEE578(auStack_240,auStack_230,0x200);
      uVar3 = fn_82CEDB38(auStack_240,0xffffffff82149f10);
      uVar3 = fn_82CEDB38(uVar3,param_2);
      uVar3 = fn_82CEDB38(uVar3,0xffffffff82149ec8);
      uVar3 = fn_82CEE128(uVar3,param_1);
      fn_82CEDB38(uVar3,0xffffffff82149eb4);
      (**(int (***)())(*lbl_8323B464 + 0xc))
                (lbl_8323B464,1,0xffffffffabbaab81,auStack_230,0xffffffff82149e90,0xa2);
      fn_82CED958(auStack_240);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    puVar1 = (unsigned int *)(in_r0 + *(int *)(iVar4 + 8) & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
  }
  return uVar3;
}
