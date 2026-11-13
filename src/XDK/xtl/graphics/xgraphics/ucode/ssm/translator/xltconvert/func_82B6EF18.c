extern unsigned int *auStack_8c;
extern int fn_82AB15D0();
extern int fn_82B7F830();
extern int memcpy();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;


void fn_82B6EF18(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned int param_5,
                  unsigned __int64 param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uStack_90;
  unsigned char auStack_8c [12];
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  
  puVar1 = *(unsigned int **)(param_1 + 0x1c);
  memcpy(&uStack_80,param_2,0x28);
  puVar2 = (unsigned int *)puVar1[0xbbe];
  fn_82B7F830(*(unsigned int *)(param_1 + 0x10),*puVar1,0,param_4,&uStack_90,auStack_8c);
  uVar11 = param_3 << 0x1b;
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar10 = (((((((uStack_78 & 3) << 2 | uStack_74 & 3) << 2 | uStack_70 & 3) << 3 | uStack_6c & 7)
              << 3 | uStack_68 & 7) << 2 | uStack_64 & 3) << 2 | uStack_60 & 3) << 4;
  uVar9 = (uStack_5c & 1) << 0x1e;
  uVar8 = (param_7 & 0x3f) << 0xe;
  uVar5 = (param_5 & 0x3f) << 0x15;
  *puVar2 = uVar5 | uVar8 | uVar3 & 0x1fff | uVar11;
  puVar2[1] = uVar10 | uVar4 & 0xfff0000f;
  puVar2[2] = uVar9 | puVar2[2] & 0xbfffffff;
  uVar7 = (((uStack_80 & 1) << 5 | uStack_90 & 0x1f) << 1 | uStack_7c & 1) << 6;
  *puVar2 = uVar7 | uVar5 | uVar8 | uVar3 & 0x3f | uVar11;
  uVar6 = (*(unsigned int *)(param_2 + 0x54) & 1) << 3;
  puVar2[1] = uVar6 | uVar10 | uVar4 & 0xfff00007;
  uVar3 = *(unsigned int *)(param_2 + 0x58);
  *puVar2 = (unsigned int)(((param_6 & 0xffffffff) >> 6 & 0xc | param_6 & 0xfffffff3) >> 2) & 0xf |
            (unsigned int)((param_6 & 0xffffffff) << 4) & 0x30 | uVar7 | uVar5 | uVar8 | uVar11;
  uVar3 = (uVar3 & 3) << 1;
  puVar2[1] = uVar3 | uVar6 | uVar10 | uVar4 & 0xfff00001;
  uVar8 = ((((param_8 & 3) << 7 | param_8 & 0x30) << 7 | param_8 & 0x300) << 7 | param_8 & 0x3000)
          << 8;
  puVar2[2] = uVar9;
  puVar2[1] = uVar8 | uVar3 | uVar6 | uVar10 | uVar4 & 1;
  puVar2[1] = uVar8 | uVar3 | uVar6 | uVar10;
  if (100 < (unsigned int)puVar1[0xa91]) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da418,0xffffffff820da3b8,0x59b);
  }
  puVar1[0xbbe] = puVar1[0xbbe] + 0xc;
  puVar1[0xa91] = puVar1[0xa91] + 1;
  return;
}

