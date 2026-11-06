typedef struct Obj_826C2EC8 { unsigned char (**vt)(void *); char pad[44]; unsigned value; } Obj_826C2EC8;
unsigned char fn_826C2EC8(Obj_826C2EC8 *self,Obj_826C2EC8 *p) { return p->vt[13](p) && self->value==p->value; }
