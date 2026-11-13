extern char cRam8323fe6a;
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82E212B0();
extern int fn_82F64840();
extern int fn_82F64CE0();
extern int fn_82F6FE60();
extern int fn_82F6FEB8();
extern unsigned int uRam8323fe68;


unsigned __int64 fn_82E21488(unsigned __int64 param_1,unsigned __int64 param_2)

{
  short sVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  unsigned __int64 uVar9;
  
  if ((param_2 & 0xffffffff) != 0) {
    uVar2 = fn_82F64CE0(param_2);
    iVar8 = 0;
    if (cRam8323fe6a == '\0') {
      do {
        iVar6 = iVar8 * 2;
        cVar7 = (char)iVar8 + '\x01';
        sVar1 = (short)iVar8;
        iVar8 = (int)cVar7;
        *(short *)(iVar6 + -0x7cdc01e0) = 0x1f - sVar1;
      } while (cVar7 < ' ');
      fn_82F6FEB8(0xffffffff8323fe20,0x25,0xffffffff8214bc5c,5);
      uRam8323fe68 = 0;
      cRam8323fe6a = '\x01';
    }
    uVar3 = fn_82F6FE60(param_2,0xffffffff8323fe20);
    if ((uVar3 & 0xffffffff) == (uVar2 & 0xffffffff)) {
      uVar4 = fn_82E212B0(param_1,param_2);
      return uVar4;
    }
    uVar9 = uVar2 + 1;
    lVar5 = (uVar9 & 0x7fffffff) << 1;
    if (0x7fffffff < (uVar9 & 0xffffffff)) {
      lVar5 = -1;
    }
    iVar8 = fn_8265C9E0(lVar5);
    iVar6 = fn_82F64840(iVar8,uVar9,param_2,uVar2);
    if (iVar6 == 0) {
      *(unsigned short *)((int)((uVar2 & 0xffffffff) << 1) + iVar8) = 0;
      while ((uVar3 & 0xffffffff) < (uVar2 & 0xffffffff)) {
        *(unsigned short *)((int)((uVar3 & 0xffffffff) << 1) + iVar8) = 0x2e;
        uVar3 = fn_82F6FE60(iVar8,0xffffffff8323fe20);
      }
      fn_82E212B0(param_1,iVar8);
      fn_8265CA20(iVar8);
      return 1;
    }
  }
  return 0;
}

