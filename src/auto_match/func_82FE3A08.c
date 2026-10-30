typedef struct Blob_82FE3A08 { unsigned char d[0xbc]; } Blob_82FE3A08;
typedef struct Impl_82FE3A08 { void *vt; Blob_82FE3A08 b; } Impl_82FE3A08;
typedef struct Alloc_82FE3A08 { void **vt; } Alloc_82FE3A08;
extern char lbl_82175448[];

void *fn_82FE3A08(Impl_82FE3A08 *self, Alloc_82FE3A08 *a)
{
  Impl_82FE3A08 *p = (Impl_82FE3A08 *)((void *(*)(Alloc_82FE3A08 *, int))a->vt[1])(a, 0xc0);
  if (p != 0) {
    p->vt = lbl_82175448;
    p->b = self->b;
    return p;
  }
  return 0;
}
