struct Inner_82898878;
struct Vtable_82898878 { void *pad[3]; char *(*get)(struct Inner_82898878 *); };
struct Inner_82898878 { struct Vtable_82898878 *vt; };
struct Object_82898878 { char pad[0x20]; struct Inner_82898878 *inner; };
void fn_82898878(struct Object_82898878 *self, unsigned char value) {
 char *p;
 if (self->inner != 0 && self->inner->vt->get(self->inner) != 0) {
  if (self->inner != 0) p = self->inner->vt->get(self->inner);
  else p = 0;
  p[8] = value;
 }
}
