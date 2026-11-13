typedef struct Node { char pad[0x44]; struct Node *child; } Node;
extern void *fn_82862338(Node *,void *,unsigned int);
extern void *fn_82862150(void *,void *);
void fn_8285FA78(Node *self,void *context,unsigned char **out)
{
  Node *node=self->child;
  if (node) {
    unsigned int i=0;
    unsigned char *p=*out;
    if (*(unsigned int *)((char *)node+0x44)>0) {
      do {
        void *item=fn_82862338(node,context,i);
        void *value=fn_82862150(item,context);
        i++;
        *p=~((0x100 >> *(unsigned short *)((char *)value+8)) + 0xff);
        p++;
      } while(i < *(unsigned int *)((char *)node+0x44));
    }
    *out=p;
  }
}
