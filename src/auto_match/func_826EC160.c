typedef struct Dest_826EC160 {unsigned kind,value,pad[3]; unsigned short *data; unsigned size;} Dest_826EC160;
typedef struct Tri_826EC160 {unsigned x,y,z;} Tri_826EC160;
typedef struct Src_826EC160 {char pad[0x184]; unsigned count;char pad2[8];Tri_826EC160 **pages;} Src_826EC160;
extern void fn_826EBDE8(void *,unsigned);
void fn_826EC160(Dest_826EC160 *d,unsigned value,Src_826EC160 *s) {
 unsigned old=d->size; unsigned n,i;
 if(old==0) {d->value=value;d->kind=1;}
 n=s->count;fn_826EBDE8(&d->data,n*3+old);
 for(i=0;i<n;i++) {Tri_826EC160 *t=&s->pages[i>>10][i&1023];d->data[old++]=(unsigned short)t->x;d->data[old++]=(unsigned short)t->y;d->data[old++]=(unsigned short)t->z;}
}
