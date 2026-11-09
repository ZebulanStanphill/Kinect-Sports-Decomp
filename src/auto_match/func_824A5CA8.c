typedef struct { unsigned char b[0x14]; float f14; unsigned char c[4]; } Blob_824A5CA8;
typedef struct { char pad[0x48]; Blob_824A5CA8 data; } Src_824A5CA8;
typedef struct { void *vt; char pad[0x38]; Blob_824A5CA8 data; float f58; int f5c; } Obj_824A5CA8;
extern void fn_82F53A20(void *, void *);
extern void *fn_8265C9E0(unsigned);
extern char lbl_821BF758[];

Obj_824A5CA8 *fn_824A5CA8(Src_824A5CA8 *src)
{
  Obj_824A5CA8 *p = (Obj_824A5CA8 *)fn_8265C9E0(0x60);
  if (p != 0) {
    fn_82F53A20(p, src);
    p->vt = lbl_821BF758;
    p->data = src->data;
    p->f58 = src->data.f14;
    p->f5c = 0;
    return p;
  }
  return 0;
}
