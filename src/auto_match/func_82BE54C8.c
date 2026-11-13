#define false 0
extern unsigned int *auStack_30;
extern int fn_82BE8EC8();
extern int fn_82BF1B78();
extern unsigned int fn_82F6D460(void *, int);


int fn_82BE54C8(unsigned int param_1,unsigned int param_2,int param_3)

{
  int iVar3;
  unsigned int uVar1;
  unsigned int lVar2;
  unsigned char auStack_30 [24];
  
  if (((param_2 != 0) && (param_3 >= 0x21)) &&
     (iVar3 = fn_82BE8EC8(param_1,auStack_30,0x12), iVar3 != 0)) {
    uVar1 = fn_82F6D460(auStack_30,0x11);
    lVar2 = fn_82BF1B78(param_2,param_3,auStack_30,uVar1);
    return lVar2 != 0;
  }
  return false;
}

