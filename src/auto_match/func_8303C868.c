typedef struct Vec_8303C868 { float x,y,z; } Vec_8303C868;
typedef struct Obj_8303C868 { char pad[0x28]; Vec_8303C868 v; int value; } Obj_8303C868;
void fn_8303C868(Obj_8303C868 *self,float x,int value,float y,float z) {
 Vec_8303C868 *v=&self->v;
 v->x=x; v->y=y; v->z=z; self->value=value;
}
