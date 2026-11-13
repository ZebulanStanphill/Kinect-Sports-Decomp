typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82823030();
extern int fn_82823080();
extern int fn_82823058();
extern int fn_828230A8();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_8282D640(unsigned __int64 param_1,unsigned __int64 param_2,int (**param_3)(),char param_4)

{
  bool bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iStack_50;
  int iStack_4c;
  int aiStack_48;

  iVar2 = 0;
  bVar1 = false;
  fn_82823030(param_2,&iStack_50);
  uVar3 = 0;
  do {
    if (uVar3 == 0) {
      fn_82823058(iStack_50,&iStack_4c);
      if (iStack_4c == 0) {
        if (param_4 == '\0') {
          (*param_3)(param_1,iStack_50);
        }
        uVar3 = 1;
      }
      else {
LAB_8282d728:
        iStack_50 = iStack_4c;
        uVar3 = 0;
      }
    }
    else if (uVar3 == 1) {
      fn_828230A8(iStack_50,&iStack_4c);
      if ((iStack_4c != 0) && (iStack_4c != iVar2)) goto LAB_8282d728;
      uVar3 = 2;
    }
    else if (uVar3 < 3) {
      fn_82823080(iStack_50,&iStack_4c);
      if (iStack_4c == 0) {
        bVar1 = true;
      }
      else {
        uVar3 = 1;
        if (param_4 == '\0') {
          fn_82823058(iStack_4c,&aiStack_48);
          if (aiStack_48 == iStack_50) {
            (*param_3)(param_1,iStack_4c);
          }
        }
        iVar2 = iStack_50;
        iStack_50 = iStack_4c;
      }
    }
    if (bVar1) {
      return;
    }
  } while( true );
}
