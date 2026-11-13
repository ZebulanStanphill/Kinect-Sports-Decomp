extern void fn_828B82D0(void *);
extern char lbl_820252D0[];

typedef struct Child_828B8888 Child_828B8888;
typedef struct {
  void (*del)(Child_828B8888 *, int);
  void (*s4)(Child_828B8888 *);
  void (*s8)(Child_828B8888 *);
} ChildVt_828B8888;
struct Child_828B8888 { ChildVt_828B8888 *vt; };
typedef struct {
  void *vt;
  char pad[0x4c];
  Child_828B8888 *child;
} Obj_828B8888;

void fn_828B8888(Obj_828B8888 *self)
{
  self->vt = lbl_820252D0;
  if (self->child != 0) {
    self->child->vt->s8(self->child);
    if (self->child != 0) {
      self->child->vt->del(self->child, 1);
    }
    self->child = 0;
  }
  fn_828B82D0(self);
}
