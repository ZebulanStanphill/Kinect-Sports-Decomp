extern void *fn_82A28568(void *, int, unsigned int);
extern void *fn_82A2A360(void);
extern int *_errno(void);
extern int fn_82F6CB58();
extern int _NMSG_WRITE();
extern int _FF_MSGBANNER();
extern int fn_82F800C8();
extern int lbl_83263614;


void *malloc(unsigned int size)

{
  int rc;
  void *uVar1;
  void *res;
  unsigned int *perrno;
  unsigned int request;
  
  if (size <= 0xfffff000U) {
    do {
      rc = (int)fn_82A2A360();
      if ((unsigned)rc == 0) {
        _FF_MSGBANNER();
        _NMSG_WRITE(0x1e);
        fn_82F6CB58(0xff);
      }
      request = size ? size : 1;
      res = fn_82A28568(fn_82A2A360(),0,request);
      if (res != 0) {
        break;
      }
      if (lbl_83263614 == 0) {
        perrno = (unsigned int *)_errno();
        *perrno = 0xc;
        break;
      }
      rc = fn_82F800C8(size);
    } while (rc != 0);
    if (!res) {
      perrno = (unsigned int *)_errno();
      *perrno = 0xc;
    }
    return res;
  }
  else {
    fn_82F800C8(size);
    perrno = (unsigned int *)_errno();
    *perrno = 0xc;
  }
  return 0;
}

