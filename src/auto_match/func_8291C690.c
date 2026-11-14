extern int fn_8291C428(void *self, void *data, unsigned int *out);
extern unsigned int fn_8291C0A8(unsigned int value, void *data, int flag);

unsigned int fn_8291C690(void *self, unsigned int value, void *data)
{
    unsigned int result;

    if (value == 0) {
        if (fn_8291C428(self, data, &result) < 0) {
            return 0;
        }
    } else {
        result = fn_8291C0A8(~value, data, 1);
        if (result == 0) {
            return 0;
        }
    }
    return ~result;
}
