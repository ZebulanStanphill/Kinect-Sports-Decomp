extern unsigned int fn_82766450(void *reader, unsigned int offset, int *value);
extern unsigned int fn_827664B0(void *reader, unsigned int offset, unsigned int *value);
extern unsigned int fn_82766860(void *reader, unsigned int offset, unsigned int *value);
extern unsigned int fn_827668B8(void *reader, unsigned int offset, char *value);

/* Exact only when compiled together with the two inline readers fn_82766860 and
   fn_827664B0: the compiler then keeps both counters in registers across the calls. */
unsigned int fn_827B0790(char *self, unsigned int offset)
{
    int value;
    unsigned int count;
    char text[8];
    unsigned int length;
    void *reader = self + 12;

    offset += fn_82766450(reader, offset, &value);
    offset += fn_82766450(reader, offset, &value);
    offset += fn_82766450(reader, offset, &value);
    offset += fn_82766450(reader, offset, &value);
    offset += fn_82766860(reader, offset, &count);
    while (count-- != 0) {
        offset += fn_82766450(reader, offset, &value);
        offset += fn_82766450(reader, offset, &value);
        offset += fn_827664B0(reader, offset, &length);
        if ((length & 1) == 0) {
            length >>= 1;
            while (length-- != 0) {
                offset += fn_827668B8(reader, offset, text);
            }
        }
    }
    return offset;
}
