extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_90;
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_8256DE08();
extern int fn_827D96A0();
extern int fn_827D98C0();
extern int iRam00000000;


/* WARNING: Removing unreachable block (ram,0x827d6d74) */

void fn_827D6C60(int param_1,unsigned __int64 param_2,int param_3,unsigned int *param_4,unsigned __int64 param_5
                  ,char param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  unsigned char auStack_90 [4];
  unsigned char auStack_8c [4];
  unsigned char auStack_88 [8];
  unsigned char auStack_80 [128];
  
  RtlEnterCriticalSection(param_1 + 0x6c);
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 3;
  if (0 < iVar1) {
    lVar4 = 0;
    do {
      fn_82517A50(auStack_88,lVar4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x44));
      if ((param_6 == '\0') || (iVar2 = (**(int (***)())(iRam00000000 + 0x40))(0), iVar2 != 0)) {
        if (param_3 == -1) {
          fn_827D96A0(param_2);
          fn_82517978(auStack_80,*param_4,param_4[1],0);
          (**(int (***)())(iRam00000000 + 0x14))(0,auStack_8c,0,auStack_80,auStack_90,param_4,param_5);
        }
        else {
          iVar2 = fn_827D98C0(0);
          if (iVar2 == param_3) {
            fn_827D96A0(param_2);
            fn_8256DE08(auStack_80,0);
            (**(int (***)())(iRam00000000 + 0x14))(0,auStack_8c,0,auStack_80,auStack_90,param_4,param_5)
            ;
            break;
          }
        }
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < iVar1);
  }
  RtlLeaveCriticalSection(param_1 + 0x6c);
  return;
}

