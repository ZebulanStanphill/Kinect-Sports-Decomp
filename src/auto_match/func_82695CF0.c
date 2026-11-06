extern void fn_826824B0(void *);
extern char lbl_8200612C[];
struct OwnedPair_82695CF0 { void *a,*b; unsigned char flags; char pad[3]; };
struct Owner_82695CF0 { void *vtable; char pad[12]; struct OwnedPair_82695CF0 first,second; };
void fn_82695CF0(struct Owner_82695CF0 *self) {
 struct OwnedPair_82695CF0 *p=&self->second;
 if(!(p->flags&2) && p->a) fn_826824B0(p->a); p->a=0;
 if(!(p->flags&1) && p->b) fn_826824B0(p->b); p->b=0;
 { struct OwnedPair_82695CF0 *q=&self->first;
 if(!(q->flags&2) && q->a) fn_826824B0(q->a); q->a=0;
 if(!(q->flags&1) && q->b) fn_826824B0(q->b); q->b=0;
 }
 self->vtable=lbl_8200612C;
}
