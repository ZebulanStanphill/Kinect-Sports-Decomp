typedef struct Node_82B45698 {
    int pad,type;
    struct Node_82B45698 *child,*extra;
    int mode;
    int pad14;
    struct Node_82B45698 *sub;
    int a,b;
    char pad24[12];
    struct Node_82B45698 *next;
}
Node_82B45698;
extern int fn_82AA66A8(void *,int,...);
int fn_82B45698(void *ctx,Node_82B45698 *p,int *a,int *b) {
    while(p->type==1) {
        Node_82B45698 *q;
        if(p->extra) return 0;
        q=p->child;
        if(!q || q->type!=6) return fn_82AA66A8(ctx,0x12c1);
        if(q->mode!=1) return fn_82AA66A8(ctx,0x12c1);
        q=q->sub;
        if(!q || q->type!=11) return fn_82AA66A8(ctx,0x12c1);
        p=q->next;
    }
    if(p->type==9) {
        *a=p->a;
        *b=p->b;
        return 1;
    }
    return fn_82AA66A8(ctx,0x12c1);
}
