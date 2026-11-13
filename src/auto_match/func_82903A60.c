#define true 1
extern unsigned int *auStack_40;
extern int fn_828F0170();
extern int fn_82964588();
extern int fn_82964628();
extern int fn_82F65AC0();
extern unsigned int uStack_3c;


unsigned __int64 fn_82903A60(int *param_1)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  unsigned __int64 *puVar7;
  unsigned __int64 uVar6;
  unsigned char auStack_40 [4];
  unsigned int uStack_3c;
  
  puVar4 = *(unsigned __int64 **)(*param_1 + 0x40);
  do {
    if (puVar4 == (unsigned __int64 *)0x0) {
      return 0;
    }
    uVar1 = *(unsigned int *)((int)puVar4 + 4);
    puVar5 = (unsigned __int64 *)0x0;
    puVar7 = (unsigned __int64 *)0x0;
    do {
      iVar3 = fn_82F65AC0(uVar1,*(unsigned int *)((int)puVar4 + 4));
      if (iVar3 != 0) break;
      iVar3 = fn_828F0170(*(unsigned int *)puVar4,0,auStack_40);
      if (-1 < iVar3) {
        if (param_1[4] == uStack_3c) {
          if (puVar5 == (unsigned __int64 *)0x0) {
            puVar5 = puVar4;
          }
        }
        else if (((param_1[4] & 0xffff0000U) == uStack_3c) && (puVar7 == (unsigned __int64 *)0x0)) {
          puVar7 = puVar4;
        }
      }
      puVar4 = *(unsigned __int64 **)(puVar4 + 5);
    } while (puVar4 != (unsigned __int64 *)0x0);
    if ((puVar5 != (unsigned __int64 *)0x0) || (puVar5 = puVar7, puVar7 != (unsigned __int64 *)0x0)) {
      uVar2 = fn_82964588(param_1[2],*(unsigned int *)((int)puVar5 + 4),0xb51,1,4);
      if ((int)uVar2 == -1) {
        return 0xffffffff8007000e;
      }
      uVar6 = 0;
      do {
        puVar5 = puVar5 + 1;
        iVar3 = fn_82964628(*puVar5,param_1[2],uVar2,0,uVar6);
        if (iVar3 == -1) {
          return 0xffffffff8007000e;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < 4);
    }
  } while( true );
}

