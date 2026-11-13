extern int fn_82C27A68();
extern int fn_82C28FC8();
extern int fn_82C29268();
extern int fn_82C297F8();
extern int fn_82C29B90();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82C29D30(unsigned __int64 param_1,__int64 *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iStack_40;
  int iStack_3c;
  int aiStack_38 [3];
  
  iStack_40 = 0;
  aiStack_38[0] = 0;
  aiStack_38[2] = 0;
  iStack_3c = 0;
  aiStack_38[1] = 0;
  uVar2 = fn_82C27A68(param_1,param_2,&iStack_40);
  if (-1 < (int)uVar2) {
    if (iStack_40 == 0) {
      uVar2 = 0xffffffff80500009;
    }
    else {
      if (*(int *)((int)param_2 + 0x1c) != 0) {
        do {
          uVar2 = fn_82C29B90(param_1,param_2,aiStack_38 + 2,aiStack_38 + 1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
        } while ((int)uVar2 != 0x500001);
      }
      uVar2 = fn_82C297F8(param_1,param_2[2],aiStack_38,&iStack_3c);
      if (-1 < (int)uVar2) {
        if (iStack_3c == 0) {
          uVar2 = 0xffffffff80500008;
        }
        else {
          *(int *)(aiStack_38[0] + 4) = *(int *)(aiStack_38[0] + 4) + -1;
          uVar1 = *(unsigned int *)(param_2 + 3);
          lVar3 = *param_2;
          uVar2 = fn_82C28FC8(param_1,param_2);
          if (-1 < (int)uVar2) {
            uVar2 = fn_82C29268(param_1,(unsigned __int64)uVar1 + lVar3);
          }
        }
      }
    }
  }
  return uVar2;
}

