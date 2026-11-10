typedef struct Node_82F96298 Node_82F96298;
typedef struct Iter_82F96298 {void *cont;Node_82F96298 *ptr;} Iter_82F96298;
extern char *fn_82F953A8(Node_82F96298 *);
extern Node_82F96298 **fn_82F953B8(Node_82F96298 *);
extern Node_82F96298 **fn_82F92208(Node_82F96298 *);
extern Node_82F96298 *fn_82F95A78(Node_82F96298 *);
extern void __debugbreak(void);
void fn_82F96298(Iter_82F96298 *it) {
 if(!it->cont) __debugbreak();
 if(*fn_82F953A8(it->ptr)!=0) __debugbreak();
 else if(*fn_82F953A8(*fn_82F953B8(it->ptr))==0) {
  it->ptr=fn_82F95A78(*fn_82F953B8(it->ptr));
 } else {
  Node_82F96298 *pnode;
  while(*fn_82F953A8(pnode=*fn_82F92208(it->ptr))==0 && it->ptr==*fn_82F953B8(pnode))
   it->ptr=pnode;
  it->ptr=pnode;
 }
}
