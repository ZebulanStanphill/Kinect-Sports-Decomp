typedef struct Sub_82FEC0A0 { int unused[3]; float result; int unused2; float value; } Sub_82FEC0A0;
typedef struct Obj_82FEC0A0 { int unused; Sub_82FEC0A0 sub; } Obj_82FEC0A0;
extern Obj_82FEC0A0 *lbl_832643D4;
extern float fn_8301E4B8(float);
static __forceinline void set_82FEC0A0(Sub_82FEC0A0 *p,float v) { p->value=v; p->result=fn_8301E4B8(v); }
void fn_82FEC0A0(float value) { set_82FEC0A0(&lbl_832643D4->sub,value); }
