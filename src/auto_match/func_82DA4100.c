extern unsigned int *auStack_32b0;
extern unsigned int *auStack_32c0;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82F6A528();
extern int fn_82F6A574();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern int fn_83089E78();
extern unsigned int iStack_32a4;


/* WARNING: Removing unreachable block (ram,0x82da4244) */
/* WARNING: Removing unreachable block (ram,0x82da4248) */
/* WARNING: Removing unreachable block (ram,0x82da4268) */
/* WARNING: Removing unreachable block (ram,0x82da42a0) */
/* WARNING: Removing unreachable block (ram,0x82da428c) */
/* WARNING: Removing unreachable block (ram,0x82da42a4) */
/* WARNING: Removing unreachable block (ram,0x82da42d4) */
/* WARNING: Removing unreachable block (ram,0x82da42e4) */
/* WARNING: Removing unreachable block (ram,0x82da4348) */
/* WARNING: Removing unreachable block (ram,0x82da4354) */
/* WARNING: Removing unreachable block (ram,0x82da43b4) */
/* WARNING: Removing unreachable block (ram,0x82da43cc) */
/* WARNING: Removing unreachable block (ram,0x82da4434) */
/* WARNING: Removing unreachable block (ram,0x82da443c) */
/* WARNING: Removing unreachable block (ram,0x82da4470) */
/* WARNING: Removing unreachable block (ram,0x82da4474) */
/* WARNING: Removing unreachable block (ram,0x82da45b8) */
/* WARNING: Removing unreachable block (ram,0x82da4798) */
/* WARNING: Removing unreachable block (ram,0x82da47a8) */
/* WARNING: Removing unreachable block (ram,0x82da47bc) */
/* WARNING: Removing unreachable block (ram,0x82da47f4) */

void fn_82DA4100(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned char auStack_32c0 [16];
  unsigned char auStack_32b0 [12];
  int iStack_32a4;
  
  fn_82F6A528();
  fn_82F6DA24();
  iVar1 = fn_82CE5410();
  fn_82CEAB00(auStack_32b0,*(unsigned int *)(iVar1 + 0x10),param_3);
  iStack_32a4 = 0;
  if (0 < (int)param_3) {
    do {
      iVar2 = *(int *)param_2 + 0x10;
      iVar1 = fn_82CE5410();
      fn_82CEA160(auStack_32b0,*(unsigned int *)(iVar1 + 0x10),iVar2,0);
      fn_83089E78(iVar2,auStack_32c0);
      param_2 = param_2 + 4;
      iStack_32a4 = iStack_32a4 + 1;
    } while (iStack_32a4 < (int)param_3);
  }
  fn_82CE5410();
  iVar1 = fn_82CE5410();
  fn_82CEA4B8(auStack_32b0,*(unsigned int *)(iVar1 + 0x10));
  fn_82BA02A8(auStack_32b0);
  fn_82F6DCBC();
  fn_82F6A574();
  return;
}

