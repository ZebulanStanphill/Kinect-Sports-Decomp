extern int fn_826824B0();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826964E0();
extern int fn_826BFF48();
extern int fn_826C06A0();
extern int fn_826C3378();
extern int fn_826C3768();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


unsigned __int64
fn_826C1620(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned char *param_5,
             char param_6)

{
  int iVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iStack_80;
  int iStack_7c;
  unsigned char bStack_78;
  struct { int first; int second; } stack_pair_70;

  unsigned char bStack_68;
  unsigned char uStack_60;
  unsigned char uStack_5f;
  char acStack_50 [48];
  
  uStack_60 = 0;
  uStack_5f = 0;
  acStack_50[0] = '\n';
  if (*(unsigned char *)(param_3 + 4) < 7) {
    cVar2 = fn_826C06A0(param_2 + 0x18,param_4,&uStack_60);
  }
  else {
    cVar2 = fn_826BFF48();
  }
  if (cVar2 != '\0') {
    fn_82695FA0(acStack_50,&uStack_60);
  }
  if (acStack_50[0] == '\n') {
    bStack_78 = 0;
    iStack_80 = 0;
    iStack_7c = 0;
    if (param_6 == '\0') {
      stack_pair_70.first = *(int *)(param_1 + 4);
      bStack_68 = 0;
      if (stack_pair_70.first != 0) {
        uVar3 = *(int *)(stack_pair_70.first + 8) + 1;
        *(unsigned int *)(stack_pair_70.first + 8) = uVar3;
        *(unsigned int *)(stack_pair_70.first + 8) = uVar3 & 0x8fffffff;
      }
      stack_pair_70.second = 0;
      if (*(int *)(param_1 + 8) != 0) {
        fn_826C3378(&stack_pair_70.first,*(int *)(param_1 + 8),*(unsigned char *)(param_1 + 0xc) & 1);
      }
      fn_826C3768(&iStack_80,&stack_pair_70.first);
      if (((bStack_68 & 2) == 0) && (stack_pair_70.first != 0)) {
        fn_826824B0();
      }
      stack_pair_70.first = 0;
      if (((bStack_68 & 1) == 0) && (stack_pair_70.second != 0)) {
        fn_826824B0();
      }
      stack_pair_70.second = 0;
    }
    else {
      fn_826C3768(&iStack_80,param_1 + 0x10);
    }
    if (iStack_80 == 0) {
      fn_826959C8();
      *param_5 = 0;
      iVar1 = *(int *)(param_2 + 0x14);
      if (iVar1 != 0) {
        uVar4 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 0x2c))(iVar1 + 0x10,param_3,param_4,param_5);
        if (((bStack_78 & 2) == 0) && (iStack_80 != 0)) {
          fn_826824B0();
        }
        iStack_80 = 0;
        if (((bStack_78 & 1) == 0) && (iStack_7c != 0)) {
          fn_826824B0();
        }
        iStack_7c = 0;
        goto LAB_826c17f4;
      }
    }
    else {
      fn_826964E0(param_5,&iStack_80);
    }
    if (((bStack_78 & 2) == 0) && (iStack_80 != 0)) {
      fn_826824B0();
    }
    iStack_80 = 0;
    if (((bStack_78 & 1) == 0) && (iStack_7c != 0)) {
      fn_826824B0();
    }
    iStack_7c = 0;
  }
  else {
    fn_82695FA0(param_5,acStack_50);
  }
  uVar4 = 1;
LAB_826c17f4:
  fn_82696330(acStack_50);
  fn_82696330(&uStack_60);
  return uVar4;
}

