extern int fn_82C07C18(void);
extern int fn_82C10F40();
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C12128();

int fn_82C08D70(void *param_1)
{
  int iVar2;
  unsigned char auStack_30;
  unsigned char *puStack_2c;
  unsigned int uStack_28;
  unsigned int *apuStack_24[1];

  uStack_28 = 0;
  puStack_2c = 0;
  auStack_30 = 0;
  apuStack_24[0] = 0;
  if (param_1 == 0) {
    return 4;
  }
  iVar2 = fn_82C10F68(*(unsigned int *)((char *)param_1 + 0x238), &uStack_28, &puStack_2c, &auStack_30);
  if (iVar2 != 0x80500016) {
    if (iVar2 < 0) goto LAB_82c08e50;
    do {
      if ((iVar2 < 0) ||
         (((*(int *)(puStack_2c + 4) == 1 && (*(int *)(puStack_2c + 0x20) == 2)) &&
          ((iVar2 = fn_82C10F40(*(unsigned int *)((char *)param_1 + 0x23c), *puStack_2c, apuStack_24),
           iVar2 < 0 || (iVar2 = fn_82C12128(*apuStack_24[0]), iVar2 < 0))))))
      goto LAB_82c08e50;
      iVar2 = fn_82C10FD0(*(unsigned int *)((char *)param_1 + 0x238), uStack_28, &puStack_2c, &auStack_30);
    } while (iVar2 != 0x80500016);
  }
  fn_82C11038(*(unsigned int *)((char *)param_1 + 0x238), uStack_28);
LAB_82c08e50:
  return fn_82C07C18();
}
