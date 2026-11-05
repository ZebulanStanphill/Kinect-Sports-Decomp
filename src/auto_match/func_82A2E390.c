typedef struct Link_82A2E390 { struct Link_82A2E390 *next; struct Link_82A2E390 *prev; } Link_82A2E390;
typedef struct {
  char pad0[8];
  void *f8;
  int fc;
  char pad10[0x40];
  Link_82A2E390 link;
} Stack_82A2E390;
typedef struct {
  char pad0[4];
  unsigned f4;
  char pad8[6];
  unsigned short fe;
  char pad10[8];
  Stack_82A2E390 *f18;
} Sub_82A2E390;
typedef struct { char pad[0x50]; Sub_82A2E390 *sub; } Irp_82A2E390;
typedef struct {
  char pad0[0x35];
  unsigned char f35;
  char pad36[2];
  char share[1];
} File_82A2E390;
typedef struct {
  char pad0[0x80];
  Link_82A2E390 head;
} Dev_82A2E390;

extern void IoSetShareAccess(unsigned, unsigned, void *, void *);
extern int IoCheckShareAccess(unsigned, unsigned, void *, void *, int);
extern int fn_82A2C520(void *, unsigned);

int fn_82A2E390(char *dev, Irp_82A2E390 *irp, File_82A2E390 *file, int arg)
{
  Sub_82A2E390 *sub = irp->sub;
  unsigned acc = sub->f4;
  unsigned short sh = sub->fe;
  Stack_82A2E390 *st = sub->f18;
  Link_82A2E390 *first;
  int hr;

  if (*(unsigned char *)(dev + 0xce) == 0) {
    hr = 0xc0000022;
  } else {
    if (*(char *)((char *)file + 0x38) == 0) {
      IoSetShareAccess(acc, sh, st, (char *)file + 0x38);
    } else {
      hr = IoCheckShareAccess(acc, sh, st, (char *)file + 0x38, 1);
      if (hr < 0)
        return hr;
    }
    fn_82A2C520(file, file->f35 & 1);
    hr = 0;
    st->f8 = file;
    st->fc = 0;
    first = *(Link_82A2E390 **)(dev + 0x80);
    st->link.prev = (Link_82A2E390 *)(dev + 0x80);
    st->link.next = first;
    first->prev = &st->link;
    *(Link_82A2E390 **)(dev + 0x80) = &st->link;
    *(int *)((char *)irp + 0x14) = arg;
  }
  return hr;
}
