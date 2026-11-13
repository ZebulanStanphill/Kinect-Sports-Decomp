typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_38;
extern int fn_8256E1D8();
extern int fn_8266D1B8();
extern int fn_8266EB28();
extern int fn_82673F48();
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int *
fn_8266ECF0(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_40;
  int *piStack_3c;
  unsigned char auStack_38 [4];
  int *piStack_34;
  
  fn_82673F48(param_1,param_3,param_2,param_5,param_6,param_7,param_8);
  uStack_40 = 0;
  piStack_3c = (int *)0x0;
  fn_8256E1D8(&uStack_40,*param_1,param_1[1]);
  uVar2 = fn_8266D1B8(auStack_38,&uStack_40,param_4);
  fn_8266EB28(param_2 + 0xd8,uVar2);
  if (ZEXT48(piStack_34) != 0) {
    lVar4 = ZEXT48(piStack_34) + 8;
    do {
      puVar5 = (unsigned int *)lVar4;
      lVar3 = (unsigned __int64)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar3,0,lVar4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar3 == 0) {
      (**(int (***)())(*piStack_34 + 4))();
    }
  }
  if (ZEXT48(piStack_3c) != 0) {
    lVar4 = ZEXT48(piStack_3c) + 8;
    do {
      puVar5 = (unsigned int *)lVar4;
      lVar3 = (unsigned __int64)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar3,0,lVar4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar3 == 0) {
      (**(int (***)())(*piStack_3c + 4))();
    }
  }
  *(unsigned int *)(param_2 + 0xec) = 1;
  return param_1;
}

