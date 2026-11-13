extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_822997C8();
extern int fn_82299948();
extern int fn_8229A7B8();
extern int fn_8229AE10();
extern int fn_8229CDE0();
extern int fn_8265C9E0();
extern int fn_8266F6A8();
extern unsigned int iStack_2c;
extern unsigned int lbl_821AA7BC;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_82293448(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  fn_8229A7B8(param_1,param_2,param_4);
  param_1[0x60d] = 0;
  uVar2 = ltcg_pool_0_0f;
  *param_1 = &lbl_821AA7BC;
  param_1[0x60b] = uVar2;
  param_1[0x60e] = 0;
  param_1[0x60c] = uVar2;
  param_1[0x60f] = 0;
  param_1[0x610] = 0;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82299948(uVar1,1,0);
  }
  param_1[0x611] = uVar2;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82299948(uVar1,2,0);
  }
  param_1[0x612] = uVar2;
  iVar3 = fn_8265C9E0(0x1230);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822997C8();
  }
  param_1[0x613] = uVar2;
  param_1[0x614] = 0;
  uVar1 = fn_8265C9E0(0x10);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8229CDE0(uVar1,param_3,1);
  }
  param_1[0x615] = uVar2;
  puVar4 = (unsigned int *)fn_8229AE10(auStack_30,param_1);
  fn_8266F6A8(*puVar4,3);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return param_1;
}

