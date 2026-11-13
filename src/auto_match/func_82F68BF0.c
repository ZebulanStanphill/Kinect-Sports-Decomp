extern void *fn_82A28568(void *, int, unsigned int);
extern void *fn_82A2A360(void);
extern int *_errno(void);
extern int fn_82F6CB58();
extern int _NMSG_WRITE();
extern int _FF_MSGBANNER();
extern int fn_82F800C8();
extern int lbl_83263614;


void *malloc(unsigned int param_1)

{
  int iVar3;
  void *uVar1;
  void *lVar2;
  unsigned int *puVar4;
  unsigned int uVar5;
  
  if (param_1 <= 0xfffff000U) {
    do {
      iVar3 = (int)fn_82A2A360();
      if ((unsigned)iVar3 == 0) {
        _FF_MSGBANNER();
        _NMSG_WRITE(0x1e);
        fn_82F6CB58(0xff);
      }
      uVar5 = param_1 ? param_1 : 1;
      lVar2 = fn_82A28568(fn_82A2A360(),0,uVar5);
      if (lVar2 != 0) {
        break;
      }
      if (lbl_83263614 == 0) {
        puVar4 = (unsigned int *)_errno();
        *puVar4 = 0xc;
        break;
      }
      iVar3 = fn_82F800C8(param_1);
    } while (iVar3 != 0);
    if (!lVar2) {
      puVar4 = (unsigned int *)_errno();
      *puVar4 = 0xc;
    }
    return lVar2;
  }
  else {
    fn_82F800C8(param_1);
    puVar4 = (unsigned int *)_errno();
    *puVar4 = 0xc;
  }
  return 0;
}

