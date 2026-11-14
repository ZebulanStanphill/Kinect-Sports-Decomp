typedef struct Grid_82CABDF8 {
    char pad0[0xc];
    unsigned char *cells;
} Grid_82CABDF8;

unsigned char fn_82CABDF8(Grid_82CABDF8 *self, int x, int y)
{
    if (x > 1) {
        if (y > 1)
            return self->cells[x - 1] & 3;
    } else if (y > 1) {
        return 1;
    }
    return 2;
}
