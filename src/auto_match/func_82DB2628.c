typedef struct Obj_82DB2628 {
    char pad[0x10];
    char f10[0x18];
    int f28;
    char pad2[0x1c];
    int f48;
} Obj_82DB2628;

extern void fn_82DB2098(Obj_82DB2628 *self, void *sub, void *a, int n, void *b, void *c);

void fn_82DB2628(Obj_82DB2628 *self, void *a, void *b, void *c)
{
    if (self->f48 == 0)
        return;
    fn_82DB2098(self, self->f10, a, self->f28, b, c);
}
