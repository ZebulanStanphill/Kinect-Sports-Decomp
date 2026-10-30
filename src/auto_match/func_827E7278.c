typedef struct Obj Obj;
typedef struct { void *pad[6]; void (*fn)(Obj *, void *, unsigned int); } VT_827E7278;
struct Obj { VT_827E7278 *vt; };
extern int fn_82811400(void *, int);
extern Obj *lbl_83156AA0;
void fn_827E7278(void *p)
{
  unsigned char buf[32];
  lbl_83156AA0->vt->fn(lbl_83156AA0, p, fn_82811400(buf, 4));
}
