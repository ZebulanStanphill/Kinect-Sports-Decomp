extern void fn_82FA5190(unsigned int, void *);
extern unsigned int lbl_831BC768;
typedef struct { void *p,*q,*end; } Buffer;
typedef struct { int pad0, val, pad1; void *data; int pad2[3], flags, pad3; Buffer b; } Obj;

void fn_83029E70(Obj *o) { o->val=0; {Buffer *inline_clear_0=(&o->b); if(inline_clear_0->p) { inline_clear_0->q=inline_clear_0->p; fn_82FA5190(lbl_831BC768,inline_clear_0->p); inline_clear_0->p=0; inline_clear_0->q=0; inline_clear_0->end=0; } } if ((o->flags & 2) && o->data) { fn_82FA5190(lbl_831BC768,o->data); o->data=0; } }
