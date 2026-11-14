typedef struct Obj_82DB3140 {
    char pad[0x10];
    void *target;
} Obj_82DB3140;

extern void fn_83083900(void *target, void *p);

void fn_82DB3140(Obj_82DB3140 *self, char *other)
{
    fn_83083900(self->target, other + 0x10);
}
