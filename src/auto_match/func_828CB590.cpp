typedef struct Node_828CB590 { struct Node_828CB590 *parent,*left,*right; int pad; char key[4]; } Node_828CB590;
typedef struct Hint_828CB590 { int left; Node_828CB590 *parent; } Hint_828CB590;
typedef struct Result_828CB590 { Node_828CB590 *node; unsigned char failed; } Result_828CB590;
extern "C" bool fn_828E0270(const void *,const void *);
extern "C" Result_828CB590 *fn_828CB590(Result_828CB590 *out,Node_828CB590 **root,char *value,int unused,Hint_828CB590 *hint,int *steps) {
 int count=0;Node_828CB590 *cur=*root,*parent=(Node_828CB590 *)root,*found=0;bool less=true;
 while(cur!=0) {
  count++;parent=cur;less=fn_828E0270(value+0x10,cur->key);
  { Node_828CB590 *next; if((unsigned char)less)next=cur->left;else {next=cur->right;found=cur;} cur=next; }
 }
 if(steps)*steps=count;
 if(found && !(unsigned char)fn_828E0270(found->key,value+0x10)) {out->node=found;out->failed=0;return out;}
 { unsigned char *h=(unsigned char *)hint;Node_828CB590 **p=&hint->parent;*h=less;*p=parent;}out->node=0;out->failed=1;return out;
}
