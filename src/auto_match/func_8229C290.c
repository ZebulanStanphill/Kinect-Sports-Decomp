extern int fn_8229BA88();
extern int fn_824BC7E8();
extern int fn_82512A48();
extern int fn_8266C6F8();
extern int fn_8266C730();
extern int fn_8266EC60();
extern int fn_82672C20();
extern unsigned int ltcg_pool_0_0f;


void fn_8229C290(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  
  if ((param_1[2] == 0) && (param_1[3] != 0)) {
    fn_82672C20(*param_1,0xffffffff821aaff0,0,0);
    fn_82672C20(*param_1,0xffffffff821ab0c0,0,0);
    param_1[2] = 1;
    fn_8229BA88(param_1);
    param_1[0x18] = 0;
    param_1[0x19] = ltcg_pool_0_0f;
    if (param_1[0x2a] != 0) {
      fn_82512A48();
      param_1[0x2a] = 0;
    }
    if (param_1[0x2b] != 0) {
      param_1[0x2b] = 0;
      uVar1 = param_1[0x2c];
      uVar2 = fn_8266EC60();
      fn_8266C6F8(uVar2,uVar1);
      uVar1 = param_1[0x2d];
      uVar2 = fn_8266EC60();
      fn_8266C730(uVar2,uVar1);
    }
    piVar3 = (int *)fn_824BC7E8();
    *(unsigned int *)(*(int *)(*piVar3 + 0x14) + 0x20) = 1;
  }
  return;
}

