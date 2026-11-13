typedef struct Req_829E0300 {
  int size;
  int pad;
} Req_829E0300;
typedef struct Obj_829E0300 {
  unsigned char f0;
  char pad1[3];
  int f4;
  void *f8;
  int fc;
  void *f10;
  void *f14;
} Obj_829E0300;
typedef struct Sys_829E0300 {
  char pad[0x8f4cc];
  void *heap;
} Sys_829E0300;
extern void XamXlfsUninitializeUploadQueue(void *h, Req_829E0300 *r);
extern void fn_82A28E60(void *heap, int a, void *p);
extern Sys_829E0300 *lbl_832179FC;

extern void *memset(void *, int, unsigned);

void fn_829E0300(Obj_829E0300 *o)
{
  if (o->f14 != 0) {
    Req_829E0300 r;
    memset(&r, 0, 8);
    r.size = 8;
    XamXlfsUninitializeUploadQueue(o->f14, &r);
    o->f14 = 0;
  }
  if (o->f10 != 0) {
    fn_82A28E60(lbl_832179FC->heap, 0, o->f10);
    o->f10 = 0;
  }
  if (o->f8 != 0) {
    fn_82A28E60(lbl_832179FC->heap, 0, o->f8);
    o->f8 = 0;
  }
  o->f0 = 0;
  o->f4 = 0;
  o->fc = 0;
}
