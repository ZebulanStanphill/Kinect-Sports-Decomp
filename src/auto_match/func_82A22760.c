#define true 1
extern unsigned int *auStack_40;
extern int fn_82A1E228();
extern unsigned int lbl_8315D2F0;
extern unsigned int lbl_83219B94;
extern unsigned int uRam83219cc4;
extern unsigned int uRam83219cc8;


__int64 fn_82A22760(__int64 param_1,__int64 *param_2,unsigned char param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned __int64 auStack_40 [8];
  
  lVar7 = 0;
  fn_82A1E228(auStack_40);
  uVar3 = lbl_8315D2F0 & 0xffffffff;
  iVar4 = lbl_83219B94;
  if (param_4 == 0) {
    puVar6 = *(unsigned int **)(lbl_83219B94 + 0x30);
  }
  else {
    puVar6 = *(unsigned int **)(lbl_83219B94 + 0x2c);
  }
  do {
    if (puVar6 == (unsigned int *)(iVar4 + 0x2c)) {
      return lVar7;
    }
    uVar1 = puVar6[7];
    if (((((uVar1 & 0x80) == 0) && ((uVar1 & 0x40) != 0)) && ((uVar1 & 1) == 0)) &&
       (((uVar1 & 4) == 0 && (param_3 <= *(unsigned char *)(puVar6 + 6))))) {
      if ((param_5 != 0) ||
         ((0x13 < *(unsigned char *)(puVar6 + 6) &&
          (trapWord(6,(unsigned __int64)uRam83219cc8,0),
          (unsigned __int64)(unsigned int)puVar6[2] / (unsigned __int64)uRam83219cc8 + (unsigned __int64)(unsigned int)puVar6[4] +
          (unsigned __int64)uRam83219cc4 <= (auStack_40[0] / 10000000 & 0xffffffff) - uVar3)))) {
        uVar2 = puVar6[2];
        lVar7 = lVar7 + 1;
        puVar6[7] = uVar1 | 1;
        lVar5 = *param_2;
        *param_2 = (unsigned __int64)uVar2 + lVar5;
        iVar4 = lbl_83219B94;
        if (param_1 <= (__int64)((unsigned __int64)uVar2 + lVar5)) {
          return lVar7;
        }
      }
    }
    else {
      puVar6[7] = uVar1 & 0xfffffffb;
      iVar4 = lbl_83219B94;
    }
    if (param_4 == 0) {
      puVar6 = (unsigned int *)puVar6[1];
    }
    else {
      puVar6 = (unsigned int *)*puVar6;
    }
  } while( true );
}

