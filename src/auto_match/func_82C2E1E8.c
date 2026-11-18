void *memset(void *dst, int value, unsigned int size);

typedef struct Cell_82C2E1E8 {
    char data[0x1c];
} Cell_82C2E1E8;

typedef struct Obj_82C2E1E8 {
    char pad000[0x3c];
    int level; /* 0x03c */
    char pad040[0xb4];
    int size; /* 0x0f4 */
    char pad0f8[0x64];
    Cell_82C2E1E8 ***grid; /* 0x15c */
} Obj_82C2E1E8;

extern void *fn_82C2B580(unsigned int size);

int fn_82C2E1E8(Obj_82C2E1E8 *self)
{
    int hr = 0;
    int i;
    int j;

    if (self->level > 2) {
        self->grid = (Cell_82C2E1E8 ***)fn_82C2B580(self->size * 4);
        if (self->grid == 0) {
            hr = 0x8007000e;
            goto done;
        }
        memset(self->grid, 0, self->size * 4);
        for (i = 0; i < self->size; i++) {
            self->grid[i] = (Cell_82C2E1E8 **)fn_82C2B580(self->size * 4);
            if (self->grid[i] == 0) {
                hr = 0x8007000e;
                goto done;
            }
            memset(self->grid[i], 0, self->size * 4);
            for (j = 0; j < self->size; j++) {
                self->grid[i][j] = (Cell_82C2E1E8 *)fn_82C2B580(sizeof(Cell_82C2E1E8));
                if (self->grid[i][j] == 0) {
                    hr = 0x8007000e;
                    goto done;
                }
                memset(self->grid[i][j], 0, sizeof(Cell_82C2E1E8));
            }
        }
    }
done:
    return hr;
}
