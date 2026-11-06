#include <stdexcept>
extern "C" void fn_82F62680(void *,int);
extern "C" void fn_82F62AB0(void *,const char *);
struct Locale_8223F248 { int base; struct { int a; unsigned char b; } part[4]; };
extern "C" Locale_8223F248 *fn_8223F248(Locale_8223F248 *self,const char *name) {
 fn_82F62680(self,0);
 self->part[0].a=0;self->part[0].b=0;self->part[1].a=0;self->part[1].b=0;
 self->part[2].a=0;self->part[2].b=0;self->part[3].a=0;self->part[3].b=0;
 if(!name) std::runtime_error("bad locale name")._Raise();
 fn_82F62AB0(self,name); return self;
}
