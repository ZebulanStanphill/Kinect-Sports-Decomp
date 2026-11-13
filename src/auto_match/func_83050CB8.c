extern int fn_82A1E968();
extern int fn_83050528();
extern int fn_83055CF0();
extern int fn_83055EE8();
extern unsigned int lbl_821AAD20;


char fn_83050CB8(double param_1,int param_2,unsigned int param_3,int param_4,unsigned __int64 param_5,
                  char param_6,char param_7,unsigned __int64 param_8,unsigned int *param_9)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned __int64 uVar4;
  int iVar5;
  
  *param_9 = 0;
  uVar1 = *(unsigned int *)(param_2 + 0x74);
  *(float *)(param_2 + 0x98) = (float)param_1;
  *(int *)(param_2 + 0x90) = param_4;
  *(unsigned int *)(param_2 + 0x94) = 0;
  *(unsigned int *)(param_2 + 0x74) = (param_3 & 1) << 0x1d | uVar1 & 0xdfffffff;
  *(char *)(param_2 + 0x70) = param_7;
  if ((((param_4 == 0) || (param_7 < '\0')) || ('d' < param_7)) || (param_1 < (double)lbl_821AAD20))
  {
    cVar3 = '\x1f';
  }
  else {
    if ((*(unsigned int *)(param_2 + 0x9c) & 0x1e000000) != 0x4000000) {
      uVar2 = *(unsigned int *)(param_2 + 0x6c);
      uVar4 = (unsigned __int64)uVar2;
      trapWord(6,uVar4,0);
      if (param_5 == (__int64)(int)((param_5 & 0xffffffff) / uVar4) * (__int64)(int)uVar2) {
        if (((*(unsigned __int64 *)(param_2 + 0x18) - *(unsigned __int64 *)(param_2 + 0x88) <
              (param_5 & 0xffffffff)) && ((uVar1 & 0x4000000) != 0)) && ((param_3 & 0xff) == 0)) {
          trapWord(6,uVar4,0);
          param_5 = (__int64)
                    (int)(((((*(unsigned __int64 *)(param_2 + 0x18) & 0xffffffff) -
                            (*(unsigned __int64 *)(param_2 + 0x88) & 0xffffffff)) + uVar4) - 1 & 0xffffffff
                          ) / (unsigned __int64)uVar2) * (__int64)(int)uVar2;
        }
        *(int *)(param_2 + 0x68) = (int)param_5;
        if ((param_5 & 0xffffffff) == 0) {
          *param_9 = 0;
          return '\x01';
        }
        fn_82A1E968(param_2 + 0x58);
        iVar5 = param_2 + 0x38;
        if (param_6 != '\0') {
          RtlEnterCriticalSection(iVar5);
          fn_83055CF0(param_2);
          fn_83050528(param_2,2);
          RtlLeaveCriticalSection(iVar5);
          fn_83055EE8(*(unsigned int *)(param_2 + 0x60),param_2);
          uVar1 = *(unsigned int *)(param_2 + 0x9c);
          *param_9 = *(unsigned int *)(param_2 + 0x94);
          return ((uVar1 & 0x1e000000) != 0x2000000) + '\x01';
        }
        RtlEnterCriticalSection(iVar5);
        fn_83050528(param_2,2);
        RtlLeaveCriticalSection(iVar5);
        *param_9 = *(unsigned int *)(param_2 + 0x94);
        return '\x01';
      }
    }
    cVar3 = '\x02';
  }
  return cVar3;
}

