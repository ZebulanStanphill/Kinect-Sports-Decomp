#define true 1
extern unsigned int *auStack_70;
extern int fn_8267E228();
extern int fn_8267E2B0();
extern int fn_8267ED80();
extern int fn_8267EE20();
extern int fn_8267EEE0();
extern int fn_8267EF68();
extern int fn_826933E8();
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


unsigned __int64 fn_8267FA50(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  char cVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned char *puStack_78;
  unsigned int uStack_74;
  unsigned char auStack_70 [32];
  
  uVar1 = fn_8267E228();
  if (((int)uVar1 == -1) && ((param_3 & 0xffffffff) != 0)) {
    fn_8267EEE0(auStack_70,0,0);
    puStack_78 = auStack_70;
    uVar4 = 0;
    stack_pair_80.first = (unsigned int)param_1;
    stack_pair_80.second = (unsigned int)param_2;
    uStack_74 = 0;
    cVar3 = fn_8267ED80(&stack_pair_80.first,0xffffffff8267f9d0);
    if (cVar3 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_8267E228(param_1,param_2);
      if ((int)uVar1 == -1) {
        if ((int)param_3 != -1) {
          uVar4 = fn_826933E8();
        }
        uVar1 = fn_8267E228(param_1,param_2);
        uVar2 = param_3;
        if ((int)uVar1 == -1) {
          while( true ) {
            do {
              cVar3 = fn_8267E2B0(auStack_70,uVar2);
              if ((cVar3 == '\0') || (uVar1 = fn_8267E228(param_1,param_2), (int)uVar1 != -1))
              goto LAB_8267faf0;
            } while ((int)param_3 == -1);
            uVar2 = fn_826933E8();
            uVar2 = (uVar2 & 0xffffffff) - (uVar4 & 0xffffffff);
            if ((param_3 & 0xffffffff) <= (uVar2 & 0xffffffff)) break;
            uVar2 = param_3 - uVar2;
          }
        }
      }
LAB_8267faf0:
      fn_8267EE20(&stack_pair_80.first,0xffffffff8267f9d0);
    }
    fn_8267EF68(auStack_70);
  }
  return uVar1;
}

