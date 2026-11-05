typedef struct Allocator_83066088 Allocator_83066088;
struct Allocator_83066088 { void *(* *vt)(Allocator_83066088 *, int); };
struct Pool_83066088 { void *head; void *blocks; Allocator_83066088 *alloc; int pad; int count; };
void fn_83066088(struct Pool_83066088 *self, int n) {
 int *block=(int *)self->alloc->vt[0](self->alloc,n*88+8);
 if(block) {
  int *p; int i;
  block[1]=n; p=block+2;
  for(i=0;i<n;i++) { *p=(int)self->head; self->head=p; p+=88/4; }
  self->count=n+self->count;
  *block=(int)self->blocks; self->blocks=block;
 }
}
