typedef unsigned char bool;
#define true 1
extern int fn_82E0B0D0();
extern int fn_82E0B220();
extern int fn_82E0BFD8();
extern int fn_82E0D0A8();


bool fn_82E0D7E8(int self,unsigned __int64 param_2)

{
  int iVar1;
  bool bVar2;
  int lVar3;
  
  iVar1 = fn_82E0B0D0(self,param_2,0);
  if ((iVar1 == 0) && (iVar1 = fn_82E0B220(self,param_2,0), iVar1 == 0)) {
    lVar3 = 0;
    if (0 < *(int *)(*(int *)(self + 0x1c) + 0x14)) {
      do {
        iVar1 = fn_82E0BFD8(self,param_2,lVar3,0);
        if (iVar1 == 1) goto LAB_82e0d884;
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(*(int *)(self + 0x1c) + 0x14));
    }
    iVar1 = fn_82E0D0A8(self);
    bVar2 = iVar1 == 1;
  }
  else {
LAB_82e0d884:
    bVar2 = true;
  }
  return bVar2;
}

