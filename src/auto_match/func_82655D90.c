extern unsigned int *auStack_8e0;
extern unsigned int *auStack_904;
extern unsigned int *auStack_92c;
extern int fn_82643A48();
extern int fn_82645110();
extern int fn_82655748();
extern int fn_82655C68();
extern int fn_82F68CC0();
extern int fn_8314282C();
extern int fn_8314283C();
extern unsigned int uStack_8f8;
extern unsigned int uStack_908;
extern unsigned int uStack_90c;
extern unsigned int uStack_910;
extern unsigned int uStack_914;
extern unsigned int uStack_918;
extern unsigned int uStack_91c;
extern unsigned int uStack_920;


void fn_82655D90(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int auStack_92c [3];
  unsigned int uStack_920;
  unsigned int uStack_91c;
  unsigned int uStack_918;
  unsigned int uStack_914;
  unsigned int uStack_910;
  unsigned int uStack_90c;
  unsigned int uStack_908;
  unsigned char auStack_904 [12];
  unsigned int uStack_8f8;
  unsigned char auStack_8e0 [2272];
  
  fn_82655C68();
  uVar4 = (unsigned __int64)uStack_920;
  uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5508);
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5500);
  uVar6 = (unsigned __int64)uStack_910;
  uVar5 = uStack_918 - uVar4;
  if (uVar7 != uVar3) {
    if ((uVar7 <= uVar6) && (uVar6 <= uVar3)) {
      uVar6 = uVar7;
    }
    if ((uVar7 <= (uVar5 & 0xffffffff)) && ((uVar5 & 0xffffffff) <= uVar3)) {
      uVar4 = (uVar3 - uVar6 & 0xffffffff) >> 1;
      uVar5 = uVar7;
    }
  }
  uVar8 = (param_2 & 0xffff) << 0x10 | param_3 & 0xffffffff0000ffff;
  uVar3 = (uVar6 & 0xffff) << 0x10;
  auStack_92c[0] = uStack_908;
  uVar6 = ((uVar7 - uVar6 & 0xffffffff) >> 1 & 0xffff) << 0x10 |
          ((unsigned __int64)*(unsigned int *)(param_1 + 0x5504) - (unsigned __int64)uStack_90c & 0xffffffff) >> 1 &
          0xffff;
  fn_82655748(param_1,(uVar4 & 0xffff) << 0x10 | (unsigned __int64)uStack_91c & 0xffffffff0000ffff,
                (uVar5 & 0xffff) << 0x10 |
                (unsigned __int64)uStack_914 - (unsigned __int64)uStack_91c & 0xffffffff0000ffff,uVar6,
                (unsigned __int64)uStack_90c & 0xffff | uVar3,uVar8,auStack_92c,auStack_904);
  fn_8314283C(auStack_8e0,800,0xffffffff80000000);
  lVar1 = fn_82643A48(param_1,0xdc);
  iVar2 = fn_8314282C(((unsigned __int64)uStack_920 & 0xffff) << 0x10 |
                          (unsigned __int64)uStack_91c & 0xffffffff0000ffff,
                          ((unsigned __int64)uStack_918 - (unsigned __int64)uStack_920 & 0xffff) << 0x10 |
                          (unsigned __int64)uStack_914 - (unsigned __int64)uStack_91c & 0xffffffff0000ffff,uVar6,
                          (unsigned __int64)uStack_90c & 0xffff | uVar3,uVar8,auStack_92c[0],auStack_904,
                          uStack_8f8);
  fn_82F68CC0(lVar1 + 4,auStack_8e0,iVar2 * 4);
  *(int *)(param_1 + 0x30) = iVar2 * 4 + (int)lVar1;
  fn_82645110(param_1);
  return;
}

