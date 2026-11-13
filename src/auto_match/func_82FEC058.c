typedef struct Sub_82FEC058 { float result; int unused[3]; float value; } Sub_82FEC058;
typedef struct Obj_82FEC058 { int unused; Sub_82FEC058 sub; } Obj_82FEC058;
extern Obj_82FEC058 *lbl_832643D4;
extern float fn_8301E4B8(float);
static __forceinline void set_82FEC058(Sub_82FEC058 *p, float v) { p->value=v; p->result=fn_8301E4B8(v); }
void fn_82FEC058(float delta) { Sub_82FEC058 *p = &lbl_832643D4->sub; set_82FEC058(p, p->value + delta); }
