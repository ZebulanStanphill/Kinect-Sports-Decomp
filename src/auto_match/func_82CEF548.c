extern void fn_82CEF0B8(void *,void *,void *);
extern void *fn_82CEAC28(void *);
void fn_82CEF548(void *object,void *node,void *context) { if(object) {void *next=node; do {fn_82CEF0B8(object,next,context); next=fn_82CEAC28(next);} while(next);}}
