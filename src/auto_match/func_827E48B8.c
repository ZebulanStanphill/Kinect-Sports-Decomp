typedef struct {
    int pad0;
    int f04;
    int f08;
    int pad0C[4];
    int f1C;
    int f20;
} Cmd_827E48B8;

extern int fn_827DA5B0(int, int, int, int);

int fn_827E48B8(Cmd_827E48B8 *self)
{
    return fn_827DA5B0(self->f20, self->f08, self->f1C, self->f04) > 0 ? 0 : 2;
}
