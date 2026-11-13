extern int fn_826944C8();
extern int fn_826A76D0();
extern int fn_826F6FA8();
extern int fn_82720748();
extern unsigned int uStack_13;
extern unsigned int uStack_14;
extern unsigned int uStack_15;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_827526D8(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned char param_4,
                  unsigned int param_5)

{
  int *piVar2;
  unsigned __int64 uVar1;
  __int64 lVar3;
  int aiStack_30 [4];
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned short uStack_18;
  unsigned char uStack_16;
  unsigned char uStack_15;
  unsigned char uStack_14;
  unsigned char uStack_13;
  
  *(unsigned int *)(param_1 + 4) = param_3;
  *(unsigned char *)(param_1 + 8) = param_4;
  uStack_20 = 0x80;
  *(unsigned int *)(param_1 + 0xc) = param_5;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_15 = 0xff;
  uStack_14 = 0;
  uStack_13 = 0;
  fn_826A76D0(aiStack_30,&uStack_20,param_2);
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar2 = (int *)fn_826F6FA8(*(int *)(param_1 + 0x10),0);
    if (piVar2 != (int *)0x0) {
      uVar1 = (**(int (***)())(*piVar2 + 0x5c))();
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82720748(uVar1,param_1 + -0x24,aiStack_30,0,0);
      }
    }
  }
  lVar3 = (unsigned __int64)*(unsigned int *)(aiStack_30[0] + 8) - 1;
  *(int *)(aiStack_30[0] + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(aiStack_30[0]);
  }
  return;
}

