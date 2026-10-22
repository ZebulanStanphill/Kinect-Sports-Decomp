typedef struct Item { unsigned int a,b; unsigned short count; } Item;
extern void fn_828644D0(void *);
extern Item *fn_82862130(void *,void *);
extern Item *fn_82862150(Item *,void *);
extern void fn_828641C8(Item *,int,unsigned int);
extern void *lbl_832116B4;
void fn_828645C8(void *self) {
  Item *first,*second;
  fn_828644D0(self);
  first=fn_82862130(self,lbl_832116B4);
  second=fn_82862150(first,lbl_832116B4);
  if (first->count) {
    fn_828641C8(first,0,second->b);
    second->count=first->count+2;
  } else second->count=0;
}
