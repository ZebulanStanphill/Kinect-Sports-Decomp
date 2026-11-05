typedef struct Node_8268E7C0 { unsigned h[3]; struct Node_8268E7C0 *child[2]; unsigned pad[4],size; } Node_8268E7C0;
Node_8268E7C0 *fn_8268E7C0(Node_8268E7C0 **root,unsigned n) {
 Node_8268E7C0 *t=*root,*best=0,*other; unsigned diff=~0u,bits;
 if(!t) return best;
 other=0; bits=n;
 for(;;) { unsigned size=t->size,d=size-n; Node_8268E7C0 *right;
  if(size>=n && d<diff) { best=t; diff=d; if(!d) return t; }
  right=t->child[1]; t=t->child[bits>>31];
  if(right && right!=t) other=right;
  if(!t) break; bits<<=1;
 }
 t=other; if(!t) return best;
 do { unsigned size=t->size,d=size-n; if(size>=n && d<diff) { diff=d; best=t; }
  t=t->child[t->child[0]==0];
 } while(t);
 return best;
}