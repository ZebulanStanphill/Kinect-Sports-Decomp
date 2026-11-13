typedef unsigned char bool;
#define false 0
extern int fn_83062FE0();
extern int fn_83063800();
extern int fn_83064EB8();
extern int fn_83065C28();
extern int fn_83065E70();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern int fn_83068F30();
extern unsigned int lbl_83068C20;


bool fn_83064FD8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  char cVar6;
  bool bVar7;
  
  *(unsigned int *)(param_1 + 200) = 0;
  *(unsigned int *)(param_1 + 0xc4) = 0;
  lVar5 = fn_83065E70();
  *(int *)(param_1 + 0x2c) = (int)lVar5;
  cVar6 = fn_83062FE0(param_1,param_2,lVar5 + 0x44,param_3);
  if (cVar6 == '\0') {
    fn_83065C28(*(unsigned int *)(param_1 + 0x2c));
    bVar7 = false;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_1 + 0x30);
    if ((iVar1 != 0) && (iVar1 < *(int *)(*(int *)(param_1 + 0x2c) + 0x4c))) {
      uVar2 = *(unsigned int *)(param_1 + 0x14);
      uVar3 = *(unsigned int *)(param_1 + 0x18);
      *(unsigned char **)(param_1 + 0x14) = &lbl_83068C20;
      *(int (***)())(param_1 + 0x18) = fn_83068F30;
      uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x2c) + 0x4c);
      if (iVar1 << 5 < (int)uVar4) {
        *(unsigned int *)(param_1 + 0x20) = ((int)uVar4 >> 4) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 0xf) != 0)
        ;
        if ((param_3 & 0xffffffff) != 0) {
          fn_830677A0(param_3,1,0xffffffff8217e7f8);
        }
        fn_83064EB8(param_1,*(unsigned int *)(param_1 + 0x2c),0,0);
        if ((param_3 & 0xffffffff) != 0) {
          fn_830679A8(param_3);
          fn_830678C8(param_3);
        }
        *(int *)(param_1 + 0x20) = iVar1;
      }
      fn_83064EB8(param_1,*(unsigned int *)(param_1 + 0x2c),param_3,0xffffffff8217e80c);
      *(unsigned int *)(param_1 + 0x14) = uVar2;
      *(unsigned int *)(param_1 + 0x18) = uVar3;
    }
    fn_83064EB8(param_1,*(unsigned int *)(param_1 + 0x2c),param_3,0xffffffff8217e828);
    fn_83063800(param_1,param_1 + 0xc4);
    bVar7 = *(int *)(param_1 + 0x2c) != 0;
  }
  return bVar7;
}

