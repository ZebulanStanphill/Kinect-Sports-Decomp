typedef struct Object_828748C0 Object_828748C0;
typedef struct Vtable_828748C0 { void *pad[7]; int (*call)(Object_828748C0 *, void *); } Vtable_828748C0;
struct Object_828748C0 { Vtable_828748C0 *vt; char pad[0x14]; int data; };
int fn_828748C0(Object_828748C0 *self) {
 if (self->vt->call(self,&self->data)<0) return 0xa0260000;
 return 0x20260000;
}
