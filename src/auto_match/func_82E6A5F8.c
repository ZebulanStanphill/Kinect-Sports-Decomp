typedef struct Cell_82E6A5F8 {
    unsigned char data[0x70];
} Cell_82E6A5F8;

typedef struct Layout_82E6A5F8 {
    unsigned char pad[0x22];
    unsigned short columns;
    unsigned char pad24[0xc0];
    int stride;
} Layout_82E6A5F8;

typedef struct Grid_82E6A5F8 {
    Layout_82E6A5F8 *layout;
    unsigned char pad4[0x77d4];
    Cell_82E6A5F8 *front;
    Cell_82E6A5F8 *back;
    unsigned char pad77e0[0x10c];
    Cell_82E6A5F8 empty;
    unsigned char pad795c[0x108d0 - 0x795c];
    unsigned short rows;
} Grid_82E6A5F8;

extern void *memcpy(void *dst, const void *src, unsigned int size);

void fn_82E6A5F8(Grid_82E6A5F8 *self)
{
    Layout_82E6A5F8 *layout = self->layout;
    Cell_82E6A5F8 *empty = &self->empty;
    unsigned short *columns = &layout->columns;
    int row;
    int column;

    for (row = 0; row < self->rows + 1; row++) {
        for (column = 0; column < *columns; column++) {
            int offset = (layout->columns * row + column) * layout->stride * sizeof(Cell_82E6A5F8);
            Cell_82E6A5F8 *front = (Cell_82E6A5F8 *)((char *)self->front + offset);
            Cell_82E6A5F8 *back = (Cell_82E6A5F8 *)((char *)self->back + offset);
            memcpy(front, empty, sizeof(Cell_82E6A5F8));
            memcpy(back, empty, sizeof(Cell_82E6A5F8));
        }
    }
}
