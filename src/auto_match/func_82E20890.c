/* NOTE: symbols.txt splits this function in two: fn_82E208A8 (size 0x8) is
   its loop-closing `bne` + `blr`. This source is the whole function (walk
   to the leftmost node of a tree); only the symbol boundary keeps it below
   100%. */
typedef struct Node82E20890 {
    struct Node82E20890 *left;
} Node82E20890;

typedef struct Tree82E20890 {
    char pad[0xc];
    Node82E20890 *root;
} Tree82E20890;

Node82E20890 *fn_82E20890(Tree82E20890 *t)
{
    Node82E20890 *n = t->root;
    Node82E20890 *next;

    for (next = n->left; next != 0; next = next->left) {
        n = next;
    }
    return n;
}
