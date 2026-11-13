#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_82279768();
extern int fn_82279C58();
extern int fn_82283808();
extern int fn_822847A8();
extern int fn_8248F4B8();
extern int fn_8249ABC0();
extern int fn_8249D070();
extern int fn_8249D1C0();
extern int fn_824BF8A8();
extern int fn_8266F678();
extern int fn_82673BC0();
extern int fn_82BA02A8();
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int lbl_821A8B24;
extern unsigned int lbl_821A8C90;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8329618C;
extern unsigned int uStack_40;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


/* WARNING: Removing unreachable block (ram,0x822831dc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int * fn_822831B8(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned char auStack_80 [4];
  int (**pcStack_7c)();
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned char *puStack_70;
  unsigned char auStack_68 [4];
  int iStack_64;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  
  iVar7 = 0;
  pcStack_7c = fn_8248F4B8;
  puStack_70 = auStack_80;
  fn_82279768(param_1,param_2,0,1,1,auStack_80,0,1);
  *param_1 = &lbl_821A8B24;
  uVar6 = ltcg_pool_0_0f;
  param_1[0x4c] = &lbl_821A8C90;
  param_1[0x57] = uVar6;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0xffffffff;
  param_1[0x55] = 0xffffffff;
  param_1[0x56] = 0xffffffff;
  param_1[0x58] = 0xffffffff;
  param_1[0x59] = 0;
  param_1[0x4d] = param_1;
  param_1[0x4e] = fn_82283808;
  param_1[0x4f] = fn_82BA02A8;
  param_1[0x50] = fn_82BA02A8;
  puVar3 = (unsigned int *)fn_82279C58(auStack_68,param_1);
  fn_8266F678(*puVar3,1);
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  param_1[0x29] = param_1 + 0x4c;
  puVar3 = (unsigned int *)fn_82279C58(auStack_60,param_1);
  fn_82673BC0(*puVar3,0xffffffff82291208,param_1);
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  iVar4 = fn_8249ABC0();
  iVar4 = *(int *)(iVar4 + 0x110);
  iVar1 = *(int *)(iVar4 + 0x20);
  *(int *)(iVar4 + 0x20) = iVar1 + 1;
  pcStack_7c = (int (**)())iVar1;
  fn_824BF8A8(iVar4,auStack_80);
  param_1[0x53] = iVar1;
  iVar1 = *(int *)(iVar4 + 0x20);
  *(int *)(iVar4 + 0x20) = iVar1 + 1;
  pcStack_7c = (int (**)())iVar1;
  fn_824BF8A8(iVar4 + 0x10,auStack_80);
  param_1[0x54] = iVar1;
  iVar4 = fn_8249ABC0();
  iVar4 = *(int *)(iVar4 + 0xec);
  uVar6 = *(unsigned int *)(iVar4 + 0x20);
  pcStack_7c = *(int (***)())(iVar4 + 0x24);
  uStack_78 = *(unsigned int *)(iVar4 + 0x28);
  uStack_74 = *(unsigned int *)(iVar4 + 0x2c);
  uVar5 = fn_8249D070(iVar4,*(unsigned __int64 *)(iVar4 + 0x10),*(unsigned __int64 *)(iVar4 + 0x18));
  param_1[0x55] = uVar5;
  uVar6 = fn_8249D1C0(iVar4,CONCAT44(uVar6,pcStack_7c),CONCAT44(uStack_78,uStack_74));
  param_1[0x56] = uVar6;
  iVar4 = fn_8225F160();
  *(unsigned int *)(iVar4 + 0x50) = 1;
  puStack_70 = (unsigned char *)0x0;
  uStack_40 = 0;
  *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x54) + 1;
  uVar6 = fn_822847A8(0,auStack_50,0,auStack_80,1,1);
  param_1[0x52] = uVar6;
  if (lbl_8329618C != 0) {
    iVar7 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar7 != 0) {
    iVar4 = *(int *)(*(int *)(iVar7 + 0xd54) + 0x14);
    if (((iVar4 != 0) && (*(int *)(*(int *)(iVar7 + 0xd54) + 0x18) == 0)) &&
       (piVar2 = *(int **)(iVar4 + 0x18), piVar2 != (int *)0x0)) {
      (**(int (***)())(*piVar2 + 0x88))();
    }
  }
  return param_1;
}

