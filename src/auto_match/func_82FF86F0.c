#define true 1
extern unsigned int *auStack_50;
extern int fn_82A1DDC0();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


unsigned __int64 fn_82FF86F0(unsigned int *param_1,__int64 param_2,unsigned __int64 param_3,int *param_4)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned char auStack_50 [4];
  unsigned int uStack_4c;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  
  *param_4 = 0;
  if (param_1[7] == 0) {
    if ((unsigned __int64)(unsigned int)param_1[2] <= (param_3 & 0xffffffff)) {
      param_3 = (unsigned __int64)(unsigned int)param_1[2];
    }
    *param_4 = (int)param_3;
    param_1[2] = param_1[2] - (int)param_3;
    fn_82A1DDC0(param_2,param_1[6],*param_4);
    param_1[6] = param_1[6] + *param_4;
  }
  else if ((param_3 & 0xffffffff) != 0) {
    puVar5 = param_1 + 2;
    do {
      uVar6 = (unsigned __int64)*puVar5;
      if (uVar6 == 0) {
        piVar1 = (int *)param_1[7];
        if ((param_3 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[3]) {
          uVar2 = param_1[4];
          trapWord(6,(unsigned __int64)uVar2,0);
          uVar6 = (__int64)(int)((unsigned int)param_1[3] / uVar2) * (__int64)(int)uVar2;
          uStack_40 = uVar6 & 0xffffffff;
          uVar3 = (**(int (***)())(*piVar1 + 0x14))
                            ((double)((float)uStack_40 / (float)param_1[8]),piVar1,*param_1,uVar6,1,
                             *(unsigned char *)(param_1 + 9),uStack_40,puVar5);
          if ((int)uVar3 != 1) {
            return uVar3;
          }
          iVar4 = (**(int (***)())(*(int *)param_1[7] + 0x2c))();
          if (iVar4 != 1) {
            return uVar3;
          }
          param_1[1] = *param_1;
          if (*puVar5 == 0) {
            return 1;
          }
        }
        else {
          uVar2 = param_1[4];
          trapWord(6,(unsigned __int64)uVar2,0);
          uStack_48 = (__int64)(int)((param_3 & 0xffffffff) / (unsigned __int64)uVar2) *
                      (__int64)(int)uVar2 & 0xffffffff;
          uVar3 = (**(int (***)())(*piVar1 + 0x14))
                            ((double)((float)uStack_48 / (float)param_1[8]),piVar1,param_2);
          if ((int)uVar3 != 1) {
            return uVar3;
          }
          iVar4 = (**(int (***)())(*(int *)param_1[7] + 0x2c))();
          if (iVar4 != 1) {
            return uVar3;
          }
          param_3 = param_3 - uStack_4c;
          param_2 = (unsigned __int64)uStack_4c + param_2;
          *param_4 = *param_4 + uStack_4c;
          if ((unsigned __int64)(unsigned int)param_1[3] <= (param_3 & 0xffffffff)) {
            (**(int (***)())(*(int *)param_1[7] + 0x1c))((int *)param_1[7],auStack_50);
            return 2;
          }
        }
      }
      else {
        if ((param_3 & 0xffffffff) <= uVar6) {
          uVar6 = param_3;
        }
        fn_82A1DDC0(param_2,param_1[1],uVar6);
        param_2 = uVar6 + param_2;
        iVar4 = (int)uVar6;
        param_3 = param_3 - uVar6;
        param_1[1] = param_1[1] + iVar4;
        *param_4 = *param_4 + iVar4;
        *puVar5 = *puVar5 - iVar4;
      }
      if ((param_3 & 0xffffffff) == 0) {
        return 1;
      }
    } while( true );
  }
  return 1;
}

