#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8277D1C8();
extern int fn_8277F4F0();
extern int fn_8277F5D8();
extern unsigned int iStack_64;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_8277F9D0(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  char cVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned int *puStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int *puStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  int iStack_64;
  unsigned char uStack_60;
  
  iVar1 = *(int *)(param_2 + 4);
  puStack_70 = &stack_pair_90.first;
  puVar11 = (unsigned int *)(param_1 + 0x144);
  iVar2 = *(int *)(iVar1 + 0x14);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(unsigned int *)(iVar1 + 0x14) = 0;
  stack_pair_90.second = *(unsigned int *)(param_2 + 4);
  stack_pair_90.first = *(unsigned int *)(iVar2 + 8);
  uStack_74 = *(unsigned int *)(iVar2 + 0xc);
  uStack_6c = *(unsigned int *)(iVar2 + 8);
  iStack_64 = *(int *)(iVar2 + 4);
  uStack_78 = *(unsigned int *)(iVar2 + 0x14);
  uStack_7c = *(unsigned int *)(iVar2 + 0x10);
  uStack_68 = *(unsigned int *)(*(int *)((uStack_7c >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x150)) +
                       (uStack_7c & 0xf) * 8);
  uStack_60 = 1;
  puStack_80 = puVar11;
  fn_8277F4F0();
  uVar8 = *(unsigned int *)(param_2 + 4);
  uVar9 = param_3;
  do {
    fn_8277F4F0(param_1,uVar8,uVar9);
    do {
      do {
        cVar7 = fn_8277D1C8(&puStack_80,0xffffffff8277ba68);
        uVar5 = uStack_68;
        uVar10 = uStack_6c;
        puVar4 = puStack_70;
        if (cVar7 == '\0') {
          uVar10 = *(int *)(param_1 + 0x134) - 1;
          if (iVar2 == *(int *)((uVar10 >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x140)) +
                       (uVar10 & 0xf) * 0x1c) {
            if (*(unsigned int *)(iVar2 + 0x10) < *puVar11) {
              *puVar11 = *(unsigned int *)(iVar2 + 0x10);
            }
            if (*(int *)(param_1 + 0x134) != 0) {
              *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
            }
          }
          return;
        }
      } while (uStack_6c == uStack_68);
      if ((iStack_64 != iVar3) || (puStack_70[1] == 0)) {
        uVar6 = fn_8277F5D8(param_1,iVar3);
        puVar4[1] = (int)uVar6;
        if (uVar10 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar6,uVar10 | 0x40000000);
        }
        if (uVar5 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar6,CONCAT44(uVar5,uVar5) & 0xffffffffbfffffff);
        }
      }
      uVar8 = puVar4[1];
    } while ((int)param_3 == -1);
    fn_8277F4F0(param_1,uVar8,param_3 | 0x40000000);
    uVar9 = param_3 << 0x20 | param_3 & 0xbfffffff;
  } while( true );
}

