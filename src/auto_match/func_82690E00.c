#define true 1
extern int fn_82690288();
extern int fn_82690350();
extern int fn_826905F8();
extern int fn_82690708();


unsigned __int64 fn_82690E00(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  char cVar3;
  unsigned __int64 uVar2;
  __int64 lVar4;
  unsigned int uVar5;
  int iVar6;
  
  if ((param_2 & 0xffffffff) < 0x41) {
    if ((param_2 & 0xffffffff) < 0x21) {
      uVar1 = fn_82690350(param_1,param_2 - 1,param_2,param_3,param_4);
      if ((uVar1 & 0xffffffff) == 0) {
        lVar4 = 0;
        goto LAB_82690e68;
      }
      uVar5 = (unsigned int)*(unsigned short *)((int)uVar1 + 0xc);
    }
    else {
      lVar4 = param_2 - 0x21;
LAB_82690e68:
      uVar1 = fn_82690350(param_1 + 0x84,lVar4,param_2,param_3,param_4);
      if ((uVar1 & 0xffffffff) == 0) goto LAB_82690e8c;
      uVar5 = *(unsigned int *)((int)uVar1 + 0x10);
    }
    iVar6 = *(int *)(param_1 + 0x18c) - uVar5;
LAB_82690e54:
    *(int *)(param_1 + 0x18c) = iVar6;
  }
  else {
LAB_82690e8c:
    uVar1 = param_2;
    while( true ) {
      uVar2 = fn_82690708(param_1 + 0x108,uVar1);
      uVar1 = uVar2;
      if (uVar2 == 0) break;
      do {
        cVar3 = fn_82690288(uVar1,param_2,param_3,param_4);
        if (cVar3 != '\0') {
          fn_826905F8(param_1 + 0x108,uVar1);
          iVar6 = *(int *)(param_1 + 0x18c) - *(int *)((int)uVar1 + 0x10);
          goto LAB_82690e54;
        }
        uVar5 = *(unsigned int *)((int)uVar1 + 4);
        uVar1 = (unsigned __int64)uVar5;
      } while (uVar1 != (uVar2 & 0xffffffff));
      uVar1 = (unsigned __int64)*(unsigned int *)(uVar5 + 0x10) + 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

