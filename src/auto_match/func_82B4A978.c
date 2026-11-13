typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82B467D8();
extern int fn_82B46A70();
extern int fn_82B4A328();
extern int fn_82B4A7C0();


void fn_82B4A978(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned int *param_7)

{
  bool bVar1;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  if ((param_4 & 0xffffffff) == 0) goto LAB_82b4aa68;
  uVar5 = param_4 + 1;
  if (uVar5 == 0) {
LAB_82b4a9c0:
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (uVar5 != (uVar5 & ~param_4)) goto LAB_82b4a9c0;
  }
  if (bVar1) {
    lVar6 = 0x20 - LZCOUNT((int)param_4);
    iVar3 = fn_82B4A7C0(param_1,0,param_3 + 0x260,1,0xc,1,lVar6);
    iVar3 = *(int *)(iVar3 + 0x18);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0xb)) {
      uVar4 = fn_82B4A328(param_1,(param_5 & 0xffffffff) >> 4,param_5 & 0xf);
      *(unsigned int *)(iVar3 + 0x3c) = uVar4;
      uVar2 = fn_82B46A70(param_1,param_3,param_3 + 0x260,lVar6);
      uVar4 = fn_82B467D8(param_1,uVar2,*param_7,0xffffffff8202df2c);
      *param_7 = uVar4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
LAB_82b4aa68:
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0xdac,param_2);
}

