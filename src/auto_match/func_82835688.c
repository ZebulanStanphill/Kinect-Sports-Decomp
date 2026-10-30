typedef struct Elem_82835688 { unsigned int a; unsigned int b; unsigned int c; unsigned int d; unsigned int e[4]; } Elem_82835688;
typedef struct EVec_82835688 { Elem_82835688 *first; Elem_82835688 *last; } EVec_82835688;
typedef struct IVec_82835688 { unsigned int *first; unsigned int *last; } IVec_82835688;
typedef struct Node_82835688 { char pad[0x10]; struct Obj_82835688 *owner; unsigned int idx; } Node_82835688;
typedef struct Obj_82835688 {
  char pad[0xa0]; unsigned int count;
  char pad2[0x388 - 0xa4]; EVec_82835688 *elems;
  char cont[0x30];
  IVec_82835688 *ints;
  char pad3[0x3c8 - 0x3c0];
  unsigned int *tbl;
} Obj_82835688;

extern void fn_8257A9F0(IVec_82835688 *, unsigned int *);
extern void fn_82822F60(void *, Node_82835688 *, void *, Node_82835688 **);
extern unsigned char fn_82824278(Elem_82835688 *);
extern unsigned char fn_82824290(Elem_82835688 *);
extern Node_82835688 *fn_828252E8(Obj_82835688 *, int);
extern void fn_82824430(void);
extern void fn_82830110(EVec_82835688 *, int);
extern void *memcpy(void *, const void *, unsigned int);

void fn_82835688(Obj_82835688 *param_1, Obj_82835688 *param_2, int param_3)
{
  EVec_82835688 *v = param_1->elems;
  unsigned int n0 = v->last - v->first;
  unsigned int i;
  unsigned int uVar1;
  Elem_82835688 *src;
  Elem_82835688 *dst;
  unsigned int *p;
  Node_82835688 *node;

  param_3 = n0 + param_3;
  fn_82830110(v, param_3);
  for (i = 0; i < param_2->count; i++) {
    uVar1 = param_1->tbl[i];
    if (uVar1 >= n0) {
      src = param_2->elems->first + i;
      dst = param_1->elems->first + uVar1;
      memcpy(dst, (unsigned char *)src, 0x20);
      if (fn_82824278(src) != 0) {
        dst->a = param_1->tbl[src->a];
      }
      if (fn_82824290(src) != 0) {
        dst->b = param_1->tbl[src->b];
      }
      dst->d = param_1->ints->last - param_1->ints->first;
      p = param_2->ints->first + src->d;
      fn_8257A9F0(param_1->ints, p);
      node = fn_828252E8(param_1, 0x18);
      node->owner = param_1;
      node->idx = param_1->tbl[i];
      fn_82822F60(param_1->cont, node, (void *)fn_82824430, &node);
      *p = 0;
    }
  }
  param_1->count = param_3;
}
