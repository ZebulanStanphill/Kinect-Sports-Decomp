typedef struct Object_8254A608 { char pad[0x1d8]; unsigned v[4]; } Object_8254A608;
void fn_8254A608(Object_8254A608 *self, const unsigned *src) {
 if (src) { self->v[0]=src[0]; self->v[1]=src[1]; self->v[2]=src[2]; self->v[3]=src[3]; }
 else { self->v[0]=0; self->v[1]=0; self->v[2]=0; self->v[3]=0; }
}
