typedef struct { unsigned char b[0x20]; } Blob_8269A358;
typedef struct Node_8269A358 {
    char pad[0x20];
    struct Node_8269A358 *child;
    Blob_8269A358 data;
} Node_8269A358;
extern void fn_8268D5D8(void *, void *);
void fn_8269A358(Node_8269A358 *n, Blob_8269A358 *out)
{
    if (n->child != 0) {
        fn_8269A358(n->child, out);
        fn_8268D5D8(out, &n->data);
    } else {
        *out = n->data;
    }
}
