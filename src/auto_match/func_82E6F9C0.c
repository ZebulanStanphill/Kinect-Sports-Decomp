#define true 1
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int stack0x00000026;
extern unsigned int uStack00000026;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82E6F9C0(int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned short uStack00000026;
  unsigned int auStack_40 [2];
  unsigned __int64 auStack_38 [7];
  
  lVar2 = *(__int64 *)(param_1 + 0x12);
  uStack00000026 = (unsigned short)((param_3 & 0xffffffff) << 8) | (unsigned short)(param_3 >> 8) & 0xff;
  auStack_40[0] = 0xffffffff;
  uVar1 = 0;
  while( true ) {
    if (lVar2 == 0) {
      return uVar1;
    }
    auStack_38[0] = 0;
    lVar2 = lVar2 + -1;
    uVar1 = (**(int (***)())(*param_1 + 0x24))(param_1,lVar2,auStack_38,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(int (***)())(*(int *)param_1[0xb] + 0x1c))((int *)param_1[0xb],auStack_38[0]);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    auStack_40[1] = 0;
    uVar1 = (**(int (***)())(*(int *)param_1[0xb] + 0x24))
                      ((int *)param_1[0xb],auStack_40,4,auStack_40 + 1);
    if ((int)uVar1 < 0) break;
    auStack_40[0] =
         auStack_40[0] << 0x18 |
         (auStack_40[0] & 0xff00) << 8 | auStack_40[0] >> 8 & 0xff00 | auStack_40[0] >> 0x18;
    if ((auStack_40[0] == param_2) &&
       (uVar1 = (**(int (***)())(*(int *)param_1[0xb] + 0x30))
                          ((int *)param_1[0xb],&stack0x00000026,2,auStack_40 + 1), (int)uVar1 < 0))
    {
      return uVar1;
    }
    if (auStack_40[0] < param_2) {
      return uVar1;
    }
  }
  return uVar1;
}

