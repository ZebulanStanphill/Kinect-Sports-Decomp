extern char lbl_8201D108[];
extern void fn_822315A0(void *);
typedef struct { void *ref; } Ref_827E27F0;
typedef struct { void *vtable; int pad[3]; Ref_827E27F0 member; } Obj_827E27F0;

void fn_827E27F0(Obj_827E27F0 *self)
{
  self->vtable = lbl_8201D108;
  {
    Ref_827E27F0 *r = &self->member;
    if (r->ref) fn_822315A0(r->ref);
  }
}
