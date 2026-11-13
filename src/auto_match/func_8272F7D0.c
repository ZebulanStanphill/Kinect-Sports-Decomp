extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82681930();
extern int fn_8268ACE8();
extern int fn_82696330();
extern int fn_8269AB28();
extern int fn_826B44A0();
extern int fn_82722C50();
extern int fn_8272C1E0();
extern int fn_8272DDC8();
extern int fn_8279FB38();


void fn_8272F7D0(int *param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  char cVar3;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  iVar2 = fn_8268ACE8((unsigned __int64)(unsigned int)param_1[0x27] + 0x48);
  if (iVar2 == 0) {
    (**(int (***)())(*param_1 + 0x1ac))
              (param_1,0xffffffff82196582,*(unsigned short *)(param_1 + 0x32) >> 1 & 1,0);
  }
  else {
    cVar3 = '\0';
    if (*(int *)(param_1[0x2d] + 0x10) != 0) {
      uVar1 = (**(int (***)())(*param_1 + 0x5c))(param_1);
      if ((uVar1 & 0xffffffff) != 0) {
        auStack_70[0] = 0;
        cVar3 = fn_826B44A0(uVar1,param_1 + 0x2d,auStack_70,0,0,0,0);
        fn_82696330(auStack_70);
      }
    }
    if (cVar3 == '\0') {
      (**(int (***)())(*param_1 + 0x1ac))
                (param_1,((unsigned __int64)*(unsigned int *)(param_1[0x27] + 0x48) & 0xfffffffc) + 8,
                 *(unsigned short *)(param_1 + 0x32) >> 1 & 1,1);
      fn_82722C50(param_1);
    }
  }
  fn_8272C1E0(param_1);
  fn_8279FB38(param_1[0x28]);
  fn_8269AB28(param_1);
  if (param_1[0x21] == 0) {
    fn_82681930(auStack_60);
    fn_8272DDC8(param_1,auStack_60,1);
  }
  return;
}

