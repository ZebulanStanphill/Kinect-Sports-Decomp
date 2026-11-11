typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
typedef struct Obj_83067658 Obj_83067658;
struct Obj_83067658 { void (**vt)(Obj_83067658 *,int,const char *,va_list); };
void fn_83067658(Obj_83067658 *self,int level,const char *fmt,...) {
 va_list ap;
 __va_start(&ap,fmt);
 self->vt[0](self,level,fmt,ap);
}
