extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD1978();
extern int fn_82B859E8();
extern int fn_82B85A88();
extern int fn_82B85B28();
extern int fn_82B85BC8();


unsigned __int64 fn_82B88A48(int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  uVar2 = (unsigned int)param_1[2] >> 7 & 0x7f;
  uVar3 = 0;
  if (uVar2 == 0x3b) {
    uVar3 = fn_82B85A88(param_2,param_1[7],param_1[0xb]);
  }
  else if (uVar2 == 0x3c) {
    uVar3 = fn_82B859E8(param_2,param_1[7],param_1[0xb]);
  }
  else if (uVar2 == 0x3d) {
    uVar3 = fn_82ACA920(param_2,param_1[0xb],*(unsigned int *)(param_1[0xb] + 0xc));
    fn_82AD1270(uVar3,4);
    uVar3 = fn_82B85BC8(param_2,param_1[7],uVar3);
  }
  else if (uVar2 == 0x3e) {
    uVar3 = fn_82ACA920(param_2,param_1[0xb],*(unsigned int *)(param_1[0xb] + 0xc));
    fn_82AD1270(uVar3,4);
    uVar3 = fn_82B85B28(param_2,param_1[7],uVar3);
  }
  for (puVar1 = (unsigned int *)*param_1; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[1]) {
    if ((*puVar1 & 0xe000000) == 0) {
      fn_82AD1978(uVar3,puVar1);
    }
  }
  return uVar3;
}

