typedef struct Blob_82FA4D60 { unsigned char d[0x60]; } Blob_82FA4D60;
typedef struct Impl_82FA4D60 { void *vt; Blob_82FA4D60 b; } Impl_82FA4D60;
typedef struct Alloc_82FA4D60 { void **vt; } Alloc_82FA4D60;
extern char lbl_8216CB38[];

void *fn_82FA4D60(Impl_82FA4D60 *self, Alloc_82FA4D60 *a)
{
  Impl_82FA4D60 *p = (Impl_82FA4D60 *)((void *(*)(Alloc_82FA4D60 *, int))a->vt[1])(a, 100);
  if (p != 0) {
    p->vt = lbl_8216CB38;
    p->b = self->b;
    return p;
  }
  return 0;
}
