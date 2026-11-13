typedef struct Sub_82FEC0E0 { int unused[3]; float result; int unused2; float value; } Sub_82FEC0E0;
typedef struct Obj_82FEC0E0 { int unused; Sub_82FEC0E0 sub; } Obj_82FEC0E0;
extern Obj_82FEC0E0 *lbl_832643D4;
extern float fn_8301E4B8(float);
static __forceinline void set_82FEC0E0(Sub_82FEC0E0 *p, float v) { p->value=v; p->result=fn_8301E4B8(v); }
void fn_82FEC0E0(float delta) { Sub_82FEC0E0 *p = &lbl_832643D4->sub; set_82FEC0E0(p, p->value + delta); }
