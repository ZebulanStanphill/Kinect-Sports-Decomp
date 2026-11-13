#define true 1
extern unsigned int *auStack_bc;
extern unsigned int *auStack_f0;
extern int fn_8267BE38();
extern int fn_8267E0E0();
extern int fn_8267E160();
extern int fn_8267E2B0();
extern int fn_8267ED80();
extern int fn_8267EE20();
extern int fn_8267EEE0();
extern int fn_8267EF68();
extern int fn_826933E8();
extern unsigned int uStack_100;
extern unsigned int uStack_fc;


unsigned __int64 fn_8267F828(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_100;

  unsigned char *puStack_f8;
  unsigned char *puStack_f4;
  unsigned char auStack_f0 [48];
  unsigned char *puStack_c0;
  unsigned char auStack_bc [108];
  
  fn_8267E0E0(&puStack_c0,param_1,param_2);
  cVar3 = fn_8267E160(puStack_c0,param_2);
  if (cVar3 == '\0') {
    if ((param_3 & 0xffffffff) != 0) {
      fn_8267EEE0(auStack_f0,0,0);
      puStack_f8 = auStack_f0;
      stack_pair_100.first = (unsigned int)param_1;
      stack_pair_100.second = (unsigned int)param_2;
      puStack_f4 = puStack_c0;
      cVar3 = fn_8267ED80(&stack_pair_100.first,0xffffffff8267f7c0);
      if (cVar3 != '\0') {
        cVar3 = fn_8267E160(puStack_c0,param_2);
        if (cVar3 == '\0') {
          uVar1 = 0;
          uVar4 = 0;
          uVar2 = param_3;
          if ((int)param_3 != -1) {
            uVar4 = fn_826933E8();
          }
          do {
            cVar3 = fn_8267E2B0(auStack_f0,uVar2);
            if (cVar3 == '\0') {
LAB_8267f998:
              fn_8267EE20(&stack_pair_100.first,0xffffffff8267f7c0);
              fn_8267EF68(auStack_f0);
              if (puStack_c0 == auStack_bc) {
                return uVar1;
              }
              fn_8267BE38();
              return uVar1;
            }
            cVar3 = fn_8267E160(puStack_c0,param_2);
            if (cVar3 != '\0') {
              uVar1 = 1;
              goto LAB_8267f998;
            }
            if ((int)param_3 != -1) {
              uVar2 = fn_826933E8();
              uVar2 = (uVar2 & 0xffffffff) - (uVar4 & 0xffffffff);
              if ((param_3 & 0xffffffff) <= (uVar2 & 0xffffffff)) goto LAB_8267f998;
              uVar2 = param_3 - uVar2;
            }
          } while( true );
        }
        fn_8267EE20(&stack_pair_100.first,0xffffffff8267f7c0);
        fn_8267EF68(auStack_f0);
        goto LAB_8267f864;
      }
      fn_8267EF68(auStack_f0);
    }
    if (puStack_c0 != auStack_bc) {
      fn_8267BE38();
    }
    uVar1 = 0;
  }
  else {
LAB_8267f864:
    if (puStack_c0 != auStack_bc) {
      fn_8267BE38();
    }
    uVar1 = 1;
  }
  return uVar1;
}

