extern unsigned int *auStack_90;
extern int fn_826367A8();
extern int fn_82636938();
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


unsigned __int64
fn_82636C98(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,int (**param_8)())

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int in_stack_00000054;
  unsigned int auStack_90 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  
  uVar1 = 0;
  if ((param_7 & 8) == 0) {
    auStack_90[0] = (unsigned int)param_2;
    uVar2 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      puVar3 = param_1;
      do {
        uVar4 = 0;
        puVar5 = &stack_pair_80.first;
        stack_pair_80.first = *puVar3;
        stack_pair_80.second = puVar3[1] & 0xffff;
        uStack_78 = puVar3[2] << 0x10 | (unsigned int)puVar3[1] >> 0x10;
        uStack_74 = (unsigned int)puVar3[2] >> 0x10;
        do {
          if (((param_7 & 1) != 0) &&
             (uVar1 = (*param_8)(1,(unsigned __int64)uVar2 / 6 + uVar4,puVar5,in_stack_00000054),
             (int)uVar1 < 0)) {
            return uVar1;
          }
          if (((1 << ((unsigned int)puVar5[1] >> 0xc & 0xf) & 0x607eU) != 0) &&
             (uVar1 = fn_826367A8(puVar5,auStack_90,param_1,param_2,param_3,param_4,param_7,
                                    param_8), (int)uVar1 < 0)) {
            return uVar1;
          }
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 2;
        } while ((uVar4 & 0xffffffff) < 2);
        if ((param_7 & 0x20) == 0) {
          puVar3[1] = uStack_78 << 0x10 | stack_pair_80.second & 0xffff;
          *puVar3 = stack_pair_80.first;
          puVar3[2] = uStack_74 << 0x10 | uStack_78 >> 0x10;
        }
        uVar2 = uVar2 + 0xc;
        puVar3 = puVar3 + 3;
      } while (uVar2 < auStack_90[0]);
    }
  }
  else {
    uVar1 = fn_82636938(param_1);
  }
  return uVar1;
}

