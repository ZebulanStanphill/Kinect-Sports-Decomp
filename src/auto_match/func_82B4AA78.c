typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82B4A328();
extern int fn_82B4A7C0();


void fn_82B4AA78(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  if ((param_4 & 0xffffffff) == 0) goto LAB_82b4ab34;
  uVar4 = param_4 + 1;
  if (uVar4 == 0) {
LAB_82b4aab8:
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (uVar4 != (uVar4 & ~param_4)) goto LAB_82b4aab8;
  }
  if (bVar1) {
    iVar2 = fn_82B4A7C0(param_1,0,param_3 + 0x270,1,0xc,1,0x20 - LZCOUNT((int)param_4));
    iVar2 = *(int *)(iVar2 + 0x18);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0xb)) {
      *(unsigned int *)(iVar2 + 0x2c) = *(unsigned int *)(iVar2 + 0x2c) | 0x20;
      uVar3 = fn_82B4A328(param_1,param_5,param_6);
      *(unsigned int *)(iVar2 + 0x3c) = uVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
LAB_82b4ab34:
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0xdac,param_2);
}

