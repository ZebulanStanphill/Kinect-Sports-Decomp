typedef unsigned int size_t;
void *memcpy(void *, const void *, size_t);
extern int fn_82814D10(int);
extern int fn_82814D28(int);


void fn_828202C8(int param_1)
{
  int iVar1;
  char *pcVar2;
  int i;
  
  iVar1 = *(int *)(param_1 + 0x20);
  pcVar2 = *(char **)(iVar1 + 0x30);
  if (*pcVar2 == 1) {
    memcpy(*(void **)(param_1 + 0x1c),*(void **)(pcVar2 + 0x18),
                 *(size_t *)(pcVar2 + 0x10));
    if (fn_82814D10(param_1) != 0) {
      fn_82814D28(param_1);
    }
  }
  for (i = 0; i < 2; i++) {
    *(int *)(*(int *)(param_1 + 0x1c) + i * 0x14 + 0x5c) = *(int *)(*(int *)(iVar1 + 0x2c) + i * 4 + 4);
  }
}
