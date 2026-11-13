typedef unsigned char bool;
extern int fn_82FA5190();
extern int fn_82FF90A8();
extern int fn_82FF9FA8();
extern int fn_82FFB900();
extern int fn_8302B530();
extern int fn_8302B540();
extern int fn_8302B660();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82FFBD98(__int64 param_1,char param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  fn_8302B530();
  puVar2 = (unsigned int *)param_1;
  if (param_2 == '\0') {
    do {
      puVar5 = (unsigned int *)(param_1 + 0x44);
      lVar4 = (unsigned __int64)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar4,0,param_1 + 0x44);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (0 < (int)lVar4) goto LAB_82ffbe6c;
  }
  else {
    puVar2[0x11] = 0;
  }
  fn_82FFB900(lbl_832642F0,param_1);
  if ((int)puVar2[0x10] < 1) {
    fn_8302B660((unsigned __int64)lbl_832642F0 + 0x39c,puVar2[3]);
    fn_8302B540();
    fn_82FF9FA8(param_1);
    fn_82FF90A8(param_1);
    uVar3 = lbl_831BC768;
    (**(int (***)())*puVar2)(param_1,0);
    fn_82FA5190(uVar3,param_1);
    return;
  }
LAB_82ffbe6c:
  fn_8302B540();
  return;
}

