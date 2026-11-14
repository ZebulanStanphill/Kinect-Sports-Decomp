typedef struct Obj_826D0FD8 {
    int f0;
    unsigned short f4;
    unsigned short f6;
} Obj_826D0FD8;

extern void fn_826D0E88(Obj_826D0FD8 *self, unsigned int id, void *arg);

void fn_826D0FD8(Obj_826D0FD8 *self, void *arg)
{
    fn_826D0E88(self, self->f4, arg);
}
