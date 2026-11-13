extern unsigned int *auStack_64;
extern int fn_82A29A38();
extern int fn_82AB0350();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82AB0450(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,int param_7,int *param_8)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uStack_70;
  struct { unsigned int first; unsigned int second; } stack_pair_6c;

  unsigned int auStack_64;
  
  puVar3 = (unsigned int *)*param_8;
  if (0xd < param_2) {
    fn_82A29A38();
  }
  if (0xf < (param_1 & 0xffffffff)) {
    fn_82A29A38();
  }
  uVar4 = (unsigned int)((param_3 & 0xff) << 0x15);
  if (param_2 == 5) {
    uVar2 = (unsigned int)(param_3 + 1);
    if ((param_3 + 1 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_7 + 4)) {
      uVar2 = *(unsigned int *)(param_7 + 4);
    }
    *(unsigned int *)(param_7 + 4) = uVar2;
    iVar1 = *(int *)(*(int *)(param_7 + 0x10) + 4);
    if (iVar1 == 1) {
      param_4 = 0;
    }
    else if (iVar1 == 2) {
      param_4 = 1;
    }
    uVar4 = uVar4 | 0x50017;
    if (7 < (param_3 & 0xffffffff)) {
      fn_82A29A38();
    }
  }
  else if (param_2 == 10) {
    uVar4 = uVar4 | 0x20017;
  }
  else {
    uVar4 = ((param_2 + 1) * 0x2000000 | (unsigned int)((param_3 & 0xffffffff) << 0x15)) & 0x1fe00000 |
            0x50017;
  }
  if (0xf < (param_1 & 0xffffffff)) {
    fn_82A29A38();
  }
  *(unsigned int *)((int)((param_1 + 4 & 0xffffffff) << 3) + *(int *)(param_7 + 0x10)) = 0xc;
  *(unsigned int *)((int)((param_1 & 0xffffffff) << 3) + *(int *)(param_7 + 0x10) + 0x1c) = (unsigned int)param_1;
  fn_82AB0350(param_6,param_5,&auStack_64,&stack_pair_6c.second,&stack_pair_6c.first,&uStack_70);
  if ((((param_4 == 0) && (auStack_64 == 3)) && (stack_pair_6c.second == 3)) &&
     ((stack_pair_6c.first == 3 && (uStack_70 == 3)))) {
    *puVar3 = uVar4;
  }
  else {
    *puVar3 = uVar4 | 0x80000000;
    puVar3 = puVar3 + 1;
    *puVar3 = ((((param_4 & 1) << 2 | uStack_70 & 3) << 2 | stack_pair_6c.first & 3) << 2 | stack_pair_6c.second & 3) <<
              2 | auStack_64 & 3;
  }
  puVar3[1] = (unsigned int)param_1 & 0xffff | 0xc0000;
  *param_8 = (int)(puVar3 + 2);
  return;
}

