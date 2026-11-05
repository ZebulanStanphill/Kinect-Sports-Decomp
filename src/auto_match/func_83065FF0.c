typedef struct Allocator_83065FF0 Allocator_83065FF0;
struct Allocator_83065FF0 { void *(* *vt)(Allocator_83065FF0 *, int); };
struct Pool_83065FF0 { void *head; void *blocks; Allocator_83065FF0 *alloc; int pad; int count; };
void fn_83065FF0(struct Pool_83065FF0 *self, int n) {
 int *block=(int *)self->alloc->vt[0](self->alloc,n*68+8);
 if(block) {
  int *p; int i;
  block[1]=n; p=block+2;
  for(i=0;i<n;i++) { *p=(int)self->head; self->head=p; p+=68/4; }
  self->count=n+self->count;
  *block=(int)self->blocks; self->blocks=block;
 }
}
