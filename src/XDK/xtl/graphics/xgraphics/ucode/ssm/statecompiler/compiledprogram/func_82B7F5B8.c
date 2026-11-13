extern int fn_82B7F508();
extern int fn_82B9CF38();
extern int fn_82B9D1D8();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82B7F5B8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned char * apuStack_60;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  apuStack_60 = (unsigned char *)0x0;
  fn_82B9D1D8(param_3,*(unsigned int *)(param_1 + 4),0,&apuStack_60,param_4,0,0);
  fn_82B9CF38(param_3,*(unsigned int *)(param_1 + 4),&uStack_50,param_4,0,0);
  param_2 = *(int *)(param_1 + 8) + param_2;
  uVar7 = *(unsigned int *)(param_2 + 0xc);
  *(unsigned int *)(param_2 + 8) = (uStack_50 & 1) << 0xc | *(unsigned int *)(param_2 + 8) & 0xffffefff;
  uVar1 = (uStack_4c & 1) << 0x13;
  *(unsigned int *)(param_2 + 0xc) = uVar1 | uVar7 & 0xfff7ffff;
  uVar2 = (uStack_48 & 1) << 0x12;
  *(unsigned int *)(param_2 + 0xc) = uVar2 | uVar1 | uVar7 & 0xfff3ffff;
  uVar3 = (uStack_44 & 1) << 0x11;
  *(unsigned int *)(param_2 + 0xc) = uVar3 | uVar2 | uVar1 | uVar7 & 0xfff1ffff;
  uVar4 = (uStack_40 & 1) << 0x10;
  *(unsigned int *)(param_2 + 0xc) = uVar4 | uVar3 | uVar2 | uVar1 | uVar7 & 0xfff0ffff;
  uVar5 = (uStack_3c & 0x3f) << 10;
  *(unsigned int *)(param_2 + 0xc) = uVar5 | uVar4 | uVar3 | uVar2 | uVar1 | uVar7 & 0xfff003ff;
  *(unsigned int *)(param_2 + 0xc) =
       (uStack_38 & 0x3f) << 2 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1 | uVar7 & 0xfff00303;
  *(char *)(param_2 + 0x10) =
       (char)((int)uStack_34 >> 2) + ((int)uStack_34 < 0 && (uStack_34 & 3) != 0);
  *(unsigned int *)(param_2 + 0x10) =
       (((int)uStack_30 >> 2) + (unsigned int)((int)uStack_30 < 0 && (uStack_30 & 3) != 0) +
       *(int *)(param_1 + 0xc)) * 2 & 0xfffffe | *(unsigned int *)(param_2 + 0x10) & 0xff000001;
  iVar6 = fn_82B7F508(*apuStack_60);
  *(unsigned int *)(param_2 + 0xc) = iVar6 << 0x1d | *(unsigned int *)(param_2 + 0xc) & 0x1fffffff;
  uVar7 = fn_82B7F508(apuStack_60[1]);
  *(unsigned int *)(param_2 + 0xc) = (uVar7 & 7) << 0x1a | *(unsigned int *)(param_2 + 0xc) & 0xe3ffffff;
  uVar7 = fn_82B7F508(apuStack_60[2]);
  *(unsigned int *)(param_2 + 0xc) = (uVar7 & 7) << 0x17 | *(unsigned int *)(param_2 + 0xc) & 0xfc7fffff;
  uVar7 = fn_82B7F508(apuStack_60[3]);
  *(unsigned int *)(param_2 + 0xc) = (uVar7 & 7) << 0x14 | *(unsigned int *)(param_2 + 0xc) & 0xff8fffff;
  return;
}

