typedef struct { unsigned char b[0x18]; } Blob_824A9EF8;
typedef struct { char pad[0x48]; Blob_824A9EF8 data; } Src_824A9EF8;
typedef struct { void *vt; char pad[0x38]; Blob_824A9EF8 data; int f54; float f58; } Obj_824A9EF8;
extern void fn_82F53A20(void *, void *);
extern void *fn_8265C9E0(unsigned);
extern char lbl_821BF9A0[];
extern float lbl_821CC160;

Obj_824A9EF8 *fn_824A9EF8(Src_824A9EF8 *src)
{
  Obj_824A9EF8 *p = (Obj_824A9EF8 *)fn_8265C9E0(0x5c);
  if (p != 0) {
    fn_82F53A20(p, src);
    p->vt = lbl_821BF9A0;
    p->data = src->data;
    p->f54 = 0;
    p->f58 = lbl_821CC160;
    return p;
  }
  return 0;
}
