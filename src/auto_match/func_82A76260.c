typedef unsigned char bool;
#define true 1
extern int fn_82A3FF60();
extern int fn_82A49BE0();
extern unsigned int lbl_83223448;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82A76260(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  bool bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned short uVar6;
  char in_RESERVE;
  
  uVar2 = (**(int (***)())(*param_1 + 4))();
  if (-1 < (int)uVar2) {
    iVar3 = fn_82A49BE0(param_2);
    param_1[0xb] = iVar3;
    if (iVar3 != 0) {
      trapDoubleWordImmediate(6,param_4 & 0xffffffff,0);
      lVar4 = (__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 0xc) *
              (__int64)
              (int)(((unsigned __int64)*(unsigned int *)(param_2 + 4) * (param_3 & 0xffffffff)) /
                   (param_4 & 0xffffffff));
      param_1[0xd] = (int)lVar4;
      uVar6 = *(unsigned short *)(iVar3 + 0xc);
      if (((uVar6 < 0x10) || ((uVar6 - 1 & uVar6) != 0)) || (uVar6 == 0)) {
        uVar6 = 0x10;
      }
      iVar3 = fn_82A3FF60(0xffffffff83219d50,lVar4,0x20970006,uVar6);
      param_1[0xe] = iVar3;
      bVar1 = iVar3 == 0;
      if (!bVar1) {
        param_1[0xf] = 0;
        trapWord(6,(unsigned __int64)*(unsigned short *)(param_1[0xb] + 0xc),0);
        param_1[0x10] = (unsigned int)param_1[0xd] / (unsigned int)*(unsigned short *)(param_1[0xb] + 0xc);
        do {
          uVar5 = (unsigned __int64)lbl_83223448;
          if (in_RESERVE != '\0') {
            lbl_83223448 = storeWordConditionalIndexed(uVar5 + 1,0,0xffffffff83223448);
            bVar1 = true;
          }
        } while (!bVar1);
        param_1[0xc] = (int)(uVar5 + 1);
        return 0;
      }
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

