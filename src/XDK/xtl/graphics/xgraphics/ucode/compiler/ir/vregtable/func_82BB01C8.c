typedef unsigned char bool;
#define true 1
#define false 0
#define _iStack00000018 ((*(unsigned __int64*)&iStack00000018))
extern int fn_82AB15D0();
extern int fn_82BC0088();
extern unsigned int iStack00000018;


unsigned __int64 fn_82BB01C8(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iStack00000018;
  
  uVar4 = 0;
  _iStack00000018 = param_2;
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = 0;
    if (*(int *)(param_1 + 4) == 0) {
      piVar2 = (int *)fn_82BC0088(param_1,0);
      goto LAB_82bb0210;
    }
    do {
      piVar2 = (int *)(*(int *)(param_1 + 8) + iVar3);
LAB_82bb0210:
      if ((*(int *)*piVar2 != iStack00000018) ||
         (bVar1 = true, (unsigned __int64)(unsigned int)((int *)*piVar2)[1] != (_iStack00000018 & 0xffffffff))) {
        bVar1 = false;
      }
      if (bVar1) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 4));
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820dfb20,0x23c);
  return (unsigned __int64)*(unsigned int *)(param_1 + 4);
}

