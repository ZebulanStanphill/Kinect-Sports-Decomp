struct Result { unsigned char value; };
struct Result *fn_82CEBB78(struct Result *out, char *object) {
    out->value = *(int *)(object + 16) != 0;
    return out;
}
