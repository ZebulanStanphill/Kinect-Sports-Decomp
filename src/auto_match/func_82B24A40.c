typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82ABE250();
extern int fn_82B207C8();
extern int fn_82B24768();
extern int fn_82B4B410();
extern int fn_82B82D28();
extern unsigned int iStack_48;
extern unsigned int uStack_44;


unsigned int * fn_82B24A40(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  bool bVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned char auStack_50 [1];
  struct { int first; unsigned int second; } stack_pair_48;

  unsigned int auStack_40 [16];
  
  puVar5 = (unsigned int *)fn_82ABE250(param_1,8,0x33);
  puVar2 = puVar5 + 1;
  puVar5[1] = (unsigned int)puVar5 | 1;
  *puVar5 = (unsigned int)puVar2 | 1;
  fn_82B82D28(param_2,param_3,&stack_pair_48.first,&stack_pair_48.second,auStack_40,0,param_4,0);
  if (((CONCAT44(auStack_40[0],auStack_40[0]) & 0xfffffffffffffffb) == 0) &&
     ((*(unsigned int *)(stack_pair_48.first + 8) & 0x3f80) == 0x100)) {
    fn_82B24768(param_1,puVar5,*(unsigned int *)(stack_pair_48.first + 0x2c),stack_pair_48.second,param_4,auStack_50);
    fn_82B24768(param_1,puVar5,*(unsigned int *)(stack_pair_48.first + 0x30),stack_pair_48.second,param_4,auStack_50);
    uVar1 = *puVar2;
    uVar7 = *(unsigned int *)((-(unsigned int)((uVar1 & 1) == 0) & uVar1) + 0x18);
    if ((((uVar7 & 0x18) == 0) || ((auStack_40[0] & 0x18) == 0)) &&
       (((uVar7 & 2) == 0 || ((auStack_40[0] & 1) == 0)))) {
      if (((uVar7 & 4) == 0) || (bVar4 = false, (auStack_40[0] & 1) == 0)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    uVar7 = -(unsigned int)((uVar1 & 1) == 0) & uVar1;
    if (bVar4) {
      uVar7 = *(unsigned int *)(uVar7 + 0x18);
      if (((uVar7 & 4) != 0) && ((auStack_40[0] & 2) != 0)) {
        uVar7 = uVar7 - 4;
      }
      if ((uVar7 & auStack_40[0] & 4) != 0) {
        uVar7 = uVar7 - 4;
        auStack_40[0] = auStack_40[0] - 4;
      }
      if (((uVar7 & 1) != 0) && ((auStack_40[0] & 2) != 0)) {
        auStack_40[0] = auStack_40[0] - 2;
      }
      *(unsigned int *)((-(unsigned int)((uVar1 & 1) == 0) & uVar1) + 0x18) = uVar7 | auStack_40[0];
      return puVar5;
    }
    uVar7 = *(unsigned int *)(uVar7 + 0x24);
    if ((((uVar7 & 0x18) == 0) || ((auStack_40[0] & 0x18) == 0)) &&
       (((uVar7 & 2) == 0 || ((auStack_40[0] & 1) == 0)))) {
      if (((uVar7 & 4) == 0) || (bVar4 = false, (auStack_40[0] & 1) == 0)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar7 = *(unsigned int *)((-(unsigned int)((uVar1 & 1) == 0) & uVar1) + 0x24);
      if (((uVar7 & 4) != 0) && ((auStack_40[0] & 2) != 0)) {
        uVar7 = uVar7 - 4;
      }
      if ((uVar7 & auStack_40[0] & 4) != 0) {
        uVar7 = uVar7 - 4;
        auStack_40[0] = auStack_40[0] - 4;
      }
      if (((uVar7 & 1) != 0) && ((auStack_40[0] & 2) != 0)) {
        auStack_40[0] = auStack_40[0] - 2;
      }
      *(unsigned int *)((-(unsigned int)((uVar1 & 1) == 0) & uVar1) + 0x24) = uVar7 | auStack_40[0];
      return puVar5;
    }
    fn_82B207C8(puVar5);
  }
  if ((*puVar2 & 1) == 0) {
    uVar1 = *puVar5 & 0xfffffffe;
    iVar6 = uVar1 - 4;
    if ((iVar6 != 0) && (*(int *)(uVar1 + 4) + 1U <= *(unsigned int *)(uVar1 + 8))) goto LAB_82b24cd0;
  }
  iVar6 = fn_82B4B410(puVar5,1);
LAB_82b24cd0:
  iVar3 = *(int *)(iVar6 + 8) * 0xc + iVar6;
  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
  *(int *)(iVar3 + 0x10) = stack_pair_48.first;
  *(unsigned int *)(iVar3 + 0x14) = stack_pair_48.second;
  *(unsigned int *)(iVar3 + 0x18) = auStack_40[0];
  return puVar5;
}

