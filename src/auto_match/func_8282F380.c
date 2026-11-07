typedef struct Node_8282F380 {
    char pad[0x1c];
    unsigned int size;
    void *data;
} Node_8282F380;

extern void fn_828223C8(void *list, Node_8282F380 **out);
extern void *fn_828252D0(unsigned int size);
extern void fn_828252D8(void *p);
extern void fn_8282F248(void *src, unsigned int srcSize, void *dst, unsigned int *size);
extern float lbl_8201ED80;

void fn_8282F380(char *self)
{
    Node_8282F380 *node;
    unsigned int size;
    float k;

    fn_828223C8(self + 0x2f4, &node);
    if (node != 0) {
        k = lbl_8201ED80;
        do {
            Node_8282F380 *n = node;
            float a = (float)n->size * k;
            float b = (float)(n->size + 11);
            void *buf;
            if (a <= b) {
                a = b;
            }
            size = (unsigned int)a;
            buf = fn_828252D0(size);
            fn_828252D8 == 0 ? (void)0 : (void)0;
            fn_8282F248(n->data, n->size, buf, &size);
            fn_828252D8(n->data);
            n->data = buf;
            n->size = size;
            fn_828223C8(node, &node);
        } while (node != 0);
    }
}
