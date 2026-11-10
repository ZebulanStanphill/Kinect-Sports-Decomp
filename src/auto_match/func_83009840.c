struct Object_83009840;
struct Vtable_83009840 { void *pad[15]; void (*update)(struct Object_83009840 *, int, float, int, int); };
struct Object_83009840 { struct Vtable_83009840 *vt; char pad[0x2c-4]; short value; };
extern unsigned char fn_83007888(struct Object_83009840 *, int);
extern void fn_83004190(short *, float);
void fn_83009840(struct Object_83009840 *self, float value) {
 if (fn_83007888(self, 1))
  self->vt->update(self, 0, value - (float)self->value * 0.1f, 0, 0);
 fn_83004190(&self->value, value);
}
