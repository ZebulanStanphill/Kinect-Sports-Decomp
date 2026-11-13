extern int fn_8267C498();
extern int fn_8269A110();
extern int fn_8269D548();
extern int fn_826C6C90();
extern int fn_826C6E68();
extern int fn_826C90C8();
extern int fn_826D0AE8();
extern unsigned int uStack_23;
extern unsigned int uStack_24;
extern unsigned int uStack_25;
extern unsigned int uStack_26;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_35;
extern unsigned int uStack_36;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_45;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826D0C88(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  unsigned int *puVar4;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned short uStack_48;
  unsigned char uStack_46;
  unsigned char uStack_45;
  unsigned char uStack_44;
  unsigned char uStack_43;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned short uStack_38;
  unsigned char uStack_36;
  unsigned char uStack_35;
  unsigned char uStack_34;
  unsigned char uStack_33;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned short uStack_28;
  unsigned char uStack_26;
  unsigned char uStack_25;
  unsigned char uStack_24;
  unsigned char uStack_23;
  
  if ((param_1[0x23] & 0xcU) != 0) {
    return;
  }
  if (param_1[5] < -1) {
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(param_1[0x28] + 0xb8c) = *(int *)(param_1[0x28] + 0xb8c) + 1;
  if ((((param_2 != '\0') && (fn_826D0AE8(), param_1[0x2e] != 1)) &&
      (piVar2 = (int *)(**(int (***)())(*(int *)param_1[0x27] + 0x38))(), piVar2 != (int *)0x0)) &&
     (cVar3 = (**(int (***)())(*piVar2 + 4))(piVar2,param_1[0x28],param_1[0x2f],param_1), cVar3 == '\0')
     ) {
    (**(int (***)())(*(int *)param_1[0x27] + 0x3c))((int *)param_1[0x27],0);
  }
  if (*(int *)(param_1[0x28] + 0x9d4) != 0) {
    fn_8269D548(param_1);
  }
  if (param_2 == '\0') goto LAB_826d0e64;
  if (param_1[0x2e] == 0) {
    iVar1 = param_1[0x2f];
    fn_826C6C90(param_1);
    if (param_1[0x2f] == iVar1) {
      stack_pair_40.second = 0;
      stack_pair_40.first = 2;
      puVar4 = &stack_pair_40.first;
      uStack_38 = 0;
      uStack_36 = 0;
      uStack_35 = 0xff;
      uStack_34 = 0;
      uStack_33 = 0;
      goto LAB_826d0e3c;
    }
    fn_826C6E68(param_1);
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_46 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_50 = 2;
    uStack_45 = 0xff;
    (**(int (***)())(*param_1 + 0x6c))(param_1,&uStack_50);
    fn_826C90C8(param_1,param_1[0x2f]);
  }
  else {
    uStack_2c = 0;
    uStack_30 = 2;
    puVar4 = &uStack_30;
    uStack_28 = 0;
    uStack_26 = 0;
    uStack_25 = 0xff;
    uStack_24 = 0;
    uStack_23 = 0;
LAB_826d0e3c:
    (**(int (***)())(*param_1 + 0x6c))(param_1,puVar4);
  }
  if (param_1[0x2f] == 0) {
    fn_8269A110(param_1 + 0x2a);
  }
LAB_826d0e64:
  fn_8267C498(param_1);
  return;
}

