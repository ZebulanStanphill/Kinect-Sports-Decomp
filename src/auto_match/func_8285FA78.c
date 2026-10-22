typedef unsigned char byte;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef struct Node { char pad[0x44]; struct Node *child; } Node;
extern void *fn_82862338(Node *,void *,uint);
extern void *fn_82862150(void *,void *);
void fn_8285FA78(Node *self,void *context,byte **out)
{
  Node *node=self->child;
  if (node) {
    uint i=0;
    byte *p=*out;
    if (*(uint *)((char *)node+0x44)>0) {
      do {
        void *item=fn_82862338(node,context,i);
        void *value=fn_82862150(item,context);
        i++;
        *p=~((0x100 >> *(ushort *)((char *)value+8)) + 0xff);
        p++;
      } while(i < *(uint *)((char *)node+0x44));
    }
    *out=p;
  }
}
