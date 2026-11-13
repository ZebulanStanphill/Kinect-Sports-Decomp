#define true 1
extern unsigned int *auStack_2c;
extern int fn_82FF4A38();
extern int fn_83014400();
extern int fn_830149A0();
extern unsigned int lbl_83264304;
extern unsigned int uStack_30;


unsigned __int64 fn_83014BF8(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  if (((*(int *)(param_1 + 0x38) == 0) || (*(int *)(param_1 + 0x38) == 2)) &&
     (*(int *)(param_1 + 0x78) == 0)) {
    uStack_30 = 0;
    *(unsigned int *)(param_1 + 0x38) = 1;
    while( true ) {
      auStack_2c[0] = 0;
      uVar1 = fn_83014400(param_1,&uStack_30,auStack_2c);
      if (((uVar1 & 0xffffffff) == 0) ||
         (iVar2 = fn_830149A0(param_1,uVar1,uStack_30), iVar2 == 1)) break;
      fn_82FF4A38(lbl_83264304,*(unsigned int *)(param_1 + 0x50),uVar1,auStack_2c[0]);
    }
  }
  return 1;
}

