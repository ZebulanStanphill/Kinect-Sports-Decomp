typedef struct Node_82965528 {
    char pad0[0x30];
    unsigned int parent; /* 0x30 */
} Node_82965528;

typedef struct Forest_82965528 {
    char pad0[0x14];
    Node_82965528 **nodes; /* 0x14 */
} Forest_82965528;

typedef struct Grid_82965528 {
    char pad0[0x8];
    unsigned int *labels; /* 0x8 */
    int width;            /* 0xc */
} Grid_82965528;

unsigned int fn_82965528(Forest_82965528 *forest, Grid_82965528 *grid, unsigned int row, int column, int pair)
{
    unsigned int label;
    unsigned int other;

    if (pair != 0) {
        label = grid->labels[column];
        other = grid->labels[grid->width + column];
        if (row != 0) {
            if (label <= other)
                label = other;
        } else {
            if (label > other)
                label = other;
        }
    } else {
        label = grid->labels[grid->width * row + column];
    }
    while (label != forest->nodes[label]->parent)
        label = forest->nodes[label]->parent;
    return label;
}
