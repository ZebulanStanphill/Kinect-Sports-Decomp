typedef unsigned char bool;
extern int fn_82FA5190();
extern int fn_82FF90A8();
extern int fn_82FF9128();
extern int fn_82FFB818();
extern int fn_8302B530();
extern int fn_8302B540();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82FFBCA8(__int64 param_1,char param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  fn_8302B530();
  do {
    puVar4 = (unsigned int *)(param_1 + 0x40);
    lVar3 = (unsigned __int64)*puVar4 - 1;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(lVar3,0,param_1 + 0x40);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((int)lVar3 < 1) {
    fn_82FF90A8(param_1);
    fn_82FFB818(lbl_832642F0,param_1);
    if ((int)((unsigned int *)param_1)[0x11] < 1) {
      fn_8302B540();
      if (param_2 == '\0') {
        fn_82FF9128(param_1);
      }
      uVar2 = lbl_831BC768;
      (**(int (***)())*(unsigned int *)param_1)(param_1,0);
      fn_82FA5190(uVar2,param_1);
    }
    else {
      fn_8302B540();
      if (param_2 == '\0') {
        fn_82FF9128(param_1);
      }
    }
  }
  else {
    fn_8302B540();
  }
  return;
}

