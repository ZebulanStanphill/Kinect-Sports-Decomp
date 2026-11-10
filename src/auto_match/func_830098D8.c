struct Object_830098D8;
struct Vtable_830098D8 { void *pad[15]; void (*update)(struct Object_830098D8 *, int, float, int, int); };
struct Object_830098D8 { struct Vtable_830098D8 *vt; char pad[0x2e-4]; short value; };
extern unsigned char fn_83007888(struct Object_830098D8 *, int);
extern void fn_83004190(short *, float);
void fn_830098D8(struct Object_830098D8 *self, float value) {
 if (fn_83007888(self, 8))
  self->vt->update(self, 1, value - (float)self->value * 0.1f, 0, 0);
 fn_83004190(&self->value, value);
}
