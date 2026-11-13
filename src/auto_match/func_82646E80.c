#define TBLr 0
extern float lbl_821954C8;


void fn_82646E80(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int (**pcVar4)();
  unsigned __int64 uVar5;
  int in_r13;
  
  if (param_1[1] != 0) {
    uVar5 = TBLr;
    uVar1 = param_1[4];
    uVar5 = (uVar5 & 0xffffffff) - (unsigned __int64)(unsigned int)param_1[5];
    uVar2 = *(unsigned int *)(*(int *)(in_r13 + 0x100) + 0x58);
    iVar3 = *param_1;
    if (param_1[1] == 3) {
      *(unsigned __int64 *)(iVar3 + 0x5540) = (uVar5 & 0xffffffff) + *(__int64 *)(iVar3 + 0x5540);
    }
    else {
      *(unsigned __int64 *)(iVar3 + 0x5538) = (uVar5 & 0xffffffff) + *(__int64 *)(iVar3 + 0x5538);
    }
    pcVar4 = *(int (***)())(*param_1 + 0x354c);
    if (pcVar4 != (int (**)())0x0) {
      (*pcVar4)((double)(*(float *)(*param_1 + 0x5530) * (float)(uVar5 & 0xffffffff) * lbl_821954C8)
                ,0,param_1[1],param_3,(unsigned __int64)uVar2 - (unsigned __int64)uVar1);
    }
  }
  return;
}

