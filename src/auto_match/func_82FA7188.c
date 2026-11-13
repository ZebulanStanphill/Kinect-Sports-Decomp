#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_40;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FA7EB0();
extern int fn_82FA9F88();
extern int fn_82FAA968();
extern int fn_82FAB6C0();
extern int fn_82FABF58();
extern int fn_82FABF60();
extern int fn_82FF4BB8();
extern int fn_82FF5028();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264234;
extern unsigned int lbl_83264238;
extern unsigned int lbl_8326423C;
extern unsigned int lbl_83264304;


unsigned __int64 fn_82FA7188(unsigned __int64 param_1,int *param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned __int64 uVar3;
  int iVar5;
  int *piVar6;
  unsigned int auStack_40;
  
  uVar2 = fn_82FA5060(lbl_831BC768,0x50);
  if (((uVar2 & 0xffffffff) == 0) ||
     (puVar4 = (unsigned int *)fn_82FA9F88(uVar2,param_2), puVar4 == (unsigned int *)0x0)) {
    uVar3 = 2;
  }
  else {
    uVar3 = fn_82FAA968(puVar4,param_3,param_4);
    if ((int)uVar3 == 1) {
      if (lbl_83264234 == (int *)0x0) {
        lbl_83264234 = param_2;
        lbl_83264238 = param_2;
        param_2[0xf] = 0;
      }
      else {
        param_2[0xf] = (int)lbl_83264234;
        lbl_83264234 = param_2;
      }
      lbl_8326423C = lbl_8326423C + 1;
      fn_82FABF58(param_2,puVar4);
      if (*(int *)(param_3 + 0x10) != 0) {
        auStack_40 = 0;
        uVar3 = fn_82FF5028(lbl_83264304,*(int *)(param_3 + 0x10),param_2 + 4,&auStack_40);
        fn_82FABF60(param_2,auStack_40);
        iVar5 = (**(int (***)())(*param_2 + 0x20))(param_2);
        if (iVar5 != 0) {
          piVar6 = (int *)(**(int (***)())(*param_2 + 0x20))(param_2);
          (**(int (***)())(*piVar6 + 0x94))(piVar6,3);
        }
        if (((auStack_40 & 0x20000) != 0) &&
           (iVar5 = fn_82FA7EB0(0xffffffff83264240,*(unsigned int *)(param_3 + 0x10)), iVar5 != 1)
           ) {
          fn_82FABF60(param_2,CONCAT44(auStack_40,auStack_40) & 0xfffffffffffdffff);
        }
        fn_82FF4BB8(lbl_83264304,*(unsigned int *)(param_3 + 0x10));
      }
    }
    else {
      fn_82FAB6C0(puVar4);
      uVar1 = lbl_831BC768;
      (**(int (***)())*puVar4)(puVar4,0);
      fn_82FA5190(uVar1,puVar4);
    }
  }
  return uVar3;
}

