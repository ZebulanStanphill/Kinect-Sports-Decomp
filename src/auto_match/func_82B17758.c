#define true 1
extern int fn_82ABDD90();
extern int fn_82B837F8();


void fn_82B17758(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  
  puVar7 = (unsigned int *)(param_2 + 4);
  do {
    puVar1 = (unsigned int *)*puVar7;
    if (puVar1 == (unsigned int *)0x0) {
      return;
    }
    uVar2 = puVar1[4];
    if ((uVar2 != 0) && ((*puVar1 & 0xe000000) != 0)) {
      uVar3 = *(unsigned int *)(uVar2 + 8);
      uVar6 = uVar3 >> 7 & 0x7f;
      if (4 < uVar6) {
        if ((uVar6 < 9) || (uVar6 == 0x37)) {
LAB_82b17810:
          fn_82B837F8(param_1,param_2,puVar1,param_3,param_4,param_5);
        }
        else if (uVar6 == 0x67) {
          iVar4 = fn_82ABDD90(param_1,0x67,*(unsigned int *)(param_2 + 8) >> 0x13 & 7,0);
          iVar5 = fn_82ABDD90(param_1,0x67,uVar3 >> 0x13 & 7,0);
          if (*(int *)(iVar5 + (uVar2 - 4)) == *(int *)(iVar4 + param_2 + -4)) goto LAB_82b17810;
        }
      }
    }
    if ((unsigned int *)*puVar7 == puVar1) {
      puVar7 = puVar1 + 2;
    }
  } while( true );
}

