#define true 1
extern int fn_83009E78();
extern int fn_83014E90();
extern int fn_8302BBA8();
extern int fn_83032738();
extern unsigned int iStack_6c;
extern unsigned int lbl_832642E0;
extern unsigned int uStack_5a;
extern unsigned int uStack_5b;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_8303EE40(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  struct { unsigned int first; int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned char uStack_5c;
  unsigned char uStack_5b;
  unsigned char uStack_5a;
  
  iVar6 = lbl_832642E0;
  iVar3 = lbl_832642E0 + 0x1304;
  RtlEnterCriticalSection(iVar3);
  iVar4 = iVar6 + 0x1320;
  uVar5 = 0;
  iVar6 = *(int *)(iVar6 + 0x1320);
  while (iVar6 == 0) {
    uVar5 = uVar5 + 1;
    if (0xc0 < uVar5) goto joined_r0x8303eea8;
    iVar6 = *(int *)(uVar5 * 4 + iVar4);
  }
LAB_8303eeac:
  do {
    do {
      fn_83014E90(iVar6,param_2,param_3);
      iVar6 = *(int *)(iVar6 + 8);
    } while (iVar6 != 0);
    do {
      uVar5 = uVar5 + 1;
      if (0xc0 < uVar5) goto joined_r0x8303eea8;
      iVar6 = *(int *)(uVar5 * 4 + iVar4);
    } while (iVar6 == 0);
  } while( true );
joined_r0x8303eea8:
  if (iVar6 == 0) {
    RtlLeaveCriticalSection(iVar3);
    piVar1 = (int *)fn_83009E78();
    if (piVar1 != (int *)0x0) {
      uStack_5a = *(unsigned char *)(param_1 + 0x28);
      uStack_60 = *(unsigned int *)(param_1 + 0x14) >> 3 & 0x1f;
      uStack_5c = 0;
      stack_pair_70.first = (unsigned int)param_2;
      stack_pair_70.second = (int)param_3;
      uStack_68 = 0;
      uStack_64 = fn_8302BBA8(param_1);
      uStack_5b = stack_pair_70.second == 0;
      (**(int (***)())(*piVar1 + 0x1c))(piVar1,&stack_pair_70.first);
      piVar2 = (int *)fn_83032738();
      if (piVar2 != (int *)0x0) {
        (**(int (***)())(*piVar2 + 0x1c))(piVar2,&stack_pair_70.first);
        (**(int (***)())(*piVar2 + 8))(piVar2);
      }
      (**(int (***)())(*piVar1 + 8))(piVar1);
    }
    return;
  }
  goto LAB_8303eeac;
}

