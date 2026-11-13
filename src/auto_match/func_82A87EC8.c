extern unsigned int *auStack_6a0;
extern int fn_82A87660();
extern int fn_82A87B60();
extern int fn_82A8CF10();
extern unsigned int lbl_821CB794;
extern unsigned int uStack_674;
extern unsigned int uStack_678;
extern unsigned int uStack_67c;
extern unsigned int uStack_680;


unsigned __int64 fn_82A87EC8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  unsigned int auStack_6a0 [2];
  unsigned char ** appuStack_698;
  struct { unsigned int first; unsigned int second; } stack_pair_680;

  unsigned int uStack_678;
  unsigned int uStack_674;
  int aiStack_670 [404];

  auStack_6a0[0] = 0;
  stack_pair_680.second = 0;
  uStack_678 = 0;
  uStack_674 = 0;
  fn_82A8CF10(&appuStack_698);
  cVar4 = fn_82A87660(auStack_6a0,&appuStack_698,&stack_pair_680.first);
  while ((cVar4 != '\0' &&
         (cVar4 = fn_82A87B60(auStack_6a0,&appuStack_698,&stack_pair_680.first,aiStack_670,400,4),
         cVar4 != '\0'))) {
    if (stack_pair_680.first !=
        (((int)stack_pair_680.first >> 1) + (unsigned int)((int)stack_pair_680.first < 0 && (stack_pair_680.first & 1) != 0)) * 2) {
      return 1;
    }
    iVar5 = 0;
    if (0 < (int)stack_pair_680.first) {
      piVar6 = aiStack_670;
      do {
        iVar1 = *(int *)(param_1 + 0x24);
        iVar5 = iVar5 + 2;
        iVar2 = *piVar6;
        piVar3 = piVar6 + 1;
        iVar8 = iVar2 + iVar1;
        iVar7 = *piVar3 + iVar1;
        piVar6 = piVar6 + 2;
        *(unsigned int *)(*piVar3 + iVar1) = *(unsigned int *)(iVar2 + iVar1);
        *(unsigned int *)(iVar7 + 4) = *(unsigned int *)(iVar8 + 4);
        *(unsigned int *)(iVar7 + 8) = *(unsigned int *)(iVar8 + 8);
        *(unsigned char *)(iVar7 + 0x10) = *(unsigned char *)(iVar8 + 0x10);
        *(unsigned char *)(iVar7 + 0x11) = *(unsigned char *)(iVar8 + 0x11);
        *(unsigned char *)(iVar7 + 0x12) = *(unsigned char *)(iVar8 + 0x12);
        *(unsigned char *)(iVar7 + 0x13) = *(unsigned char *)(iVar8 + 0x13);
        *(unsigned char *)(iVar7 + 0x14) = *(unsigned char *)(iVar8 + 0x14);
        *(unsigned char *)(iVar7 + 0x15) = *(unsigned char *)(iVar8 + 0x15);
        *(unsigned char *)(iVar7 + 0x16) = *(unsigned char *)(iVar8 + 0x16);
        *(unsigned char *)(iVar7 + 0x17) = *(unsigned char *)(iVar8 + 0x17);
      } while (iVar5 < (int)stack_pair_680.first);
    }
    appuStack_698 = &lbl_821CB794;
    fn_82A8CF10(&appuStack_698,param_2);
    cVar4 = fn_82A87660(auStack_6a0,&appuStack_698,&stack_pair_680.first);
  }
  return 0;
}
