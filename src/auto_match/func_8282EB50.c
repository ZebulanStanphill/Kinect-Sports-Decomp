typedef struct Item_8282EB50 { unsigned a,b,c,d; } Item_8282EB50;
extern void fn_8282EAE8(Item_8282EB50 **,int,int,Item_8282EB50 **,unsigned);
void fn_8282EB50(Item_8282EB50 **a,int hole,int n,Item_8282EB50 **v,unsigned pred) {
 int top=hole,child=2*(hole+1);
 while(child<n) {
  if(a[child]->d+a[child]->b <= a[child-1]->d) --child;
  a[hole]=a[child];hole=child;child=2*(child+1);
 }
 if(child==n) { a[hole]=a[n-1];hole=n-1; }
 fn_8282EAE8(a,hole,top,v,pred);
}
