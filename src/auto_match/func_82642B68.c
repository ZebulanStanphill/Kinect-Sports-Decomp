extern int fn_82642048();
extern int fn_826427F8();
extern int fn_82643A48();
extern int fn_8264D6C0();
extern int fn_82F68CC0();


void fn_82642B68(int param_1,__int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  int param_6,unsigned __int64 param_7,int param_8)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar6;
  __int64 lVar7;
  
  iVar2 = (param_8 + 0x70) * 8;
  uVar1 = *(unsigned int *)(*(int *)(iVar2 + param_3) + param_3 + 0x36c);
  uVar3 = uVar1 >> 2;
  iVar4 = fn_82643A48(param_1,uVar3 + 5);
  if (iVar4 != 0) {
    *(unsigned int *)(iVar4 + 4) = 0xc0003b00;
    *(unsigned int *)(iVar4 + 8) = 0x100;
    *(unsigned int *)(iVar4 + 0xc) = (uVar3 + 1) * 0x10000 & 0x3fff0000 | 0xc0002b00;
    *(unsigned int *)(iVar4 + 0x10) = 0;
    *(unsigned int *)(iVar4 + 0x14) = uVar3 & 0x3fff;
    iVar6 = iVar4 + 0x18;
    uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar2 + param_3) + param_3 + 0x368) +
            (unsigned __int64)*(unsigned int *)(param_3 + 0x20);
    lVar7 = (((uVar5 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) + -0x40000000;
    sync(0);
    fn_82F68CC0(iVar6,lVar7,(unsigned __int64)uVar1);
    fn_8264D6C0(lVar7,lVar7 + (unsigned __int64)uVar1,0);
    if (((int)param_2 != 0) && ((*(unsigned char *)(param_6 + 8) & 7) != 7)) {
      fn_826427F8(param_6,iVar6,param_4,param_7);
    }
    *(unsigned char *)(param_1 + 0x2abe) = (param_2 != 0) << 7 | *(unsigned char *)(param_1 + 0x2abe) & 0x7f;
    fn_82642048(param_3,iVar6,param_5,param_1 + 0x31a0,param_8);
    *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(iVar4 + 0x14) + uVar3;
    *(unsigned __int64 *)(param_1 + 0x2ef0) = *(unsigned __int64 *)(param_1 + 0x31a8);
    *(unsigned __int64 *)(param_1 + 0x2ee8) = *(unsigned __int64 *)(param_1 + 0x31a0);
  }
  return;
}

