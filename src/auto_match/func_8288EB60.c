extern unsigned int *auStack_1c;
extern int fn_8288B2D8();
extern int fn_8288CD40();
extern int fn_828A12E8();
extern unsigned int uStack_20;


void fn_8288EB60(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  __int64 lVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uStack_20;
  unsigned char auStack_1c [4];
  
  uStack_20 = param_3;
  lVar1 = fn_828A12E8(param_2);
  piVar2 = (int *)fn_8288CD40(auStack_1c,lVar1 + 0x94,&uStack_20);
  uVar3 = fn_8288B2D8(*(unsigned int *)(*piVar2 + 0x40),param_4);
  *param_5 = uVar3;
  return;
}

