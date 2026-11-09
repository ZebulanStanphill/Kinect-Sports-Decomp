typedef struct { unsigned char b[0x2c]; } Blob_824A9590;
typedef struct { char pad[0x48]; Blob_824A9590 data; } Src_824A9590;
typedef struct { void *vt; char pad[0x38]; Blob_824A9590 data; float f68; int f6c; } Obj_824A9590;
extern void fn_82F53A20(void *, void *);
extern void *fn_8265C9E0(unsigned);
extern void fn_82F4DCF8(int id);
extern char lbl_821BF918[];
extern float lbl_821CC160;

Obj_824A9590 *fn_824A9590(Src_824A9590 *src)
{
  Obj_824A9590 *p = (Obj_824A9590 *)fn_8265C9E0(0x70);
  if (p != 0) {
    fn_82F53A20(p, src);
    p->vt = lbl_821BF918;
    p->data = src->data;
    p->f6c = 0;
    p->f68 = lbl_821CC160;
    fn_82F4DCF8(-1);
    return p;
  }
  return 0;
}
