extern int fn_82820EF8();
extern int fn_82824308();
extern int fn_82824338();
extern int fn_82824378();
extern int fn_828243B8();
extern int fn_828243E8();
extern int fn_82826290();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned __int64 fn_828324C0(unsigned __int64 param_1,int param_2,unsigned int param_3,int *param_4)

{
  char cVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iStack0000001c;
  unsigned int uStack00000024;
  
  iVar4 = **(int **)(*(int *)(*param_4 + 8) + 0x388) + param_4[1] * 0x20;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  cVar1 = fn_828243B8(param_2);
  if (cVar1 == '\0') {
    cVar1 = fn_82824378(iStack0000001c);
    if (((cVar1 == '\0') || (uVar2 = (unsigned __int64)*(unsigned int *)(iStack0000001c + 0x1c), uVar2 == 0)) ||
       (*(int *)(iStack0000001c + 0x18) != 0)) {
      cVar1 = fn_828243E8(iStack0000001c);
      iVar3 = iStack0000001c;
      if (cVar1 == '\0') {
        cVar1 = fn_82824308();
        if ((cVar1 == '\0') && (cVar1 = fn_82824338(iVar3), cVar1 == '\0')) {
          return 1;
        }
        if ((1 < *(unsigned int *)(iVar3 + 0x10)) && (uVar5 = 0, param_4[3] != 0)) {
          do {
            fn_82820EF8((__int64)(int)uVar5 * (__int64)*(int *)(iVar4 + 0x10) +
                         (unsigned __int64)uStack00000024,*(unsigned int *)(iVar3 + 0x10));
            uVar5 = uVar5 + 1;
          } while (uVar5 < (unsigned int)param_4[3]);
        }
      }
      else if (*(int *)(iStack0000001c + 0x14) == 0) {
        fn_82826290(param_1,&stack0x0000001c,&stack0x00000024,1);
        fn_82820EF8(uStack00000024,*(unsigned int *)(iStack0000001c + 0x10));
      }
    }
    else if (1 < uVar2) {
      uVar5 = 0;
      uVar2 = *(unsigned int *)(iStack0000001c + 0x10) / uVar2;
      iVar3 = iStack0000001c;
      if (param_4[3] != 0) {
        do {
          uVar6 = 0;
          if (uVar2 != 0) {
            do {
              fn_82820EF8((__int64)*(int *)(iVar3 + 0x1c) * (__int64)(int)uVar6 +
                           (__int64)(int)uVar5 * (__int64)*(int *)(iVar4 + 0x10) +
                           (unsigned __int64)uStack00000024);
              uVar6 = uVar6 + 1;
              iVar3 = iStack0000001c;
            } while (uVar6 < uVar2);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (unsigned int)param_4[3]);
      }
    }
  }
  else {
    uVar5 = 0;
    if (param_4[3] != 0) {
      do {
        fn_82820EF8((__int64)(int)uVar5 * (__int64)*(int *)(iVar4 + 0x10) +
                     (unsigned __int64)uStack00000024,*(unsigned int *)(iStack0000001c + 0x10));
        uVar5 = uVar5 + 1;
      } while (uVar5 < (unsigned int)param_4[3]);
    }
  }
  return 0;
}

