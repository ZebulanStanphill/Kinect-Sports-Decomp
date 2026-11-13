extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern int fn_8227C270();
extern int fn_82F68CC0();


void fn_8227D108(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  char cVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int auStack_130 [4];
  unsigned char auStack_120 [288];
  
  if (((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) &&
     (uVar6 = param_1 + 0xdc, uVar3 = param_1, auStack_130[0] = param_3,
     (uVar6 & 0xffffffff) != (param_2 & 0xffffffff))) {
    do {
      fn_82F68CC0(auStack_120,uVar6,0xdc);
      cVar2 = fn_8227C270(auStack_130,auStack_120,param_1);
      uVar1 = uVar6;
      uVar5 = uVar3;
      if (cVar2 == '\0') {
        while (cVar2 = fn_8227C270(auStack_130,auStack_120,uVar5), cVar2 != '\0') {
          fn_82F68CC0(uVar1,uVar5,0xdc);
          uVar1 = uVar5;
          uVar5 = uVar5 - 0xdc;
        }
      }
      else {
        uVar1 = param_1;
        uVar5 = uVar6;
        if ((param_1 & 0xffffffff) != (uVar6 & 0xffffffff)) {
          do {
            uVar4 = uVar5 - 0xdc;
            fn_82F68CC0(uVar5,uVar4,0xdc);
            uVar5 = uVar4;
          } while ((uVar4 & 0xffffffff) != (param_1 & 0xffffffff));
        }
      }
      fn_82F68CC0(uVar1,auStack_120,0xdc);
      uVar6 = uVar6 + 0xdc;
      uVar3 = uVar3 + 0xdc;
    } while ((uVar6 & 0xffffffff) != (param_2 & 0xffffffff));
  }
  return;
}

