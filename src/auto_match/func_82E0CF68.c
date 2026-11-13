extern unsigned int *auStack_40;
extern int fn_82CEAC60();
extern int fn_82E0A018();
extern int fn_82E0A398();
extern int fn_82E0BA38();
extern int fn_82E0C5E0();
extern int fn_82E12D08();
extern int fn_82E162A8();


unsigned __int64 fn_82E0CF68(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int *piVar5;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  char *pcVar6;
  int iVar7;
  unsigned __int64 uVar4;
  unsigned char auStack_40 [1];
  
  if ((param_3 & 0xffffffff) != 0) {
    fn_82E12D08();
  }
  uVar1 = (**(int (***)())(*param_1 + 0x18))(param_1);
  if (((param_2 & 0xffffffff) == 0) || ((uVar1 & 0xffffffff) == 0)) {
LAB_82e0d00c:
    (**(int (***)())(*param_1 + 0x1c))(param_1);
    if ((param_3 & 0xffffffff) == 0) {
      (**(int (***)())(*param_1 + 0x28))(param_1);
      uVar4 = fn_82E0A398();
      if ((uVar4 & 0xffffffff) != 0) {
        fn_82E0C5E0(param_1,uVar4);
      }
      uVar2 = fn_82E0BA38(param_1);
      fn_82E162A8(param_1[6],uVar2);
    }
    else {
      iVar7 = fn_82E0A018(param_1,param_3);
      if (iVar7 == 1) goto LAB_82e0d03c;
    }
    uVar2 = (**(int (***)())(*(int *)param_1[6] + 0x18))((int *)param_1[6],uVar1,param_3);
  }
  else {
    piVar5 = (int *)fn_82E0BA38(param_1);
    uVar2 = (**(int (***)())(*piVar5 + 0x10))(piVar5,param_2);
    uVar3 = (**(int (***)())(*piVar5 + 0x10))(piVar5,uVar1);
    pcVar6 = (char *)fn_82CEAC60(auStack_40,uVar2,uVar3);
    if (*pcVar6 != '\0') goto LAB_82e0d00c;
LAB_82e0d03c:
    uVar2 = 0;
  }
  return uVar2;
}

