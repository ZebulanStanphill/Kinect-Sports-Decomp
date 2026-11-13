extern int fn_82B806D8();
extern int fn_82B808B0();
extern int stricmp();
extern int fn_82F6A3F0();
extern int fn_82F6B0C0();


unsigned __int64
fn_82B81B40(unsigned __int64 param_1, __int64 param_2, __int64 param_3, unsigned int *param_4, unsigned int param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned int in_stack_00000054)

{
  int iVar2;
  __int64 lVar1;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;

  unsigned char *in_stack_0000005c;
  char * apcStack_60;

  uVar6 = 0;
  puVar5 = param_4;
  if (param_5 != 0) {
    do {
      iVar2 = fn_82F6B0C0(param_2,*puVar5,(unsigned int)puVar5[1] >> 0x1c);
      if (iVar2 == 0) {
        param_4 = param_4 + uVar6 * 3;
        lVar1 = fn_82F6A3F0((unsigned __int64)((unsigned int)param_4[1] >> 0x1c) + param_2,&apcStack_60,10);
        if (*apcStack_60 != '\0') {
          if ((param_4[1] & 0x1c000) != 0) {
            return 0;
          }
          iVar2 = stricmp(apcStack_60,0xffffffff820d3a94);
          if (iVar2 == 0) {
            uVar4 = 1;
          }
          else {
            iVar2 = stricmp(apcStack_60,0xffffffff820d8938);
            if (iVar2 != 0) {
              return 0;
            }
            uVar4 = 0;
          }
          param_6 = fn_82B808B0(param_1,param_8,uVar4,param_6,param_7,param_3);
        }
        cVar3 = fn_82B806D8(param_1,param_4,lVar1 + param_3,param_2,param_8,in_stack_00000054);
        if (cVar3 == '\0') {
          return 0;
        }
        if (in_stack_0000005c != (unsigned char *)0x0) {
          *in_stack_0000005c = (char)param_6;
        }
        return 1;
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar6 < param_5);
  }
  return 0;
}
