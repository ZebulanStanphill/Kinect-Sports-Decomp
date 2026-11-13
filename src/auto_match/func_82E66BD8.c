typedef unsigned char bool;
#define true 1
extern int fn_82E664E8();
extern int fn_82E667D8();
extern int fn_82EE8830();
extern int fn_82EE8EE0();
extern int fn_82EEACD0();
extern unsigned int lbl_8324017C;
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_82E66BD8(__int64 param_1,unsigned __int64 param_2)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  __int64 lVar5;
  char in_RESERVE;
  
  lVar4 = param_1 + 0x21c;
  lVar5 = 0;
  fn_82E664E8(lVar4);
  puVar3 = (unsigned int *)param_1;
  if (puVar3[0x8d] == 0) {
    lVar5 = fn_82E667D8(param_1);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    do {
      if (in_RESERVE != '\0') {
        lbl_8324017C = storeWordConditionalIndexed((unsigned __int64)lbl_8324017C + 1,0,0xffffffff8324017c)
        ;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  if (puVar3[0x84] == 0) {
    lVar5 = fn_82EEACD0(0xffffffff82eeaa60,2,param_1 + 0x208);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EEACD0(0xffffffff82eeaa60,1,param_1 + 0x20c);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EE8EE0(0xffffffff82ee9680,1,param_1);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EE8830(*puVar3,0xf);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EE8EE0(0xffffffff82eeaa60,0,param_1 + 4);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EE8EE0(0xffffffff82eeaa60,0,param_1 + 0x200);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EE8EE0(0xffffffff82eeaa60,1,param_1 + 8);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    puVar3[0x84] = 1;
  }
  bVar1 = (puVar3[0x86] & 1) == 0;
  if ((!bVar1) && (bVar1 = (param_2 & 1) == 0, bVar1)) {
    puVar3[0x86] = puVar3[0x86] & 0xfffffffe;
  }
  puVar3[0x8d] = puVar3[0x8d] + 1;
LAB_82e66d38:
  sync(1);
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(0,0,lVar4);
      *(unsigned int *)lVar4 = uVar2;
      bVar1 = true;
    }
  } while (!bVar1);
  return lVar5;
}

