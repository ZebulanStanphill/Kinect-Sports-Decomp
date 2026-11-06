typedef struct Node_8300E6B8 { unsigned value; unsigned short index,count; unsigned extra; } Node_8300E6B8;
typedef struct { unsigned pad; Node_8300E6B8 *base; } Owner_8300E6B8;
extern Node_8300E6B8 *fn_8300E510(Owner_8300E6B8 *,Node_8300E6B8 *,unsigned,unsigned);
extern void fn_8300E630(Owner_8300E6B8 *,Node_8300E6B8 *,unsigned);
void fn_8300E6B8(Owner_8300E6B8 *self,Node_8300E6B8 *node,unsigned *key,unsigned depth,unsigned arg) {
 Node_8300E6B8 *base=self->base;
 while(base) {
  Node_8300E6B8 *cur=base+node->index;
  unsigned count=node->count;
  { Node_8300E6B8 *child=fn_8300E510(self,cur,count,*key);
   if(child) {
    if(depth==1) fn_8300E630(self,child,arg);
    else fn_8300E6B8(self,child,key+1,depth-1,arg);
   }
  }
  if(cur->value) return;
  if(!*key) return;
  if(depth==1) {fn_8300E630(self,cur,arg);return;}
  node=cur;
  base=self->base;
  depth--;
  key++;
 }

}
