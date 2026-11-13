extern int fn_82E4BC08();
extern int fn_82E9A160();
extern unsigned int uStack_30;


unsigned __int64
fn_82E9A868(int param_1,unsigned char *param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned int param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uStack_30;
  int aiStack_2c [11];
  
  uVar1 = *(unsigned int *)(param_1 + 0x3c);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 1;
  param_2[3] = 0xe;
  fn_82E4BC08(param_1,param_2 + 4,&uStack_30,(unsigned __int64)uVar1 - 1);
  uVar4 = uStack_30 + 4;
  if ((*(unsigned int *)(param_1 + 0x58) < uStack_30 + 4) ||
     (((-(unsigned int)((unsigned __int64)uVar1 == 0) & param_5) != 0 &&
      ((uStack_30 = uVar4,
       iVar3 = fn_82E9A160(param_1,param_2 + uVar4,*(unsigned int *)(param_1 + 0x58) - uVar4,0x1e,
                             aiStack_2c), iVar3 != 0 ||
       (uVar4 = aiStack_2c[0] + uStack_30, *(unsigned int *)(param_1 + 0x58) < uVar4)))))) {
    uVar2 = 0xffffffffffffff9c;
  }
  else {
    *param_3 = uVar4;
    uVar2 = 0;
  }
  return uVar2;
}

