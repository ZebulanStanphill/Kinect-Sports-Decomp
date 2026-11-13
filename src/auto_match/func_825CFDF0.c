#define true 1
extern int fn_825200A8();
extern int fn_82523148();
extern int fn_825269D0();
extern int fn_82527168();
extern int fn_82558A18();
extern int fn_825CFEA0();
extern unsigned int lbl_83266104;


void fn_825CFDF0(unsigned __int64 param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  param_2[1] = 0;
  param_2[2] = 0;
  fn_82558A18();
  uVar1 = lbl_83266104;
  if (*param_2 != 0) {
    fn_82527168(param_2,param_2);
    uVar1 = lbl_83266104;
  }
  do {
    uVar3 = (unsigned __int64)uVar1;
    if (uVar3 == 0) {
LAB_825cfe6c:
      fn_825CFEA0(param_1,param_2);
      if (param_2[0x351] != 0) {
        fn_82523148();
        param_2[0x351] = 0;
      }
      fn_825269D0(0x18,param_2);
      return;
    }
    iVar2 = fn_825200A8(uVar3 + 8);
    if (iVar2 != 0) {
      param_2[0x351] = (int)uVar3;
      goto LAB_825cfe6c;
    }
    uVar1 = *(unsigned int *)((int)uVar3 + 4);
  } while( true );
}

