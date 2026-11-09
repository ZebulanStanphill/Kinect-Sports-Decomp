extern unsigned lbl_821B6A74;
extern void fn_823E2B98(unsigned *,unsigned);
extern void fn_823E2338(unsigned *);
extern void fn_8265CA20(void *);
void fn_823E23C0(unsigned *p) {
 unsigned *node, *next;
 unsigned *tree=p+1;
 p[0]=(unsigned)&lbl_821B6A74;
 node=*(unsigned **)(tree[1]+4);
 while(*((unsigned char *)node+0x85)==0) {
  fn_823E2B98(tree,node[2]);
  next=(unsigned *)node[0];
  fn_8265CA20(node);
  node=next;
 }
 *(unsigned *)(tree[1]+4)=tree[1];
 *(unsigned *)tree[1]=tree[1];
 *(unsigned *)(tree[1]+8)=tree[1];
 tree[2]=0;
 fn_823E2338(tree);
}
