typedef struct Sub_82FEC018 { float result; int unused[3]; float value; } Sub_82FEC018;
typedef struct Obj_82FEC018 { int unused; Sub_82FEC018 sub; } Obj_82FEC018;
extern Obj_82FEC018 *lbl_832643D4;
extern float fn_8301E4B8(float);
static __forceinline void set_82FEC018(Sub_82FEC018 *p, float v) { p->value=v; p->result=fn_8301E4B8(v); }
void fn_82FEC018(float v) { set_82FEC018(&lbl_832643D4->sub,v); }
