typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_828A0B28();
extern int fn_828A1C38();
extern int fn_828ACC40();
extern int fn_828AD110();


__int64 fn_828AD188(int param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  __int64 lVar4;
  int *piVar5;
  int aiStack_30 [1];
  
  if ((*(int *)(param_1 + 0xa0) != 0) || (bVar1 = true, *(int *)(param_1 + 0x8c) != 0)) {
    bVar1 = false;
  }
  if (bVar1) {
    cVar3 = fn_828A0B28(param_1);
    bVar1 = true;
    if (cVar3 != '\x01') goto LAB_828ad1dc;
  }
  else {
LAB_828ad1dc:
    bVar1 = false;
  }
  if (bVar1) {
    cVar3 = fn_828ACC40(param_1);
    lVar4 = 1;
    if (cVar3 != '\0') goto LAB_828ad208;
  }
  lVar4 = 0;
LAB_828ad208:
  if (lVar4 != 0) {
    fn_828AD110(aiStack_30,param_1 + 0x2cc);
    iVar2 = aiStack_30[0];
    piVar5 = (int *)(param_1 + 0x8c);
    if (piVar5 != aiStack_30) {
      aiStack_30[0] = 0;
      if (iVar2 != *piVar5) {
        fn_828A1C38(piVar5);
        *piVar5 = iVar2;
      }
    }
    fn_828A1C38(aiStack_30);
    *(unsigned int *)(param_1 + 0xa0) = 2;
  }
  return lVar4;
}

