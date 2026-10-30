struct Result { unsigned char value; };
struct Result *fn_82CFA860(struct Result *out, char *object) {
    out->value = *(int *)(object + 24) != 0;
    return out;
}
