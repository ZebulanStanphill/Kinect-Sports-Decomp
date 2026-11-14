typedef struct Obj_82DB0B38 { char pad[0x50]; char sub[0x19]; unsigned char flag; } Obj_82DB0B38;
extern void fn_82CEA480(void *sub);

void fn_82DB0B38(Obj_82DB0B38 *self)
{
    self->flag = 0;
    fn_82CEA480(self->sub);
}
