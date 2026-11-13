typedef struct { unsigned char b[0x28]; } Blob_824AD898;
typedef struct { float x, y; } Vec2_824AD898;
typedef struct { char pad[0x48]; Blob_824AD898 data; } Src_824AD898;
typedef struct { void *vt; char pad[0x38]; Blob_824AD898 data; Vec2_824AD898 v[2]; float f74; } Obj_824AD898;
extern void fn_82F53A20(void *, void *);
extern void *fn_8265C9E0(unsigned);
extern char lbl_821BFF5C[];

Obj_824AD898 *fn_824AD898(Src_824AD898 *src)
{
  Obj_824AD898 *p = (Obj_824AD898 *)fn_8265C9E0(0x78);
  if (p != 0) {
    int i;
    fn_82F53A20(p, src);
    p->vt = lbl_821BFF5C;
    p->data = src->data;
    for (i = 0; i < 2; i++) {
      p->v[i].x = 0.0f;
      p->v[i].y = 0.0f;
    }
    p->f74 = 0.0f;
    return p;
  }
  return 0;
}
