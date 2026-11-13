#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_10;


__int64 fn_83085B40(int param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5,
                      unsigned __int64 param_6)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 auStack_10 [2];
  
  auStack_10[0] = CONCAT44(param_5,(int)param_6) & 0x7fffffffffffffff;
  *(unsigned __int64 *)(param_4 * 8 + param_1) = auStack_10[0];
  if (0 < (int)param_6) {
    param_3 = param_5 * 0x10 + param_3;
    uVar3 = param_6;
    do {
      uVar3 = uVar3 - 1;
      puVar1 = (unsigned int *)((int)auStack_10 + in_r0 & 0xfffffff0);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      param_3 = param_3 + 0x10;
    } while (uVar3 != 0);
  }
  return (param_6 & 0x7fffffff) * 2 + -2;
}

