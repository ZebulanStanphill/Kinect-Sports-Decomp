extern char lbl_8200B5A8[];
extern void fn_826824B0(void *);
typedef struct { void *ref; } Ref_826BF548;
typedef struct { void *vtable; Ref_826BF548 member; } Obj_826BF548;

void fn_826BF548(Obj_826BF548 *self)
{
  self->vtable = lbl_8200B5A8;
  {
    Ref_826BF548 *r = &self->member;
    if (r->ref) fn_826824B0(r->ref);
  }
}
