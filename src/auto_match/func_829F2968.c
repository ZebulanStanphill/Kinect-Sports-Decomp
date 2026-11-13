#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack00000030 ((*(unsigned __int64*)&iStack00000030))
#define _uStack00000038 ((*(unsigned __int64*)&uStack00000038))
extern int fn_829F2758();
extern int fn_829F27B8();
extern unsigned int iStack00000030;
extern unsigned int iStack00000034;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_82079F74;
extern unsigned int uStack00000038;
extern unsigned int uStack_68;


void fn_829F2968(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int *piVar5;
  int iStack00000030;
  int iStack00000034;
  unsigned int uStack00000038;
  int iStack_70;
  struct { int first; unsigned int second; } stack_pair_6c;

  
  iStack00000030 = (int)((unsigned __int64)param_4 >> 0x20);
  iVar1 = iStack00000030;
  iStack00000034 = (int)param_4;
  iVar2 = iStack00000034;
  uStack00000038 = (unsigned int)((unsigned __int64)param_5 >> 0x20);
  stack_pair_6c.second = uStack00000038;
  puVar4 = (unsigned int *)(param_1 + 0x5c);
  piVar5 = (int *)&lbl_82079F74;
  _iStack00000030 = param_4;
  _uStack00000038 = param_5;
  do {
    iStack_70 = piVar5[-1] * param_7 + iVar1;
    stack_pair_6c.first = *piVar5 * param_7 + iVar2;
    fn_829F2758(&iStack_70,&stack_pair_6c.first);
    uVar3 = fn_829F27B8(param_2,param_3,CONCAT44(iStack_70,stack_pair_6c.first),(unsigned __int64)stack_pair_6c.second << 0x20
                          ,param_6,300,0x50,param_1);
    piVar5 = piVar5 + 2;
    puVar4 = puVar4 + 1;
    *puVar4 = uVar3;
    param_1 = param_1 + 0xc;
  } while ((int)piVar5 < -0x7df8604c);
  return;
}

