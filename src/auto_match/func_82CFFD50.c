struct Result { unsigned char value; };
struct Result *fn_82CFFD50(struct Result *out, char *object) {
    out->value = *(int *)(object + 0) != 0;
    return out;
}
