extern char lbl_8201D5F4[];
extern void fn_822315A0(void *);
typedef struct { void *ref; } Ref_827E4458;
typedef struct { void *vtable; int pad[5]; Ref_827E4458 member; } Obj_827E4458;

void fn_827E4458(Obj_827E4458 *self)
{
  self->vtable = lbl_8201D5F4;
  {
    Ref_827E4458 *r = &self->member;
    if (r->ref) fn_822315A0(r->ref);
  }
}
