extern unsigned int *auStack_80;
extern int fn_82ED6B90();
extern unsigned int iStack_b0;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


void fn_82F2ACF0(unsigned __int64 param_1,int param_2,__int64 param_3,__int64 param_4)

{
  __int64 lVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iStack_b0;
  int aiStack_ac [4];
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned char auStack_80 [4];
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  
  iStack_b0 = 0;
  aiStack_ac[0] = 0;
  puVar5 = (unsigned int *)(param_2 + 4);
  uVar4 = 1;
  lVar1 = param_4 + 0x80;
  do {
    lVar3 = lVar1;
    lVar2 = param_3;
    fn_82ED6B90(param_1,lVar3,lVar2,uVar4,param_2,&iStack_b0,aiStack_ac,auStack_80);
    uVar4 = uVar4 + 1;
    param_3 = lVar2 + 0x10;
    lVar1 = lVar3 + 0x100;
  } while ((uVar4 & 0xffffffff) < 5);
  fn_82ED6B90(param_1,lVar3 + 0x100,lVar2 + 0x10,5,param_2,&iStack_b0,aiStack_ac,auStack_80);
  fn_82ED6B90(param_1,lVar3 + 0x200,lVar2 + 0x20,6,param_2,&iStack_b0,aiStack_ac,auStack_80);
  if (aiStack_ac[0] < iStack_b0) {
    *(unsigned int *)(param_2 + 0x1c) = 1;
    *puVar5 = (unsigned int)(((unsigned __int64)*puVar5 - (unsigned __int64)uStack_9c) + (unsigned __int64)uStack_7c != 0);
    *(unsigned int *)(param_2 + 8) =
         (unsigned int)(((unsigned __int64)*(unsigned int *)(param_2 + 8) - (unsigned __int64)uStack_98) + (unsigned __int64)uStack_78 !=
               0);
    *(unsigned int *)(param_2 + 0xc) =
         (unsigned int)(((unsigned __int64)*(unsigned int *)(param_2 + 0xc) - (unsigned __int64)uStack_94) + (unsigned __int64)uStack_74
               != 0);
    *(unsigned int *)(param_2 + 0x10) =
         (unsigned int)(((unsigned __int64)*(unsigned int *)(param_2 + 0x10) - (unsigned __int64)uStack_90) + (unsigned __int64)uStack_70
               != 0);
    *(unsigned int *)(param_2 + 0x14) =
         (unsigned int)(((unsigned __int64)uStack_6c - (unsigned __int64)uStack_8c) + (unsigned __int64)*(unsigned int *)(param_2 + 0x14)
               != 0);
    *(unsigned int *)(param_2 + 0x18) =
         (unsigned int)(((unsigned __int64)uStack_68 - (unsigned __int64)uStack_88) + (unsigned __int64)*(unsigned int *)(param_2 + 0x18)
               != 0);
  }
  else {
    *(unsigned int *)(param_2 + 0x1c) = 0;
    *puVar5 = (unsigned int)(*puVar5 != 0);
    *(unsigned int *)(param_2 + 8) = (unsigned int)(*(int *)(param_2 + 8) != 0);
    *(unsigned int *)(param_2 + 0xc) = (unsigned int)(*(int *)(param_2 + 0xc) != 0);
    *(unsigned int *)(param_2 + 0x10) = (unsigned int)(*(int *)(param_2 + 0x10) != 0);
    *(unsigned int *)(param_2 + 0x14) = (unsigned int)(*(int *)(param_2 + 0x14) != 0);
    *(unsigned int *)(param_2 + 0x18) = (unsigned int)(*(int *)(param_2 + 0x18) != 0);
  }
  return;
}

