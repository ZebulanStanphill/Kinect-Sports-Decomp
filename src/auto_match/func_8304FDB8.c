extern int fn_82F66368(void *, int, const char *, int);
extern unsigned fn_82FA5060(unsigned,unsigned);
extern unsigned strlen(const char *);
extern unsigned int lbl_831BC978;


int fn_8304FDB8(int param_1,char *param_2,int param_3,unsigned int param_4)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  char *pcVar6;
  int lVar7;
  
  *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_1 + 0x74) & 0xfbffffff;
  iVar2 = fn_82FA5060(lbl_831BC978,0x24);
  *(int *)(param_1 + 0x10) = iVar2;
  if ((void *)iVar2 != 0) {
    *(unsigned int *)(iVar2 + 0x1c) = *(unsigned int *)(iVar2 + 0x1c) | 0x80000000;
    *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x18) = param_4;
    **(unsigned int **)(param_1 + 0x10) = 0;
    pcVar6 = param_2;
    if ((void *)param_3 != 0) {
      puVar5 = (unsigned int *)(param_3 + -4);
      *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x20) = 1;
      lVar7 = 5;
      puVar4 = *(unsigned int **)(param_1 + 0x10);
      do {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar5;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    else {
      *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x20) = 0;
    }
    iVar2 = strlen(param_2)+1;
    uVar3 = fn_82FA5060(lbl_831BC978,iVar2);
    **(unsigned int **)(param_1 + 0x10) = uVar3;
    if (**(unsigned **)(param_1 + 0x10) != 0) {
      fn_82F66368((void *)**(unsigned **)(param_1 + 0x10),iVar2,param_2,iVar2 + -1);
      return 1;
    }
  }
  return 2;
}

