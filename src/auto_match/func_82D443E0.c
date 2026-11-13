extern unsigned __int64 __mftb(void);
#define TBLr __mftb()
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82138628;
extern unsigned int lbl_8323B4A0;


char * fn_82D443E0(char *param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcBvShape";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  (*(int (**)())(**(int **)(param_2 + 0x18) + 0x20))
            (param_1,*(int **)(param_2 + 0x18),param_3,param_4);
  *(int *)(param_4 + 0x40) -= 1;
  iVar3 = *(int *)(param_4 + 0x40);
  if (*param_1 != '\0') {
    *(unsigned int *)((iVar3 + 8) * 4 + param_4) = 0;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = "Et";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  return param_1;
}

