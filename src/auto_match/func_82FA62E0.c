typedef struct Node_82FA62E0 {
    int pad[2];
    struct Node_82FA62E0 *prev;
    void *owner;
} Node_82FA62E0;

typedef struct Tbl_82FA62E0 {
    unsigned int top;
    unsigned int mid[24];
    Node_82FA62E0 *heads[24][32];
} Tbl_82FA62E0;

extern Node_82FA62E0 lbl_83264218;

void fn_82FA62E0(Tbl_82FA62E0 *self)
{
    int i;
    int j;

    lbl_83264218.prev = &lbl_83264218;
    lbl_83264218.owner = &lbl_83264218;
    lbl_83264218.pad[1] = 0;
    lbl_83264218.pad[0] = 0;
    self->top = 0;
    for (i = 0; i < 24; i++) {
        self->mid[i] = 0;
        for (j = 0; j < 32; j++)
            self->heads[i][j] = &lbl_83264218;
    }
}
