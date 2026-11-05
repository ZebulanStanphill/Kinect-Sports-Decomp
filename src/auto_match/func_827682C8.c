static __forceinline unsigned char eq(unsigned short *a,unsigned short *b) { return b[0]==a[0] && b[1]==a[1]; }
typedef struct { int next; unsigned hash; unsigned short x,y; int pad; } Entry_827682C8;
typedef struct { Entry_827682C8 *data; } Hash_827682C8;
int fn_827682C8(Hash_827682C8 *self,unsigned short *key,unsigned hash) {
 unsigned result=hash; Entry_827682C8 *e=(Entry_827682C8 *)((char *)(self->data+hash)+8);
 if(e->next != -2 && e->hash==hash) for(;;) {
  if(e->hash==hash) { unsigned char equal=eq(key,(unsigned short *)&e->x); if(equal) return result; }
  result=e->next; if((int)result == -1) break;
  e=(Entry_827682C8 *)((char *)(self->data+result)+8);
 }
 return -1;
}
