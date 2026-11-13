extern int fn_828F5960();
extern int fn_828F6FA8();
extern int fn_828FA798();
extern unsigned int stack0x00000000;
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Removing unreachable block (ram,0x828faa20) */
/* WARNING: Removing unreachable block (ram,0x828fa968) */
/* WARNING: Removing unreachable block (ram,0x828fa9c8) */
/* WARNING: Removing unreachable block (ram,0x828faac8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_828FA8D8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  unsigned int uVar6;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  char acStack_1040 [4160];
  
  pcVar4 = &stack0x00000000 + -0x1040;
  uVar6 = 0xffc;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if (param_2 == 0) {
LAB_828fa9d4:
    if ((param_3 & 0xffffffff) != 0) {
      iVar3 = fn_828F6FA8(pcVar4,uVar6,0xffffffff820297ac,param_3);
      pcVar5 = pcVar4;
      if (iVar3 < 0) goto LAB_828faa98;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar3 = -1 - (int)pcVar4;
      pcVar4 = pcVar4 + (int)(pcVar5 + iVar3);
      uVar6 = uVar6 - (int)(pcVar5 + iVar3);
    }
    puVar2 = *(unsigned int **)(param_1 + 0xc);
    if (puVar2 != (unsigned int *)0x0) {
      iVar3 = (**(int (***)())*puVar2)(puVar2,pcVar4,uVar6);
      if (iVar3 < 0) goto LAB_828faa98;
      pcVar4 = pcVar4 + iVar3;
      uVar6 = uVar6 - iVar3;
    }
    if ((uVar6 < 0x80000000) &&
       (iVar3 = fn_828F5960(pcVar4,uVar6,param_4,&stack0x00000030), -1 < iVar3)) {
      do {
        pcVar5 = pcVar4;
        pcVar4 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      *pcVar5 = '\n';
      pcVar4 = &stack0x00000000 + -0x1040;
      pcVar5[1] = '\0';
      goto LAB_828faae0;
    }
  }
  else if (*(int *)(param_2 + 0x10) == 0) {
LAB_828fa978:
    iVar3 = *(int *)(param_2 + 0x14);
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    iVar3 = fn_828F6FA8(pcVar4,uVar6,0xffffffff820297b8,iVar3);
    pcVar5 = pcVar4;
    if (-1 < iVar3) {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar3 = -1 - (int)pcVar4;
      pcVar4 = pcVar4 + (int)(pcVar5 + iVar3);
      uVar6 = uVar6 - (int)(pcVar5 + iVar3);
      goto LAB_828fa9d4;
    }
  }
  else {
    iVar3 = fn_828F6FA8(&stack0x00000000 + -0x1040,0xffc,0xffffffff821c4da8);
    if (-1 < iVar3) {
      pcVar5 = &stack0x00000000 + -0x1040;
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar6 = 0xffc - (int)(pcVar4 + (-1 - (int)pcVar5));
      pcVar4 = &stack0x00000000 + (int)(pcVar4 + (-0x1041 - (int)pcVar5));
      goto LAB_828fa978;
    }
  }
LAB_828faa98:
  pcVar4 = "Error creating error string";
LAB_828faae0:
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  fn_828FA798(param_1,pcVar4);
  return;
}

