extern unsigned int *auStack_74;
extern int fn_82CC4918();
extern int fn_830EF918();
extern int fn_830EF9E8();
extern unsigned int lbl_83232460;
extern unsigned int lbl_83232464;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_830EFAB8(int param_1,unsigned int param_2,int param_3,__int64 param_4,__int64 param_5,
                  __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  short sVar6;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int in_stack_00000054;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int auStack_74 [29];
  
  uVar9 = *(unsigned int *)(param_1 + 0x124);
  uVar1 = *(unsigned int *)(((unsigned int)*(unsigned short *)(param_1 + 0x32) * param_3 + param_2) * 8 +
                   *(int *)(param_1 + 0x15c));
  param_2 = param_3 << 0x10 | param_2;
  iVar3 = param_2 * 0x40;
  sVar6 = (short)uVar1;
  uStack_7c = (int)uVar1 >> 0x10;
  uStack_80 = (unsigned int)sVar6;
  uStack_78 = ((int)(((int)sVar6 & 3U) + 1) >> 2) + (int)sVar6 >> 1;
  uVar8 = (unsigned __int64)(int)uStack_78;
  uVar7 = (int)(((int)((uStack_7c & 3) + 1) >> 2) + uStack_7c) >> 1;
  auStack_74[0] = uVar7;
  if (((iVar3 + (uVar1 & 0x8000) * -2 + uVar1 + 0x730073 |
       (*(int *)(param_1 + 0x11c) + (param_2 & 0x3ffffff) * -0x40) - uVar1) & 0x80008000) != 0) {
    fn_830EF918(&uStack_80,&uStack_7c,iVar3);
  }
  uVar1 = uStack_7c;
  uVar2 = uStack_80;
  lVar4 = (__int64)(iVar3 >> 1);
  uVar5 = ((unsigned __int64)uVar7 & 0xffff) << 0x10 | uVar8 & 0xffffffff0000ffff;
  if (((uVar5 + (uVar8 & 0x8000) * -2 + lVar4 + 0x3b003b | (uVar9 - uVar5) - lVar4) & 0x80008000) !=
      0) {
    fn_830EF9E8(&uStack_78,auStack_74,lVar4,(unsigned __int64)uVar9);
    uVar8 = (unsigned __int64)uStack_78;
    uVar7 = auStack_74[0];
  }
  uVar5 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  param_4 = (__int64)((int)uVar1 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a) +
            (__int64)((int)uVar2 >> 2) + param_4;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 3) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 7) != 0)) * 8) {
    dataCacheBlockTouch(param_4 + 0x80);
    dataCacheBlockTouch(uVar5 + 0x80 + param_4);
    dataCacheBlockTouch((uVar5 + 0x40) * 2 + param_4);
    dataCacheBlockTouch(uVar5 * 3 + 0x80 + param_4);
    dataCacheBlockTouch((uVar5 + 0x20) * 4 + param_4);
    dataCacheBlockTouch(uVar5 * 5 + 0x80 + param_4);
    dataCacheBlockTouch(uVar5 * 6 + 0x80 + param_4);
    dataCacheBlockTouch(uVar5 * 7 + 0x80 + param_4);
    lbl_83232460 = 0;
  }
  dataCacheBlockTouch((uVar5 + 8) * 8 + param_4);
  dataCacheBlockTouch(uVar5 * 9 + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 10 + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 0xb + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 0xc + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 0xd + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 0xe + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 0xf + 0x40 + param_4);
  uVar1 = uVar1 & 3;
  lbl_83232460 = lbl_83232460 + 1;
  iVar3 = (**(int (***)())(((uVar2 & 3) * 4 + uVar1 + 0xf1) * 4 + param_1))
                    (param_4,uVar5,param_7,uVar5,param_1,uVar2 & 3,uVar1,1);
  if (iVar3 != 0) {
    fn_82CC4918(param_4,uVar5,param_7,uVar5,uVar2 & 3,uVar1,*(unsigned char *)(param_1 + 0x23),1)
    ;
  }
  uVar5 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  uVar9 = (unsigned int)uVar8;
  lVar4 = (__int64)((int)uVar7 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) +
          (__int64)((int)uVar9 >> 2);
  param_5 = lVar4 + param_5;
  lVar4 = lVar4 + param_6;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(param_5 + 0x80);
    dataCacheBlockTouch(uVar5 + 0x80 + param_5);
    dataCacheBlockTouch((uVar5 + 0x40) * 2 + param_5);
    dataCacheBlockTouch(uVar5 * 3 + 0x80 + param_5);
    dataCacheBlockTouch((uVar5 + 0x20) * 4 + param_5);
    dataCacheBlockTouch(uVar5 * 5 + 0x80 + param_5);
    dataCacheBlockTouch(uVar5 * 6 + 0x80 + param_5);
    dataCacheBlockTouch(uVar5 * 7 + 0x80 + param_5);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar7 = uVar7 & 3;
  (**(int (***)())(((uVar9 & 3) * 4 + uVar7 + 0x101) * 4 + param_1))
            (param_5,uVar5,param_8,uVar5,uVar8 & 3,uVar7,*(unsigned char *)(param_1 + 0x23),1);
  uVar5 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(lVar4 + 0x80);
    dataCacheBlockTouch(uVar5 + 0x80 + lVar4);
    dataCacheBlockTouch((uVar5 + 0x40) * 2 + lVar4);
    dataCacheBlockTouch(uVar5 * 3 + 0x80 + lVar4);
    dataCacheBlockTouch((uVar5 + 0x20) * 4 + lVar4);
    dataCacheBlockTouch(uVar5 * 5 + 0x80 + lVar4);
    dataCacheBlockTouch(uVar5 * 6 + 0x80 + lVar4);
    dataCacheBlockTouch(uVar5 * 7 + 0x80 + lVar4);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(int (***)())(((uVar9 & 3) * 4 + uVar7 + 0x101) * 4 + param_1))
            (lVar4,uVar5,in_stack_00000054,uVar5,uVar8 & 3,uVar7,*(unsigned char *)(param_1 + 0x23),1);
  return;
}

