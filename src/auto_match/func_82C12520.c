extern int fn_82C106C8();
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C10E58();
extern int fn_82F691F0();


unsigned __int64
fn_82C12520(unsigned int *param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned int param_5,unsigned __int64 param_6)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned char *puStack_60;
  int aiStack_5c [23];
  
  aiStack_5c[0] = 0;
  puStack_60 = (unsigned char *)0x0;
  uVar3 = fn_82C10E58(param_1[0x12],*param_2,&puStack_60);
  if (-1 < (int)uVar3) {
    param_1[2] = *(unsigned int *)(param_2 + 4);
    uVar2 = *(unsigned int *)(param_2 + 0xc);
    param_1[6] = param_5;
    param_1[3] = uVar2;
    *(unsigned __int64 *)(param_1 + 0xe) = 0;
    uVar1 = *param_2;
    *(unsigned char *)(param_1 + 4) = uVar1;
    param_1[0xc] = 0;
    *puStack_60 = uVar1;
    *(unsigned int *)(puStack_60 + 0x28) = *(unsigned int *)(param_2 + 0x18);
    *(unsigned int *)(puStack_60 + 0x24) = 1;
    *(unsigned int *)(puStack_60 + 0x20) = 0;
    *(unsigned int *)(puStack_60 + 0x18) = 0;
    *(unsigned int *)(puStack_60 + 0x1c) = 0;
    *(unsigned int *)(puStack_60 + 0x14) = 0;
    *(unsigned int *)(puStack_60 + 4) = 0;
    *(unsigned int *)(puStack_60 + 8) = 0;
    *(unsigned int *)(puStack_60 + 0xc) = 0;
    *(unsigned int *)(puStack_60 + 0x10) = 0;
    uVar3 = fn_82C10AD0(*param_1,0x20,0x2c,param_1 + 1);
    if (-1 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1[1],0,0x2c);
    }
  }
  if (param_1[0x19] != 0) {
    fn_82C106C8(param_6);
  }
  if (param_1[1] != 0) {
    fn_82C10B28(*param_1,0x20,param_1 + 1);
  }
  if (aiStack_5c[0] != 0) {
    fn_82C10B28(*param_1,0x20,aiStack_5c);
  }
  return uVar3;
}

