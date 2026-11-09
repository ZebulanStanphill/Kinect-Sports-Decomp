typedef struct { unsigned char b[0x34]; } Blob_824AB7A0;
typedef struct { char pad[0x48]; Blob_824AB7A0 data; } Src_824AB7A0;
typedef struct { void *vt; char pad[0x38]; Blob_824AB7A0 data; } Obj_824AB7A0;
extern void fn_82F53A20(void *, void *);
extern void *fn_8265C9E0(unsigned);
extern char lbl_821BFBCC[];

Obj_824AB7A0 *fn_824AB7A0(Src_824AB7A0 *src)
{
  Obj_824AB7A0 *p = (Obj_824AB7A0 *)fn_8265C9E0(0x70);
  if (p != 0) {
    fn_82F53A20(p, src);
    p->vt = lbl_821BFBCC;
    p->data = src->data;
    return p;
  }
  return 0;
}
