/* UTF-8 encoder: append one character to buffer[*index], advancing *index. */
void fn_826BD398(char *buffer, int *index, unsigned int c)
{
    if (c <= 0x7f) {
        buffer[(*index)++] = (char)c;
    } else if (c <= 0x7ff) {
        buffer[(*index)++] = (char)(0xc0 | (c >> 6));
        buffer[(*index)++] = (char)(0x80 | (c & 0x3f));
    } else if (c <= 0xffff) {
        buffer[(*index)++] = (char)(0xe0 | (c >> 12));
        buffer[(*index)++] = (char)(0x80 | ((c >> 6) & 0x3f));
        buffer[(*index)++] = (char)(0x80 | (c & 0x3f));
    } else if (c <= 0x1fffff) {
        buffer[(*index)++] = (char)(0xf0 | (c >> 18));
        buffer[(*index)++] = (char)(0x80 | ((c >> 12) & 0x3f));
        buffer[(*index)++] = (char)(0x80 | ((c >> 6) & 0x3f));
        buffer[(*index)++] = (char)(0x80 | (c & 0x3f));
    } else if (c <= 0x3ffffff) {
        buffer[(*index)++] = (char)(0xf8 | (c >> 24));
        buffer[(*index)++] = (char)(0x80 | ((c >> 18) & 0x3f));
        buffer[(*index)++] = (char)(0x80 | ((c >> 12) & 0x3f));
        buffer[(*index)++] = (char)(0x80 | ((c >> 6) & 0x3f));
        buffer[(*index)++] = (char)(0x80 | (c & 0x3f));
    } else if (c <= 0x7fffffff) {
        buffer[(*index)++] = (char)(0xfc | (c >> 30));
        buffer[(*index)++] = (char)(0x80 | ((c >> 24) & 0x3f));
        buffer[(*index)++] = (char)(0x80 | ((c >> 18) & 0x3f));
        buffer[(*index)++] = (char)(0x80 | ((c >> 12) & 0x3f));
        buffer[(*index)++] = (char)(0x80 | ((c >> 6) & 0x3f));
        buffer[(*index)++] = (char)(0x80 | (c & 0x3f));
    }
}
