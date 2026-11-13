#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_823F2E20();
extern int fn_8266EC60();
extern int fn_8266ECF0();
extern int fn_8266F628();
extern int fn_8266F678();
extern unsigned int iStack_34;
extern unsigned int lbl_8219563C;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_822770B0(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  *param_1 = param_3;
  puVar5 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_82266D28(puVar5,0);
  param_1[0xf] = 0;
  *(unsigned char *)((int)param_1 + 0x42) = 0;
  *(unsigned char *)((int)param_1 + 0x43) = 0;
  *(unsigned char *)(param_1 + 0x11) = 0;
  *(unsigned char *)(param_1 + 0x10) = 1;
  *(unsigned char *)((int)param_1 + 0x41) = 1;
  uVar2 = ltcg_pool_0_0f;
  uVar1 = lbl_8219563C;
  param_1[0x12] = 0;
  param_1[5] = uVar1;
  param_1[0x13] = 0;
  param_1[6] = uVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  *(unsigned __int64 *)(param_1 + 0xd) = CONCAT44(uVar2,uVar2);
  *(unsigned __int64 *)(param_1 + 0xb) = CONCAT44(uVar2,uVar2);
  if (param_2 != (unsigned int *)0x0) {
    uVar4 = (unsigned __int64)*param_2;
    if (uVar4 != (uVar4 - 1) + (unsigned __int64)(uVar4 == 0)) {
      uVar3 = fn_8266EC60();
      uVar3 = fn_8266ECF0(auStack_38,uVar3,param_2,5,0,0xffffffffffffffff,0,0x18280143);
      fn_823F2E20(puVar5,uVar3);
      if (iStack_34 != 0) {
        fn_822315A0();
      }
      fn_8266F678(*puVar5,1);
      fn_8266F628(*puVar5,1);
    }
  }
  return param_1;
}

