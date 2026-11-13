typedef struct Obj_82FA9C30 { int pad[2]; int pos; int neg; int pad2[12]; int busy; } Obj_82FA9C30;

unsigned char fn_82FA9C30(Obj_82FA9C30 *self)
{
    return self->busy == 0 && self->pos < -self->neg;
}
