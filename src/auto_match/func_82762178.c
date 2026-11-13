typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_8275E130();
extern int fn_8275E198();
extern int fn_8275FD10();
extern int fn_8275FD58();
extern int fn_82760B00();
extern int fn_82F68CC0();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


__int64 fn_82762178(int param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  int iVar2;
  bool bVar3;
  unsigned int *puVar4;
  unsigned int uVar6;
  __int64 lVar5;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned char uStack_30;
  
  puVar4 = (unsigned int *)(param_1 + 0x84);
  fn_82F68CC0(param_2,puVar4,0x18);
  iVar2 = *(int *)(param_1 + 0x84);
  if (iVar2 == 0) {
LAB_827621bc:
    bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x7c) + 0x20);
    if (bVar1 == 1) {
LAB_827621dc:
      bVar3 = true;
    }
    else {
      bVar3 = false;
      if ((bVar1 & 0x80) == 0) goto LAB_827621dc;
    }
    if (!bVar3) {
      fn_8275E198(param_1 + 0x7c,&uStack_40,0);
      *puVar4 = 3;
      *(unsigned int *)(param_1 + 0x88) = uStack_40;
      *(unsigned int *)(param_1 + 0x8c) = uStack_3c;
      *(unsigned int *)(param_1 + 0x90) = uStack_38;
      *(unsigned int *)(param_1 + 0x94) = uStack_34;
      *(unsigned char *)(param_1 + 0x98) = uStack_30;
      goto LAB_827622c4;
    }
    uVar6 = 2;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 3) goto LAB_827622c4;
      goto LAB_827621bc;
    }
    if (*(char *)(param_1 + 0x28) != '\x01') {
      if (*(char *)(param_1 + 0x28) == '\x02') {
        if (*(char *)(param_1 + 0x28) != '\x01') {
          if (*(char *)(param_1 + 0x28) == '\x02') {
            fn_8275FD10();
          }
          else {
            fn_82760B00(param_1 + 8);
          }
        }
      }
      *puVar4 = 0;
      *(unsigned int *)(param_1 + 0x90) = *(unsigned int *)(param_1 + 0x1c);
      *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(param_1 + 0x20);
      *(unsigned int *)(param_1 + 0x98) = *(unsigned int *)(param_1 + 0x24);
      puVar4 = (unsigned int *)fn_8275FD58(auStack_50,param_1 + 8);
      *(unsigned int *)(param_1 + 0x7c) = *puVar4;
      *(unsigned int *)(param_1 + 0x80) = puVar4[1];
      fn_8275E130(param_1 + 0x7c,param_1 + 0x88,param_1 + 0x8c);
      goto LAB_827622c4;
    }
    uVar6 = 4;
  }
  *puVar4 = uVar6;
LAB_827622c4:
  lVar5 = (unsigned __int64)*param_2 - 4;
  return lVar5 - (((unsigned __int64)*param_2 - 5) + (unsigned __int64)(lVar5 == 0));
}

