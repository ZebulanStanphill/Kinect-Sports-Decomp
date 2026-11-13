typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_8267BE38();
extern int fn_827673B0();
extern int fn_8276AB50();
extern int fn_8276B860();
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6a;
extern unsigned int uStack_6c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_8276D2A8(unsigned __int64 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  int iVar5;
  unsigned short uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned short uStack_6c;
  unsigned short uStack_6a;
  struct { unsigned int first; unsigned int second; } stack_pair_68;

  unsigned int uStack_60;
  
  stack_pair_68.first = 0;
  uStack_60 = 0;
  uVar6 = 0;
  stack_pair_68.second = 0;
  uVar8 = 0;
  bVar1 = false;
  uVar7 = 0;
  iVar2 = (**(int (***)())(*param_2 + 0x38))(param_2);
  if (iVar2 != 0) {
    iVar2 = 0;
    uVar6 = 0;
    do {
      iVar5 = param_2[0xe] + iVar2;
      puVar4 = (unsigned char *)(*(int *)param_2[0xc] + iVar5);
      if (bVar1) {
        if (uVar8 == CONCAT11(puVar4[1],*puVar4) - 1) goto LAB_8276d334;
        uStack_6a = (unsigned short)uVar8;
        uStack_6c = uVar6;
        fn_8276AB50(&stack_pair_68.first,&uStack_6c);
        bVar1 = false;
      }
      else {
        bVar1 = true;
        uVar6 = CONCAT11(puVar4[1],*puVar4);
LAB_8276d334:
        uVar7 = uVar7 + 1;
        iVar2 = iVar2 + 8;
        puVar4 = (unsigned char *)(*(int *)param_2[0xc] + iVar5);
        uVar8 = (unsigned int)CONCAT11(puVar4[1],*puVar4);
      }
      uVar3 = (**(int (***)())(*param_2 + 0x38))(param_2);
    } while (uVar7 < uVar3);
  }
  if (bVar1) {
    uStack_6a = (unsigned short)uVar8;
    uStack_6c = uVar6;
    fn_8276AB50(&stack_pair_68.first,&uStack_6c);
  }
  fn_827673B0(&stack_pair_68.first,0,stack_pair_68.second,0);
  fn_8276B860(param_1,&stack_pair_68.first);
  fn_8267BE38(stack_pair_68.first);
  return param_1;
}

