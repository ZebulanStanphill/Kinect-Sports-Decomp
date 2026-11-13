extern float lbl_8200DFF4;
typedef struct Obj_82FE6088 { char pad[0x14]; short count; short pad16; float scale; } Obj_82FE6088;
float fn_82FE6088(Obj_82FE6088 *o) { return (o->scale * lbl_8200DFF4) * (float)o->count; }
