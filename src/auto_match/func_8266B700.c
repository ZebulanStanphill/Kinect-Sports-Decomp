extern unsigned int *auStack_160;
extern unsigned int *auStack_20;
extern unsigned int *auStack_270;
extern int fn_82662C98();
extern int fn_8266BFE8();
extern int fn_8266C020();
extern int fn_8266C080();
extern int fn_8266C340();
extern int fn_82A1F4F8();
extern int fn_82A2A438();
extern int fn_82F69B70();
extern int fn_82F92208();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack_16c;
extern unsigned int uStack00000014;
extern unsigned int uStack_14;
extern unsigned int uStack_168;
extern unsigned int uStack_18;


unsigned int fn_8266B700(unsigned int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned int uStack00000014;
  int iStack0000001c;
  int iStack00000024;
  unsigned char auStack_270 [260];
  int iStack_16c;
  unsigned int uStack_168;
  unsigned char auStack_160 [288];
  unsigned char auStack_20 [8];
  struct { unsigned int first; unsigned int second; } stack_pair_18;

  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  if (param_2 == 0) {
    thunk_FUN_82a2b748(0x57);
  }
  else if (param_3 == 0) {
    thunk_FUN_82a2b748(0x57);
  }
  else {
    iVar1 = fn_82F69B70((unsigned __int64)param_1 + 0xc);
    if (iVar1 == 0) {
      thunk_FUN_82a2b748(0x139f);
    }
    else {
      iVar1 = fn_82F69B70((unsigned __int64)uStack00000014 + 0xc);
      iVar2 = fn_82F69B70(iStack0000001c);
      iVar3 = fn_82F69B70(iStack00000024);
      if (iVar1 + iVar2 + iVar3 + 3U < 0x105) {
        iStack_16c = fn_8266C020(auStack_270,0xffffffff8200289c,
                                       (unsigned __int64)uStack00000014 + 0xc,iStack00000024,iStack0000001c
                                      );
        if (iStack_16c < 1) {
          fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0xe7,0xffffffff82001940);
        }
        if (iStack_16c < 1) {
          thunk_FUN_82a2b748(0x54f);
        }
        else {
          iVar1 = fn_8266BFE8(iStack0000001c);
          if (iVar1 == 0) {
            iVar1 = fn_82A1F4F8(auStack_270);
            if (iVar1 != -1) {
              return 1;
            }
            uStack_168 = 0xffffffff;
          }
          else {
            stack_pair_18.first = fn_82A2A438(auStack_270,auStack_160);
            fn_8266C080(auStack_20,&stack_pair_18.first);
            piVar4 = (int *)fn_82F92208(auStack_20);
            if (*piVar4 != -1) {
              stack_pair_18.second = 1;
              fn_82662C98(auStack_20);
              return stack_pair_18.second;
            }
            fn_82662C98(auStack_20);
          }
          thunk_FUN_82a2b748(0x490);
        }
      }
      else {
        thunk_FUN_82a2b748(0xa1);
      }
    }
  }
  return 0;
}

