struct Object_8265EE58 { int pad[4]; int a, b; };
extern void fn_8265F758(struct Object_8265EE58 *);
struct Object_8265EE58 *fn_8265EE58(struct Object_8265EE58 *self) {
 fn_8265F758(self);
 self->a = 0;
 self->b = 1;
 return self;
}
