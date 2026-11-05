typedef struct Common_827C5308 C;
typedef struct { void (*error)(C *); char pad[16]; int msg; } Error_827C5308;
typedef struct { unsigned char *next; unsigned free; void (*init)(C *); unsigned char (*empty)(C *); } Dest_827C5308;
struct Common_827C5308 { Error_827C5308 *err; char pad[20]; Dest_827C5308 *dest; };
void fn_827C5308(C *c, unsigned val) { Dest_827C5308 *d=c->dest; *d->next++=val; if (--d->free == 0) { if (!d->empty(c)) { c->err->msg=24; c->err->error(c); } } }
