typedef struct Alloc_82421E98 { struct AVT_82421E98 *vt; } Alloc_82421E98;
typedef struct AVT_82421E98 {
  void *s0; void *s1; void *s2; void *s3;
  void (*free)(Alloc_82421E98 *, unsigned int, unsigned int, int);
} AVT_82421E98;
typedef struct Mgr_82421E98 { char pad[0x10]; Alloc_82421E98 *alloc; } Mgr_82421E98;
extern Mgr_82421E98 *fn_82CE5410();

typedef struct Buf_82421E98 { unsigned int ptr; unsigned int len; unsigned int cap; } Buf_82421E98;
typedef struct Obj_82421E98 { Buf_82421E98 a; Buf_82421E98 b; } Obj_82421E98;

static void Release_82421E98(Buf_82421E98 *b)
{
  Alloc_82421E98 *al = fn_82CE5410()->alloc;
  b->len = 0;
  if ((b->cap & 0x80000000) == 0) {
    al->vt->free(al, b->ptr, b->cap & 0x3fffffff, 0x10);
  }
  b->ptr = 0;
  b->cap = 0x80000000;
}

void fn_82421E98(Obj_82421E98 *param_1)
{
  Release_82421E98(&param_1->b);
  Release_82421E98(&param_1->a);
}
