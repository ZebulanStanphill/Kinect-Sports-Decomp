typedef unsigned char bool;
#define true 1
extern char cRam8320a3f8;
extern int fn_82812268();
extern int fn_82812848();
extern int fn_828128F8();
extern int fn_828133A8();
extern int fn_828135A0();
extern int fn_82813AE0();
extern int fn_82813ED8();
extern int fn_82A1E300();
extern int iRam8320a3f0;
extern unsigned int lbl_8320A3FC;
extern unsigned int lbl_8320A420;
extern unsigned int uRam8320a3f4;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82812E18(char param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  unsigned __int64 uVar4;
  char in_RESERVE;
  unsigned char bVar5;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  unsigned int *apuStack_48 [2];
  unsigned char *puStack_40;
  unsigned int *puStack_3c;
  
  cVar3 = fn_82812268(0xffffffff8320a428);
  if ((cVar3 != '\0') && (iRam8320a3f0 == 2)) {
    iRam8320a3f0 = 3;
    do {
      cVar3 = fn_82812848();
      bVar2 = cVar3 == '\0';
    } while (!bVar2);
    do {
      uVar4 = (unsigned __int64)uRam8320a3f4;
      if (uRam8320a3f4 != 1) {
        if (in_RESERVE != '\0') {
          uRam8320a3f4 = storeWordConditionalIndexed(uVar4,0,0xffffffff8320a3f4);
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uRam8320a3f4 = storeWordConditionalIndexed(0,0,0xffffffff8320a3f4);
        bVar2 = true;
      }
    } while (!bVar2);
LAB_82812eec:
    if ((int)uVar4 != 1) {
      cVar3 = fn_828128F8();
      bVar5 = (cVar3 == '\0') << 1;
      if (cVar3 == '\0') {
        fn_82A1E300();
      }
      do {
        uVar4 = (unsigned __int64)uRam8320a3f4;
        if (uRam8320a3f4 != 1) {
          if (in_RESERVE != '\0') {
            uRam8320a3f4 = storeWordConditionalIndexed(uVar4,0,0xffffffff8320a3f4);
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uRam8320a3f4 = storeWordConditionalIndexed(0,0,0xffffffff8320a3f4);
          bVar5 = 2;
        }
      } while (!(bool)(bVar5 >> 1 & 1));
      goto LAB_82812eec;
    }
    iRam8320a3f0 = 0;
    if ((param_1 != '\0') || (cRam8320a3f8 != '\0')) {
      fn_828133A8(0xffffffff8320a3fc);
      puStack_40 = &lbl_8320A3FC;
      puStack_3c = &lbl_8320A420;
      for (iVar1 = lbl_8320A420; iVar1 != 0; iVar1 = *(int *)(iVar1 + 200)) {
        while (cVar3 = fn_82813AE0(iVar1 + 8,&puStack_50), cVar3 != '\0') {
          if (*(char *)(puStack_50 + 5) != '\0') {
            (**(int (***)())*puStack_50)(puStack_50,1);
          }
        }
        while (cVar3 = fn_82813AE0(iVar1 + 0x48,&puStack_4c), cVar3 != '\0') {
          if (*(char *)(puStack_4c + 5) != '\0') {
            (**(int (***)())*puStack_4c)(puStack_4c,1);
          }
        }
        while (cVar3 = fn_82813AE0(iVar1 + 0x88,apuStack_48), cVar3 != '\0') {
          *(unsigned char *)((int)apuStack_48[0] + 0x15) = 0;
          if (*(char *)(apuStack_48[0] + 5) != '\0') {
            (**(int (***)())*apuStack_48[0])(apuStack_48[0],1);
          }
        }
        fn_82813ED8(iVar1 + 8);
        fn_82813ED8(iVar1 + 0x48);
        fn_82813ED8(iVar1 + 0x88);
      }
      cRam8320a3f8 = '\0';
      fn_828135A0(&puStack_40);
    }
  }
  return;
}

