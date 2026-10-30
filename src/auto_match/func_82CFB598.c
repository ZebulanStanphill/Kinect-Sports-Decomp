struct Result { unsigned char value; };
struct Result *fn_82CFB598(struct Result *out, char *object) {
    out->value = *(int *)(object + 8) != 0;
    return out;
}
