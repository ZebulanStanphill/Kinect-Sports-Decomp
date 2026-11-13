extern int fn_82CE4118();
extern int fn_82D86660();
extern int fn_82D9A420();


void fn_82D8DB38(int param_1)

{
  __int64 lVar1;
  unsigned int *puVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_82D86660(*(int *)(param_1 + 0x14),param_1 + 0x18,6);
    puVar2 = (unsigned int *)(param_1 + 0x14);
    lVar1 = 6;
    do {
      fn_82D9A420(puVar2[1],param_1 + 0xc);
      fn_82CE4118(puVar2[1]);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
    } while (lVar1 != 0);
    (**(int (***)())(*(int *)(param_1 + 8) + 4))(param_1 + 8,*(unsigned int *)(param_1 + 0x14));
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

