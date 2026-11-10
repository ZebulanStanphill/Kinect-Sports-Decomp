typedef struct Elem_82FE0960 { char data[0x6c]; } Elem_82FE0960;
typedef struct Obj_82FE0960 { char pad[0xc4]; unsigned count; int arg; char gap[8]; Elem_82FE0960 *array; char gap2[12]; float x,y; } Obj_82FE0960;
extern void fn_82FE4CC8(Elem_82FE0960 *,float,float,int);
void fn_82FE0960(Obj_82FE0960 *self) {
 unsigned i;
 for(i=0;i<self->count;i++) fn_82FE4CC8(&self->array[i],self->x,self->y,self->arg);
}
