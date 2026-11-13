typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D34110();
extern int fn_82D34E10();
extern int fn_82D351D8();
extern int fn_82D35588();
extern int fn_82D35918();
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int uStack_b0;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D36438(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned short *puVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned char in_vs32 [16];
  unsigned char auVar8 [16];
  unsigned char auVar9 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  int iStack_b8;
  int iStack_b4;
  unsigned int uStack_b0;
  struct { float first; float second; } stack_pair_a0;

  float fStack_98;
  struct { float first; float second; } stack_pair_90;

  float fStack_88;

  iVar3 = (int)param_4;
  *(int *)(param_1 + 0x18) = iVar3;
  if (iVar3 != 0) {
    iVar2 = fn_82CE5410();
    if ((int)(param_5[2] & 0x3fffffff) < iVar3) {
      uVar7 = ((unsigned __int64)(unsigned int)param_5[2] & 0x3fffffff) << 1;
      if ((int)uVar7 <= iVar3) {
        uVar7 = param_4;
      }
      fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_5,uVar7,2);
    }
    param_5[1] = iVar3;
    puVar5 = (unsigned short *)(param_1 + 0x14);
    piVar6 = (int *)(param_1 + 0x10);
    fn_82D34E10(param_1 + 0x1c,(param_4 & 0x7fffffff) * 2 + 0xffff & 0xffff,piVar6,puVar5);
    iVar2 = fn_82D351D8(param_1 + 0x1c,piVar6,puVar5,puVar5);
    *(int *)(param_1 + 0x10) = iVar2;
    *(unsigned short *)(iVar2 + 0x10) = *(unsigned short *)(iVar2 + 0x10) | 0x7fff;
    iStack_b8 = 0;
    iStack_b4 = 0;
    uStack_b0 = 0x80000000;
    iVar2 = fn_82CE5410();
    if ((int)(uStack_b0 & 0x3fffffff) < iVar3) {
      uVar7 = ((unsigned __int64)uStack_b0 & 0x3fffffff) << 1;
      if ((int)uVar7 <= iVar3) {
        uVar7 = param_4;
      }
      fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),&iStack_b8,uVar7,0xc);
    }
    if (0 < iVar3) {
      iVar2 = 0;
      uVar7 = param_4;
      do {
        vectorAddFloatingPoint(in_vs32,in_vs43);
        vectorAddFloatingPoint(in_vs45,in_vs44);
        iVar4 = iVar2 + iStack_b8;{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs37,in_vs39); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMinimumFloatingPoint(in_vs38,in_vs39); memcpy(auVar9, &_vt1, 16); }
        vectorMaximumFloatingPoint(auVar8,in_vs32);
        vectorMaximumFloatingPoint(auVar9,in_vs32);
        puVar1 = (unsigned int *)((int)&stack_pair_90.first + in_r0 & 0xfffffff0);
        *puVar1 = in_register_00010010;
        puVar1[1] = in_register_00010014;
        puVar1[2] = in_register_00010018;
        puVar1[3] = in_vr1;
        puVar1 = (unsigned int *)((int)&stack_pair_a0.first + in_r0 & 0xfffffff0);
        *puVar1 = in_register_00010020;
        puVar1[1] = in_register_00010024;
        puVar1[2] = in_register_00010028;
        puVar1[3] = in_vr2;
        *(short *)(iVar2 + iStack_b8) = (short)((unsigned int)(int)stack_pair_a0.first >> 0xf);
        *(short *)(iVar4 + 8) = (short)((unsigned int)(int)stack_pair_90.second >> 0xf);
        *(short *)(iVar4 + 6) = (short)((unsigned int)(int)stack_pair_90.first >> 0xf);
        *(short *)(iVar4 + 10) = (short)((unsigned int)(int)fStack_88 >> 0xf);
        iVar2 = iVar2 + 0xc;
        *(short *)(iVar4 + 4) = (short)((unsigned int)(int)fStack_98 >> 0xf);
        *(short *)(iVar4 + 2) = (short)((unsigned int)(int)stack_pair_a0.second >> 0xf);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (iVar3 == 1) {
      iVar2 = *piVar6;
      *(unsigned int *)(iVar2 + 0xc) = *param_3;
      *(unsigned short *)(iVar2 + 0x10) = *(unsigned short *)(iVar2 + 0x10) | 0x8000;
      *(unsigned short *)(*piVar6 + 0x12) = 0x7fff;
      *(unsigned short *)*param_5 = *puVar5;
      iStack_b4 = iVar3;
    }
    else {
      iStack_b4 = iVar3;
      fn_82D35918(param_1,iStack_b8,param_3,param_4,*piVar6,param_5,0);
    }
    fn_82D34110(param_1,*piVar6,*puVar5,0x7fff);
    fn_82D35588(param_1,*piVar6,0);
    iVar3 = fn_82CE5410();
    iStack_b4 = 0;
    if ((uStack_b0 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),iStack_b8,uStack_b0 & 0x3fffffff,0xc);
    }
  }
  return;
}
