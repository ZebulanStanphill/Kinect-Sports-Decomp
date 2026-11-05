extern int RtlEnterCriticalSection(void *);
extern int RtlLeaveCriticalSection(void *);
extern char lbl_8326434C[];
extern void *lbl_831BC768;
extern unsigned int lbl_831BC80C[];
extern void *lbl_832642EC;
extern void fn_82FA5190(void *, void *);

struct Node_82FEB998;
typedef struct NodeVT_82FEB998 {
  void (*dtor)(struct Node_82FEB998 *self, int flags);
} NodeVT_82FEB998;

typedef struct W6_82FEB998 {
  unsigned int w[6];
} W6_82FEB998;

typedef struct Node_82FEB998 {
  NodeVT_82FEB998 *vt;
  char pad4[8];
  W6_82FEB998 *src;
  char pad10[0x4c];
  int rc;
} Node_82FEB998;

extern Node_82FEB998 *fn_8301A7B8(void *, int);

int fn_82FEB998(int key, W6_82FEB998 *out)
{
  Node_82FEB998 *n;
  W6_82FEB998 **pp;
  W6_82FEB998 *src;
  int rc;
  void *heap;
  int r;

  RtlEnterCriticalSection(lbl_8326434C);
  n = fn_8301A7B8(lbl_832642EC, key);
  if (n == 0) {
    RtlLeaveCriticalSection(lbl_8326434C);
    r = 0xf;
  } else {
    pp = (int)n + 8 != 0 ? &n->src : 0;
    src = *pp;
    if (src == 0) {
      src = (W6_82FEB998 *)lbl_831BC80C;
    }
    *out = *src;
    rc = n->rc - 1;
    n->rc = rc;
    if (rc <= 0) {
      heap = lbl_831BC768;
      n->vt->dtor(n, 0);
      fn_82FA5190(heap, n);
    }
    RtlLeaveCriticalSection(lbl_8326434C);
    r = 1;
  }
  return r;
}
