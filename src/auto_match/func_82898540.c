struct Inner_82898540;
struct Vtable_82898540 { void *pad[3]; unsigned char *(*get)(struct Inner_82898540 *); };
struct Inner_82898540 { struct Vtable_82898540 *vt; };
struct Object_82898540 { char pad[0x20]; struct Inner_82898540 *inner; };
unsigned char fn_82898540(struct Object_82898540 *self) {
 unsigned char *p;
 unsigned char r = 0;
 if (self->inner != 0 && self->inner->vt->get(self->inner) != 0) {
  if (self->inner != 0) p = self->inner->vt->get(self->inner);
  else p = 0;
  r = p[8];
 }
 return r;
}
